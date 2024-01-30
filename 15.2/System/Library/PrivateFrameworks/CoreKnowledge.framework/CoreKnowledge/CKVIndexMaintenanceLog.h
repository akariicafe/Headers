@class CKVConcurrentDictionary, NSString, NSDate, NSNumber, CKVFilesystemBase;

@interface CKVIndexMaintenanceLog : NSObject {
    CKVFilesystemBase *_filesystemBase;
    CKVConcurrentDictionary *_log;
}

@property (readonly, nonatomic) NSString *databaseSchemaVersion;
@property (readonly, nonatomic) NSString *migratedBuildVersion;
@property (readonly, nonatomic) NSString *migratedProjectVersion;
@property (readonly, nonatomic) NSDate *lastMigration;
@property (readonly, nonatomic) NSDate *lastMaintenance;
@property (readonly, nonatomic) NSDate *lastSkitRebuild;
@property (readonly, nonatomic) NSDate *lastDatabaseCleanup;
@property (readonly, nonatomic) NSNumber *modifiedDatabaseRowsSinceCleanup;
@property (readonly, nonatomic) NSNumber *migrationAttempts;

- (void).cxx_destruct;
- (id)init;
- (void)recordDatabaseRowsModified:(unsigned long long)a0;
- (id)initWithFilesystemBase:(id)a0;
- (void)_initalizeLog;
- (BOOL)_flushLog;
- (BOOL)_setCurrentDateForKey:(id)a0;
- (void)recordMaintenance;
- (void)recordSkitRebuild;
- (void)recordMigrationWithBuildVersion:(id)a0 projectVersion:(id)a1;
- (void)recordDatabaseSchemaVersion:(id)a0;
- (void)recordDatabaseCleanup;
- (void)recordMigrationAttempt;

@end
