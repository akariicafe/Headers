@class NSString, CDMDynamicConfig;

@interface CDMDAGBaseService : CDMBaseService {
    NSString *_setupLanguageCode;
    CDMDynamicConfig *_currentConfig;
}

+ (BOOL)isEnabled;
+ (BOOL)isAssetRequired;
+ (id)getAssetConfig;
+ (id)getAssetFolderNamesByTrialFactorNames;

- (id)supportedCommands;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (void)_handleSetupRequest:(id)a0 withCallback:(id /* block */)a1;
- (void)handleCommand:(id)a0 withCallback:(id /* block */)a1;
- (id)handleRequestCommandTypeNames;
- (BOOL)isSetupRerunNeededForRequest:(id)a0;

@end
