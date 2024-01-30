@class NSString, CDMAssetConfig, CDMDynamicConfig;

@interface CDMDAGBaseService : CDMBaseService {
    CDMAssetConfig *assetConfig;
    NSString *_setupLanguageCode;
    CDMDynamicConfig *_currentConfig;
}

+ (id)assetFolderName;
+ (id)trialFactorName;

- (BOOL)isEnabled;
- (id)handle:(id)a0;
- (id)supportedCommands;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (id)getAssetConfig;
- (BOOL)isAssetRequired;
- (id)handleRequestCommandTypeNames;
- (id)setup:(id)a0;
- (void)handleCommand:(id)a0 withCallback:(id /* block */)a1;
- (void)_handleFunctionalRequest:(id)a0 withCallback:(id /* block */)a1;
- (void)_handleSetupRequest:(id)a0 withCallback:(id /* block */)a1;
- (BOOL)isSetupRerunNeededForRequest:(id)a0;

@end
