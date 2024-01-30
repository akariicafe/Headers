@class NSDate, CKVDatabaseConnection, NSURL, CKVSettings, CKVSkitWriter, CKVFilesystemBase, NSObject, CKVIndexMaintenanceLog;
@protocol CKVDatabaseReadOnlyAccess, OS_dispatch_queue, CKVSkitReadAccess;

@interface CKVIndexManager : NSObject {
    CKVFilesystemBase *_filesystemBase;
    NSObject<OS_dispatch_queue> *_queue;
    CKVSettings *_settings;
    CKVDatabaseConnection *_readWriteDatabase;
    CKVSkitWriter *_writeOnlySkit;
    CKVIndexMaintenanceLog *_maintenanceLog;
    NSDate *_migrationStartTime;
}

@property (retain) NSObject<CKVDatabaseReadOnlyAccess> *readOnlyDatabase;
@property (retain) NSObject<CKVSkitReadAccess> *readOnlySkit;
@property (readonly, nonatomic) NSURL *databaseFileURL;
@property (readonly, nonatomic) NSURL *skitDirectoryURL;

+ (id)sharedInstance;

- (void)closeAllConnections;
- (id)initWithFilesystemBase:(id)a0 settings:(id)a1;
- (BOOL)destroyAllState;
- (void)_ensureSkitWriteAccessWithFlushThreshold:(unsigned long long)a0;
- (BOOL)_destroyAllState;
- (unsigned long long)submitDatabaseAndSkitTransactionBlock:(id /* block */)a0;
- (BOOL)_shouldCleanupDatabase:(id)a0;
- (void)_closeAllConnections;
- (BOOL)_setReadWriteDatabaseAccess;
- (void)_setReadOnlySkitAccess;
- (BOOL)_isDatabaseSchemaIncompatible;
- (BOOL)_setWriteOnlySkitAccessWithFlushThreshold:(unsigned long long)a0;
- (unsigned long long)_executeDatabaseAndSkitTransactionBlock:(id /* block */)a0;
- (id)_maintenanceLog;
- (BOOL)destroySkit;
- (void)recordMigrationCompleted;
- (unsigned long long)performMaintenance;
- (id)accessReadOnlySkit;
- (BOOL)_isReadOnlyDatabaseARealConnection;
- (void).cxx_destruct;
- (id)init;
- (id)accessReadOnlyDatabase;
- (void)_ensureDatabaseReadWriteAccess;
- (BOOL)submitDatabaseTransactionBlock:(id /* block */)a0;
- (BOOL)_executeSkitTransactionBlock:(id /* block */)a0;
- (BOOL)_isSkitDirectoryCreated;
- (void)resetWithFilesystemBase:(id)a0;
- (BOOL)_initiateMigration;
- (BOOL)initiateMigration;
- (BOOL)_isDatabaseCreated;
- (BOOL)_executeDatabaseTransactionBlock:(id /* block */)a0;
- (BOOL)submitSkitTransactionBlock:(id /* block */)a0;
- (BOOL)_isReadOnlySkitARealConnection;
- (void)_setReadOnlyDatabaseAccess;

@end
