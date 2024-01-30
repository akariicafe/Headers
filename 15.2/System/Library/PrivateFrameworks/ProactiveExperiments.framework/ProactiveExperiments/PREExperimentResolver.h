@class NSDictionary, _PASLock, TRIClient;

@interface PREExperimentResolver : NSObject <PREExperimentResolverProtocol> {
    _PASLock *_guardedSmartReplyConfig;
    NSDictionary *_lockPerLanguage;
    TRIClient *_trialClient;
}

@property (readonly, nonatomic) NSDictionary *smartReplyLangAndNamespaces;

+ (id)sharedInstance;

- (void)warmupForLocale:(id)a0;
- (id)getResponseSuggestionsExperimentConfig:(id)a0 shouldDownloadAssets:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (id)_getDefaultResponseSuggestionsExperimentConfig:(id)a0;

@end
