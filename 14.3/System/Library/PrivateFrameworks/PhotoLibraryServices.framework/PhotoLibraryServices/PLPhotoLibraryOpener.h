@class PLLibraryServicesManager;

@interface PLPhotoLibraryOpener : NSObject {
    BOOL _reportInProgressUpgrades;
}

@property (class, readonly) BOOL canAutomaticallyCreateLibrary;

@property (readonly) PLLibraryServicesManager *libraryServicesManager;

- (void).cxx_destruct;
- (id)initWithLibraryServicesManager:(id)a0 reportInProgressUpgrades:(BOOL)a1;
- (BOOL)lightweightPermissionCheckWithError:(id *)a0;
- (BOOL)openPhotoLibraryDatabase:(id *)a0;
- (BOOL)createPhotoLibraryDatabaseWithOptions:(id)a0 error:(id *)a1;
- (BOOL)lightweightPermissionCheckWithPath:(id)a0 isDir:(BOOL)a1 error:(id *)a2;

@end
