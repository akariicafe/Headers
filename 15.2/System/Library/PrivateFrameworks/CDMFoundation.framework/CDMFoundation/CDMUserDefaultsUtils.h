@interface CDMUserDefaultsUtils : NSObject

+ (id)readCustomAssetsRootPath;
+ (unsigned int)readGraphRunnerMaxConcurrentCount;
+ (id)readCustomLogPath;
+ (void)setCurrentActiveGraph:(id)a0;
+ (id)readCurrentActiveGraph;
+ (BOOL)isAsrAlternativeConcurrent;
+ (unsigned long long)readNLv4MaxNumParses;
+ (id)readUserDefaultSnlcOverride;
+ (id)readUaaPNLAppModelPaths;
+ (id)readUaaPNLSystemConfigPath;
+ (id)readUaaPNLCoreModelPath;
+ (unsigned int)readAsrAlternativeCount:(id)a0;
+ (id)getDefaultCustomAssetsRootPath;
+ (id)getDefaultCustomLogPath;
+ (void)setCustomAssetsRootPath:(id)a0;

@end
