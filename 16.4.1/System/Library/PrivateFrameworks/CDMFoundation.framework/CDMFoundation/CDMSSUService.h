@class SSUSystemState, SNLPSSUMatcher;

@interface CDMSSUService : CDMDAGBaseService {
    SSUSystemState *__systemState;
    SNLPSSUMatcher *__matcher;
}

+ (BOOL)isEnabled;
+ (BOOL)isAssetRequired;
+ (id)acquireOrBuildMatcher:(id)a0 systemState:(id)a1 initializeModelsPreemptively:(BOOL)a2 error:(id *)a3;
+ (id)assetDirectoryURLForServiceAssetBundle:(id)a0;
+ (id)buildSystemStateForLocale:(id)a0;
+ (id)getAssetFolderNamesByTrialFactorNames;
+ (id)getAssetsDirectory:(id)a0 factorName:(id)a1 error:(id *)a2;
+ (id)getXPCEventStreamQueue;
+ (void)handleXPCEventApplicationInner:(id)a0 currentConfig:(id)a1 block:(id /* block */)a2;
+ (void)handleXPCEventApplicationRegistered:(id)a0 currentConfig:(id)a1;
+ (void)handleXPCEventApplicationUnregistered:(id)a0 currentConfig:(id)a1;

- (void).cxx_destruct;
- (id)handle:(id)a0;
- (id)setup:(id)a0;
- (id)abortSetupWithErrorDescription:(id)a0;
- (id)abortHandleWithErrorCode:(long long)a0 description:(id)a1;
- (void)forceAppsRescanIfEnabled;
- (void)forceFullCacheUpdateIfEnabled;
- (id)handleRequestCommandTypeNames;

@end
