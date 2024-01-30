@interface WBSTouchIconCacheSettingsSQLiteStore : WBSSiteMetadataImageCacheSettingsSQLiteStore

+ (Class)cacheSettingsEntryClass;
+ (long long)databaseSchemaVersion;

- (id)_createNewDatabaseSQLiteStatement;
- (id)_deleteAllEntriesSQLiteStatement;
- (id)_deleteEntrySQLiteStatementWithHost:(id)a0;
- (id)_insertEntrySQLiteStatementWithEntry:(id)a0;
- (id)_selectAllEntriesSQLiteStatement;
- (id)_selectEntrySQLiteStatementWithHost:(id)a0;
- (id)_statementsForMigrationToSchemaVersion:(long long)a0;
- (id)_updateEntrySQLiteStatementWithEntry:(id)a0;

@end
