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
- (long long)latestVersion;
- (id)createCustomSchema;
- (void).cxx_destruct;
- (id)init;
- (void)_disconnectFromDb;
- (long long)currentSchemaVersion;
- (BOOL)_configureDatabase;
- (id)initWithDefaultPath:(id)a0;
- (id)initWithDbPath:(id)a0;
- (void)_startDatabase;
- (void)_runMigration;
- (BOOL)_initializeTables;
- (void)_initializeSchemaVersion:(long long)a0;
- (id)createSchema;
- (long long)countRowsOfTable:(id)a0;

@end
