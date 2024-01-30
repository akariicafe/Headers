@class _PASSqliteDatabase, NSString, _PASKVOHandler, NSUserDefaults;
@protocol TRIStorageManagementProtocol, TRIPaths;

@interface TRIDatabase : NSObject <_PASDatabaseMigrationProtocol> {
    id<TRIPaths> _paths;
    id<TRIStorageManagementProtocol> _storageManagement;
    NSString *_databasePath;
    _PASSqliteDatabase *_db;
    NSUserDefaults *_defaults;
    _PASKVOHandler *_kvoHandler;
    _Atomic BOOL _isQueryPlanLoggingEnabled;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct _PASDBTransactionCompletion_ { BOOL x0; })writeTransactionWithFailableBlock:(id /* block */)a0;
- (struct _PASDBTransactionCompletion_ { BOOL x0; })readTransactionWithFailableBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)migrateToVersion:(unsigned int)a0;
- (id)migrations;
- (void)closePermanently;
- (id)databaseHandle;
- (void)_updateQueryPlanLogging;
- (BOOL)vacuum;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)a0;
- (id /* block */)generalErrorHandlerWithOutError:(id *)a0;
- (id)initWithPaths:(id)a0 storageManagement:(id)a1;
- (id)createTempTableContainingRowsFromQuery:(id)a0 bind:(id /* block */)a1 namePrefix:(id)a2 transaction:(id)a3;
- (BOOL)dropTableWithName:(id)a0 transaction:(id)a1;
- (id)initWithPaths:(id)a0 databasePath:(id)a1 storageManagement:(id)a2 performMigrations:(BOOL)a3;
- (void)_enableQueryPlanLogging;
- (void)_disableQueryPlanLogging;
- (id)initInMemoryAndPerformMigrations:(BOOL)a0;

@end
