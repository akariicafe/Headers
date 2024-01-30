@interface ATXPaths : NSObject

+ (id)posterDescriptorCacheFilePath;
+ (id)complicationInlineSetCacheFilePath;
+ (id)widgetPredictionModelFileWithFilename:(id)a0;
+ (id)scoreNormalizationModelDirectory;
+ (id)appPredictionDirectoryFile:(id)a0;
+ (id)appPredictionBackupDirectory;
+ (id)bookmarksPathFile:(id)a0;
+ (id)appPredictionCacheDirectory;
+ (id)onboardingStackResultCacheFilePath;
+ (id)watchFaceConfigurationCacheFilePath;
+ (id)faceGalleryDemoConfigurationFilePath;
+ (id)posterConfigurationCacheFilePath;
+ (id)contextualActionsModelFileWithFilename:(id)a0;
+ (void)createDirectoriesIfNeeded;
+ (id)magicalMomentsPredictionTablesRootDirectory;
+ (id)clientModelCachesRootDirectory;
+ (id)widgetPredictionModelDirectory;
+ (id)freeMomentTimeStampFile;
+ (id)uiCachesRootDirectory;
+ (void)_recursivelyCreateDirectoryWithErrorHandlingAtPath:(id)a0;
+ (id)scoreNormalizationModelFileWithFilename:(id)a0;
+ (id)biomeStreamsRootDirectory;
+ (id)appPredictionDirectory;
+ (id)modeCachesRootDirectory;
+ (id)feedbackRootDirectory;
+ (id)modificationDateOfFileAtPath:(id)a0;
+ (id)trialFolderResourcePath;
+ (id)onboardingStackWidgetCacheFilePath;
+ (id)complicationModularSetCacheFilePath;
+ (id)metricsRootDirectory;
+ (id)_getDirectoryCreating:(BOOL)a0;
+ (void)createDataVault:(id)a0;
+ (id)contextualActionsModelDirectory;

@end
