@class PLLibraryServicesManager;

@interface PLPhotoLibraryOpener : NSObject {
    BOOL _reportInProgressUpgrades;
}

@property (readonly) PLLibraryServicesManager *libraryServicesManager;

+ (BOOL)canAutomaticallyCreateLibrary;

- (BOOL)lightweightPermissionCheckWithError:(id *)a0;
- (BOOL)createPhotoLibraryDatabaseWithOptions:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)lightweightPermissionCheckWithPath:(id)a0 isDir:(BOOL)a1 error:(id *)a2;
- (BOOL)openPhotoLibraryDatabaseWithAutoUpgrade:(BOOL)a0 autoCreate:(BOOL)a1 error:(id *)a2;
- (id)initWithLibraryServicesManager:(id)a0 reportInProgressUpgrades:(BOOL)a1;

@end
