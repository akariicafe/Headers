@class PLPhotoLibraryPathManager, PLPhotoLibrary;

@interface PLDuplicateMergeCrashRecovery : NSObject {
    PLPhotoLibrary *_library;
    PLPhotoLibraryPathManager *_pathManager;
}

- (id)initWithPhotoLibrary:(id)a0;
- (id)initWithLibraryServicesManager:(id)a0;
- (void).cxx_destruct;
- (id)_crashRecoveryMarkerFileURL;
- (id)_readCrashRecoveryUUIDContainerMarkerFile;
- (id)_readCrashRecoveryUUIDListMarkerFile;
- (void)performCrashRecoveryIfNeeded;
- (BOOL)removeCrashRecoveryMarkerFileWithError:(id *)a0;
- (BOOL)writeCrashRecoveryMarkerFileForTargetAssetUUID:(id)a0 error:(id *)a1;

@end
