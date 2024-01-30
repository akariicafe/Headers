@interface PLiPhotoMigrationSupport : NSObject {
    _Atomic int _inFlightMigrationCount;
}

@property (readonly, nonatomic) BOOL migrationWasInterrupted;

+ (id)sharedInstance;

- (id)_displayableUuidWithUuid:(id)a0;
- (id)_migratediPhotoDir;
- (BOOL)_validateUuid:(id)a0;
- (void)fireMigrationOfiPhotoLibraryWithProgressHandler:(id /* block */)a0;
- (void)migrateEachPreMigratediPhotoLibrary:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (BOOL)_createParentDirectoryIfNecessaryWithPath:(id)a0;
- (void)_deleteiPhotoSubDirectoryWithDirectoryPath:(id)a0 subDirectoryName:(id)a1 description:(id)a2;
- (void)checkForUnmigratediPhotoContentWithCompletion:(id /* block */)a0;
- (id)_firstFilePathWithAnyExtensionAtPath:(id)a0 extension:(id *)a1;
- (void)_migrateiPhotoLibraryWithProgressHandler:(id /* block */)a0;
- (BOOL)_isMigrating;
- (id)_preMigratediPhotoDir;
- (id)_iPhotoMediaDirUuidListSortedByDateCreatedWithDir:(id)a0;
- (void)_incrementInFlightMigrationCount;
- (void)_migrateiPhotoLibraryWorkerWithProgressHandler:(id /* block */)a0 iPhotoLibraryDir:(id)a1;
- (id)_iPhotoToPhotosUuidMapTable;
- (id)_inFlightMigrationMarkerFilePath;
- (void)_decrementInFlightMigrationCount;

@end
