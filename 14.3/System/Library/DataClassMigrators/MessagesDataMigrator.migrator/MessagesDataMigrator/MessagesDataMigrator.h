@interface MessagesDataMigrator : DataClassMigrator

- (BOOL)performMigration;
- (float)estimatedDuration;
- (id)dataClassName;
- (void)saveDeviceState:(BOOL)a0 isMigrating:(BOOL)a1;
- (void)setiCloudBackupsAndRestoresEnabledForSMSDirectory;
- (void)clearMOCDefaultsForRestoreFromBackupIfNeeded;

@end
