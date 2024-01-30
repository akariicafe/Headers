@interface CDMUserDefaultsUtils : NSObject

+ (id)getDefaultCustomAssetsRootPath;
+ (id)getDefaultCustomLogPath;
+ (BOOL)isAsrAlternativeConcurrent;
+ (BOOL)isSkipNodeEnabled;
+ (BOOL)isWriteDebugToDiskEnabled;
+ (BOOL)prewarmModels;
+ (unsigned int)readAsrAlternativeCount:(id)a0;
+ (id)readCustomAssetsRootPath;
+ (id)readCustomLogPath;
+ (unsigned int)readGraphRunnerMaxConcurrentCount;
+ (unsigned long long)readNLv4MaxNumParses;
+ (id)readUaaPNLAppModelPaths;
+ (id)readUaaPNLCoreModelPath;
+ (unsigned long long)readUaaPNLMaxNumParses;
+ (id)readUaaPNLSystemConfigPath;
+ (id)readUserDefaultLVCOverride;
+ (id)readUserDefaultPscOverride;
+ (id)readUserDefaultSnlcOverride;
+ (unsigned long long)readUserDefaultsValueForKeyUint64:(id)a0 defaultValue:(long long)a1;
+ (unsigned int)readXPCCallbackDefaultTimeout;

@end
