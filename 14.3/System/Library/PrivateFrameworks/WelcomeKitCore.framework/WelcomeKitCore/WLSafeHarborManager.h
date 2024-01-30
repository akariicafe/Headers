@class WLMigrationDataCoordinator, NSFileManager, WLMobileInstallation;

@interface WLSafeHarborManager : NSObject {
    WLMigrationDataCoordinator *_dataCoordinator;
    WLMobileInstallation *_mobileInstallation;
}

@property (retain, nonatomic) NSFileManager *fileManager;

- (void).cxx_destruct;
- (id)createSafeHarborDirectoryForBundleID:(id)a0 returningError:(id *)a1;
- (id)linkItemAtPath:(id)a0 toRelativePath:(id)a1 inAndroidContentPathOfSafeHarborDirectory:(id)a2;
- (id)promoteDirectoryToSafeHarbor:(id)a0;
- (id)initWithDataCoordinator:(id)a0 mobileInstallation:(id)a1;
- (id)deleteSafeHarborForBundleID:(id)a0;
- (id)_safeHarborDirectoryForBundleID:(id)a0;
- (id)_infoDictionaryForDirectory:(id)a0;
- (id)_infoDataFromDictionary:(id)a0 returningError:(id *)a1;
- (id)_writeInfoData:(id)a0 toDirectory:(id)a1;

@end
