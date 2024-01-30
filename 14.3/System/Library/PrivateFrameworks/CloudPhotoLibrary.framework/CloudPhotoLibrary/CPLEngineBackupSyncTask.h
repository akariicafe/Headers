@interface CPLEngineBackupSyncTask : CPLEngineForceSyncTask

- (id)description;
- (BOOL)forBackup;
- (id)initWithEngineLibrary:(id)a0 delegate:(id)a1;

@end
