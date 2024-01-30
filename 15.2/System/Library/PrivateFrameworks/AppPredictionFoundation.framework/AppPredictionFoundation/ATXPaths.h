@interface ATXPaths : NSObject

+ (id)appPredictionCacheDirectory;
+ (id)appPredictionDirectory;
+ (id)feedbackRootDirectory;
+ (void)createDataVault:(id)a0;
+ (id)onboardingStackWidgetCacheFilePath;
+ (id)clientModelCachesRootDirectory;
+ (id)_getDirectoryCreating:(BOOL)a0;
+ (id)appPredictionBackupDirectory;
+ (id)widgetPredictionModelDirectory;
+ (id)uiCachesRootDirectory;
+ (id)widgetPredictionModelFileWithFilename:(id)a0;
+ (id)bookmarksPathFile:(id)a0;
+ (id)biomeStreamsRootDirectory;
+ (id)freeMomentTimeStampFile;
+ (id)modificationDateOfFileAtPath:(id)a0;
+ (id)contextualActionsModelFileWithFilename:(id)a0;
+ (id)onboardingStackResultCacheFilePath;
+ (void)createDirectoriesIfNeeded;
+ (id)appPredictionDirectoryFile:(id)a0;
+ (id)magicalMomentsPredictionTablesRootDirectory;
+ (id)contextualActionsModelDirectory;
+ (id)trialFolderResourcePath;
+ (id)metricsRootDirectory;
+ (id)modeCachesRootDirectory;

@end
