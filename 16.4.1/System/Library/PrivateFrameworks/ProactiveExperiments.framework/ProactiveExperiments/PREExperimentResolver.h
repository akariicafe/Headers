@class NSString, NSDictionary, TRIClient, _PASLock;

@interface PREExperimentResolver : NSObject <PREExperimentResolverProtocol> {
    _PASLock *_guardedSmartReplyConfig;
    TRIClient *_trialClient;
}

@property (readonly, nonatomic) NSDictionary *smartReplyLangAndNamespaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)sharedQueue;

- (id)getResponseSuggestionsExperimentConfig:(id)a0 shouldDownloadAssets:(BOOL)a1;
- (id)_getDefaultResponseSuggestionsExperimentConfig:(id)a0;
- (void)warmupForLocale:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
