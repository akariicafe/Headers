@class NSRecursiveLock, NSString, NSCondition, PPSQLDatabaseHandlePool;

@interface PPSQLDatabase : NSObject <_PASDatabaseMigrationProtocol> {
    NSRecursiveLock *_writeLock;
    PPSQLDatabaseHandlePool *_handlePool;
    NSCondition *_handlePoolCond;
    NSString *_path;
    NSString *_parentDirectory;
    unsigned char _migrationCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)dropTableWithName:(id)a0 txnWitness:(id)a1;
+ (id)nonMigratingToolsInstance;
+ (id)createTempTableContainingRowsFromQuery:(id)a0 descriptiveTableName:(id)a1 txnWitness:(id)a2 bind:(id /* block */)a3;
+ (id)nonMigratingToolsInstanceWithParentDirectory:(id)a0;
+ (id)tableNameForTable:(unsigned char)a0;

- (id)stats;
- (void)writeTransactionWithClient:(unsigned char)a0 block:(id /* block */)a1;
- (id)init;
- (void)_enableQueryLoggingForHandle:(id)a0;
- (void).cxx_destruct;
- (unsigned char)migration_ConvertLocationDescriptionsToLowercase;
- (BOOL)isInMemory;
- (BOOL)migrateToVersion:(unsigned int)a0;
- (BOOL)unmigrate;
- (BOOL)_prepareDatabaseHandleForMigration;
- (id)migrations;
- (BOOL)_handleCorruption;
- (BOOL)optimizeDatabaseWithShouldContinueBlock:(id /* block */)a0;
- (id)_nullableHandleWithClient:(unsigned char)a0;
- (void)_releaseReadOnlyHandle:(id)a0 client:(unsigned char)a1;
- (id)_initInStandardParentDirectoryWithPerformMigrations:(BOOL)a0;
- (id)_allTables;
- (void)_disableQueryLoggingForHandle:(id)a0;
- (BOOL)_removeCorruptionMarker;
- (id)_openFreshHandleForClient:(unsigned char)a0;
- (id)_acquireReadOnlyHandleWithClient:(unsigned char)a0;
- (id)sourceStatsWithMedianRefCountNeeded:(BOOL)a0 table:(id)a1 txnWitness:(id)a2;
- (id)databaseHandle;
- (id)parentDirectory;
- (unsigned long long)maxSchemaVersion;
- (void)readTransactionWithClient:(unsigned char)a0 block:(id /* block */)a1;
- (id)sourceStatsForTableWithName:(id)a0 medianRefCountNeeded:(BOOL)a1 txnWitness:(id)a2;
- (id)initWithTemporaryInMemoryDatabaseAndPerformMigrations:(BOOL)a0;
- (id)initWithParentDirectory:(id)a0 performMigrations:(BOOL)a1;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;
- (id)handleWithClient:(unsigned char)a0;
- (BOOL)writeTransactionWithClient:(unsigned char)a0 timeoutInSeconds:(double)a1 block:(id /* block */)a2;
- (BOOL)_isCorruptionMarkerPresent;
- (id)sourceStatsWithMedianRefCountNeeded:(BOOL)a0;
- (id)_initWithPath:(id)a0 performMigrations:(BOOL)a1;
- (id)checkWithError:(id *)a0;

@end
