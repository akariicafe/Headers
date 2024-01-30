@class NSString, _PASSqliteDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface ATXAbstractVersionedDatabase : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_path;
    _PASSqliteDatabase *_db;
    BOOL _dbInitialized;
}

@property (readonly, nonatomic) _PASSqliteDatabase *db;

- (BOOL)migrate;
- (long long)currentSchemaVersion;
- (long long)latestVersion;
- (id)createCustomSchema;
- (void)_disconnectFromDb;
- (BOOL)_configureDatabase;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDbPath:(id)a0;
- (void)_initializeSchemaVersion:(long long)a0;
- (BOOL)_initializeTables;
- (void)_runMigration;
- (void)_startDatabase;
- (long long)countRowsOfTable:(id)a0;
- (id)createSchema;
- (id)initWithDefaultPath:(id)a0;

@end
