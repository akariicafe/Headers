@class NSArray, RKResponseCollection, RKRankLearner, NSObject;
@protocol OS_dispatch_queue;

@interface RKMessageResponseManager : NSObject

@property (retain) RKResponseCollection *collection;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSArray *preferredLanguages;
@property (retain) RKRankLearner *rankLearner;

+ (id)sharedManager;

- (void)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forContext:(id)a2 withLanguage:(id)a3 options:(unsigned long long)a4 completionBlock:(id /* block */)a5;
- (void).cxx_destruct;
- (id)init;
- (id)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forContext:(id)a2 withLanguage:(id)a3 options:(unsigned long long)a4;
- (void)registerResponse:(id)a0 forMessage:(id)a1 forContext:(id)a2 withLanguage:(id)a3;
- (id)initWithDynamicDataURL:(id)a0;
- (void)flushDynamicData;
- (id)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 withLanguage:(id)a3 options:(unsigned long long)a4;
- (void)resetRegisteredResponses;
- (id)initWithDynamicDataURL:(id)a0 displayStringsProvider:(id)a1;
- (id)responsesForMessageImp:(id)a0 maximumResponses:(unsigned long long)a1 forRecipientID:(id)a2 forConversationHistory:(id)a3 forContext:(id)a4 withLanguage:(id)a5 options:(unsigned long long)a6;
- (id)responsesForMessageWithLanguageDetectionImp:(id)a0 maximumResponses:(unsigned long long)a1 forRecipientID:(id)a2 forConversationHistory:(id)a3 forContext:(id)a4 withLanguage:(id *)a5 inputModes:(id)a6 options:(unsigned long long)a7;
- (BOOL)usePersonalizedRanking;
- (id)getRankLearner;
- (void)registerResponse:(id)a0 forMessage:(id)a1 forContext:(id)a2 withEffectiveDate:(id)a3 withLanguage:(id)a4;
- (id)categoryForMessageWithoutQueue:(id)a0 langID:(id)a1;
- (id)initWithDynamicDataURL:(id)a0 withBundleURL:(id)a1;
- (id)initWithAssetPlistURL:(id)a0;
- (void)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 withLanguage:(id)a3 options:(unsigned long long)a4 completionBlock:(id /* block */)a5;
- (void)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 recipientID:(id)a2 forConversationHistory:(id)a3 withLanguage:(id)a4 options:(unsigned long long)a5 completionBlock:(id /* block */)a6;
- (id)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 recipientID:(id)a2 forConversationHistory:(id)a3 withLanguage:(id)a4 options:(unsigned long long)a5;
- (void)responsesForMessageWithLanguageDetection:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 forContext:(id)a3 withLanguage:(id *)a4 options:(unsigned long long)a5 completionBlock:(id /* block */)a6;
- (id)responsesForMessage:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 withLanguage:(id)a3 inputModes:(id)a4 options:(unsigned long long)a5;
- (id)responsesForMessageWithLanguageDetection:(id)a0 maximumResponses:(unsigned long long)a1 forConversationHistory:(id)a2 forContext:(id)a3 withLanguage:(id *)a4 options:(unsigned long long)a5;
- (id)categoryForMessage:(id)a0 langID:(id)a1;
- (void)registerResponse:(id)a0 forMessage:(id)a1 metadata:(id)a2 withLanguage:(id)a3;
- (void)prunePersonalizedUserDatabase:(id)a0;
- (BOOL)isQuestion:(id)a0 withLanguage:(id)a1;

@end
