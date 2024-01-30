@class WBSSQLiteDatabase, NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface WBSSiteMetadataImageCacheSettingsSQLiteStore : NSObject {
    BOOL _isClosed;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    long long _protectionType;
}

@property (readonly, nonatomic) WBSSQLiteDatabase *database;
@property (readonly, nonatomic) NSURL *databaseURL;

+ (long long)databaseSchemaVersion;
+ (Class)cacheSettingsEntryClass;

- (id)_deleteAllEntriesSQLiteStatement;
- (id)_createNewDatabaseSQLiteStatement;
- (id)_deleteEntrySQLiteStatementWithHost:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (id)initWithDatabaseURL:(id)a0;
- (void)dealloc;
- (id)allEntries;
- (id)_updateEntrySQLiteStatementWithEntry:(id)a0;
- (id)_insertEntrySQLiteStatementWithEntry:(id)a0;
- (id)_statementsForMigrationToSchemaVersion:(long long)a0;
- (id)_selectEntrySQLiteStatementWithHost:(id)a0;
- (void)_closeDatabase;
- (id)_selectAllEntriesSQLiteStatement;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (BOOL)_checkDatabaseIntegrity;
- (id)initWithDatabaseURL:(id)a0 protectionType:(long long)a1;
- (BOOL)_openDatabase:(id)a0 andCheckIntegrity:(BOOL)a1;
- (BOOL)_migrateToCurrentSchemaVersionifNeeded;
- (BOOL)_createNewDatabaseSchema;
- (BOOL)_performMigrationStepToSchemaVersion:(long long)a0 withStatements:(id)a1;
- (id)_updateEntry:(id)a0;
- (id)_insertEntry:(id)a0;
- (id)entryWithHost:(id)a0;
- (id)saveEntry:(id)a0;
- (BOOL)deleteEntryWithHost:(id)a0;
- (BOOL)deleteAllEntries;

@end
