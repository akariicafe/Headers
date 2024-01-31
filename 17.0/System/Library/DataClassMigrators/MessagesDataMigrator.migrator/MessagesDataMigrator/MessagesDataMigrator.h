@interface MessagesDataMigrator : DataClassMigrator

- (BOOL)performMigration;
- (float)estimatedDuration;
- (void)clearMOCDefaultsForRestoreFromBackupIfNeeded;
- (id)dataClassName;
- (void)saveDeviceState:(BOOL)a0 isMigrating:(BOOL)a1;
- (void)setiCloudBackupsAndRestoresEnabledForSMSDirectory;

@end
