@interface PLiPhotoMigrationSupport : NSObject {
    _Atomic int _inFlightMigrationCount;
}

@property (readonly, nonatomic) BOOL migrationWasInterrupted;

+ (id)sharedInstance;

- (void)migrateEachPreMigratediPhotoLibrary:(id /* block */)a0 completionHandler:(id /* block */)a1;
- (void)_deleteiPhotoSubDirectoryWithDirectoryPath:(id)a0 subDirectoryName:(id)a1 description:(id)a2;
- (id)_iPhotoMediaDirUuidListSortedByDateCreatedWithDir:(id)a0;
- (id)_inFlightMigrationMarkerFilePath;
- (BOOL)_isMigrating;
- (BOOL)_validateUuid:(id)a0;
- (void)_decrementInFlightMigrationCount;
- (BOOL)_createParentDirectoryIfNecessaryWithPath:(id)a0;
- (id)_firstFilePathWithAnyExtensionAtPath:(id)a0 extension:(id *)a1;
- (id)_preMigratediPhotoDir;
- (id)_migratediPhotoDir;
- (void)_migrateiPhotoLibraryWorkerWithProgressHandler:(id /* block */)a0 iPhotoLibraryDir:(id)a1;
- (void)fireMigrationOfiPhotoLibraryWithProgressHandler:(id /* block */)a0;
- (void)_incrementInFlightMigrationCount;
- (void)_migrateiPhotoLibraryWithProgressHandler:(id /* block */)a0;
- (void)checkForUnmigratediPhotoContentWithCompletion:(id /* block */)a0;
- (id)_iPhotoToPhotosUuidMapTable;
- (id)_displayableUuidWithUuid:(id)a0;

@end
