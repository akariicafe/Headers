@interface ATXPaths : NSObject

+ (id)appPredictionCacheDirectory;
+ (id)trialFolderResourcePath;
+ (id)biomeStreamsRootDirectory;
+ (void)createDirectoriesIfNeeded;
+ (id)metricsRootDirectory;
+ (id)feedbackRootDirectory;
+ (id)appPredictionDirectoryFile:(id)a0;
+ (id)_getDirectoryCreating:(BOOL)a0;
+ (id)clientModelCachesRootDirectory;
+ (void)createDataVault:(id)a0;
+ (id)focusModesAppScoresFile;
+ (id)magicalMomentsPredictionTablesRootDirectory;
+ (id)uiCachesRootDirectory;
+ (id)appPredictionDirectory;

@end
