@class NSString, _PASSqliteDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface ATXNotificationsDatabase : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_path;
    _PASSqliteDatabase *_db;
    BOOL _dbInitialized;
}

@property (readonly, nonatomic) _PASSqliteDatabase *db;

- (id)init;
- (void).cxx_destruct;
- (void)_disconnectFromDb;
- (BOOL)_configureDatabase;
- (BOOL)migrate;
- (id)createCustomSchema;
- (long long)latestVersion;
- (id)createSchema;
- (long long)currentSchemaVersion;
- (id)initWithDbPath:(id)a0;
- (void)_startDatabase;
- (void)_runMigration;
- (BOOL)_initializeTables;
- (void)_initializeSchemaVersion:(long long)a0;
- (id)initWithDefaultPath:(id)a0;
- (long long)countRowsOfTable:(id)a0;

@end
