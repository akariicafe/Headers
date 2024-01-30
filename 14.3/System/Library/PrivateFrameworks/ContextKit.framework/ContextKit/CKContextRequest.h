@class CKContextClient, NSOrderedSet, NSArray, NSString, NSDictionary, NSNumber, NSSet;

@interface CKContextRequest : CKContextDonationItem {
    CKContextClient *_client;
}

@property (nonatomic) BOOL dontSkip;
@property (nonatomic) BOOL timing;
@property (retain, nonatomic) NSNumber *overrideBlendAlpha;
@property (retain, nonatomic) NSNumber *overrideBlendBeta;
@property (retain, nonatomic) NSNumber *overrideBlendGamma;
@property (nonatomic) int overrideConstellationMinCount;
@property (nonatomic) int overrideConstellationMinWeight;
@property (nonatomic) unsigned int topk;
@property (nonatomic) BOOL overrideEnableCoreNLPTagging;
@property (readonly, nonatomic, getter=isRequestingContentFromActiveApplications) BOOL requestingContentFromActiveApplications;
@property (nonatomic) BOOL incPending;
@property (nonatomic) BOOL debug;
@property (nonatomic) BOOL includeRequestInResponse;
@property (retain, nonatomic) NSOrderedSet *desiredLanguageTags;
@property (weak, nonatomic) NSArray *donorBundleIdentifiers;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL textIsRaw;
@property (retain, nonatomic) NSString *url;
@property (nonatomic) BOOL includeHigherLevelTopics;
@property (retain, nonatomic) NSDictionary *itemIds;
@property (nonatomic) long long maxConstellationTopics;
@property (retain, nonatomic) NSSet *allowedTopicTypeTags;

+ (void)initialize;
+ (BOOL)pingService;
+ (void)findResultsForText:(id)a0 languageTag:(id)a1 withReply:(id /* block */)a2;
+ (void)findResultsForText:(id)a0 withReply:(id /* block */)a1;
+ (BOOL)supportsSecureCoding;
+ (void)findResultsForText:(id)a0 languageTag:(id)a1 requestType:(unsigned long long)a2 withReply:(id /* block */)a3;
+ (BOOL)shutdownService;
+ (void)runOffMainThread:(id /* block */)a0;
+ (void)statusWithReply:(id /* block */)a0;
+ (id)new;
+ (void)warmUpForRequestType:(unsigned long long)a0 withReply:(id /* block */)a1;
+ (void)setDefaultRequestType:(unsigned long long)a0;
+ (void)logResultsShownForResponseId:(id)a0 shown:(unsigned long long)a1 couldHaveShown:(unsigned long long)a2 topicIds:(id)a3 serverOverride:(BOOL)a4 inputLength:(unsigned long long)a5 requestType:(unsigned long long)a6 logType:(unsigned long long)a7;
+ (void)logTransactionSuccessfulForResponseId:(id)a0 inputLength:(unsigned long long)a1 completionLength:(unsigned long long)a2 requestType:(unsigned long long)a3 logType:(unsigned long long)a4;
+ (id)requestServiceSemaphore;
+ (void)logEngagementForResponseId:(id)a0 result:(id)a1 rank:(unsigned long long)a2 inputLength:(unsigned long long)a3 completionLength:(unsigned long long)a4 requestType:(unsigned long long)a5 logType:(unsigned long long)a6;
+ (id)requestWithText:(id)a0;

- (id)initForClient:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)execute;
- (void)_executeWithReply:(id /* block */)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)executeWithReply:(id /* block */)a0;
- (void)capabilitiesWithReply:(id /* block */)a0;
- (void)_postProcessResponse:(id)a0;
- (void)setText:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
