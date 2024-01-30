@class PLModelMigrator, PLPhotoLibraryPathManager;

@interface PLDeviceRestoreMigrationPostProcessingSupport : NSObject {
    BOOL _tokenIsKnownToBeMissing;
    PLModelMigrator *_modelMigrator;
    PLPhotoLibraryPathManager *_pathManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _tokenLock;
}

+ (id)_readTokenAtPath:(id)a0 allowNotExists:(BOOL)a1 error:(id *)a2;
+ (BOOL)_writeTokenToPath:(id)a0 withInfo:(id)a1 allowOverwrite:(BOOL)a2 error:(id *)a3;
+ (BOOL)createForegroundRestoreFromCloudBackupCompleteTokenWithPathManager:(id)a0 error:(id *)a1;

- (id)initWithModelMigrator:(id)a0;
- (BOOL)needsToPrepareForBackgroundRestore;
- (BOOL)writeModelMigrationRestorePostProcessingCompleteToken;
- (BOOL)writeBackgroundRestorePostProcessingInProgressToken;
- (BOOL)writeBackgroundRestorePostProcessingCompleteAndArchiveTokens;
- (BOOL)isBackgroundRestorePostProcessingInProgressTokenValid;
- (BOOL)foregroundRestoreFromCloudBackupCompleteTokenExists;
- (BOOL)isModelMigrationRestorePostProcessingComplete;
- (void).cxx_destruct;

@end
