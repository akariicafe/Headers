@class NSURL, NSMutableDictionary;
@protocol RKDisplayStringsProvider;

@interface RKResponseCollection : NSObject

@property (retain) NSMutableDictionary *responseCatalog;
@property (retain) NSMutableDictionary *personalizersByLanguageID;
@property (readonly) NSURL *dynamicDataURL;
@property (readonly) id<RKDisplayStringsProvider> displayStringsProvider;

+ (id)speechActsForCategory:(unsigned long long)a0 platform:(id)a1;
+ (id)responsesForFixedPhrase:(id)a0 withLanguage:(id)a1;
+ (id)responsesForFullScreenMoments:(id)a0;

- (void).cxx_destruct;
- (void)flushDynamicData;
- (void)resetRegisteredResponses;
- (id)personalizerForLanguageID:(id)a0;
- (id)standardResponsesByCategoryForLanguageIdentifier:(id)a0 andUsage:(id)a1;
- (id)initWithDynamicDataURL:(id)a0 displayStringsProvider:(id)a1;
- (id)cannedResponsesForCategory:(id)a0 withLanguage:(id)a1 options:(unsigned long long)a2;
- (id)responsesForCategory:(unsigned long long)a0 gender:(unsigned long long)a1 maximumResponses:(unsigned long long)a2 withLanguage:(id)a3 context:(id)a4 options:(unsigned long long)a5;
- (void)registerResponse:(id)a0 forMessage:(id)a1 withLanguage:(id)a2 context:(id)a3 effectiveDate:(id)a4;

@end
