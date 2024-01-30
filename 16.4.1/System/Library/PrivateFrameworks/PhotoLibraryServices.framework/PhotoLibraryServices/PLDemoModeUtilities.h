@class NSString, PLPhotoLibraryPathManager;

@interface PLDemoModeUtilities : NSObject

@property (class, readonly, nonatomic) NSString *systemDemoContentPhotoLibraryTemplatePath;
@property (class, readonly, nonatomic) NSString *systemDemoContentStagingBasePath;

@property (readonly, copy, nonatomic) NSString *demoContentPhotoLibraryTemplatePath;
@property (readonly, copy, nonatomic) NSString *demoContentStagingBasePath;
@property (readonly, copy, nonatomic) NSString *demoContentPhotoLibraryStagingPath;
@property (readonly, copy, nonatomic) NSString *demoContentPhotoLibraryPrestagingPath;
@property (readonly, nonatomic) PLPhotoLibraryPathManager *targetPhotoLibraryPathManager;
@property (readonly, nonatomic) unsigned long long options;

+ (id)newDemoModeUtilitiesWithDefaultSystemPaths;

- (void).cxx_destruct;
- (BOOL)_evalSystemSafetyCheck:(id /* block */)a0;
- (BOOL)cleanupForStoreDemoModeByRemovingNonDemoContentFromTargetLibrary;
- (id)fetchDemoContentResultsInLibrary:(id)a0;
- (id)initWithDemoContentTemplatePath:(id)a0 stagingBasePath:(id)a1 targetPhotoLibraryPathManager:(id)a2 options:(unsigned long long)a3;
- (void)kickstartStagedDemoContentInstallationByKillingAllClients;
- (long long)markAssetOriginalsInTargetPhotoLibraryAsLegacyDemoContent:(BOOL)a0;
- (BOOL)prepareForStoreDemoModeByStagingDemoLibraryContentFromTemplate;
- (BOOL)replaceTargetPhotoLibraryWithStagedDemoLibraryIfExists;
- (void)warmUpDemoLibraryInstalledFromStagedTemplate;

@end
