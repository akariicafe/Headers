@class NSString;

@interface WBSWebExtensionDeclarativeNetRequestSQLiteStore : WBSWebExtensionSQLiteStore {
    NSString *_storageType;
    NSString *_tableName;
}

- (int)_createFreshDatabaseSchema;
- (id)init;
- (void).cxx_destruct;
- (id)_databaseURL;
- (int)_currentDatabaseSchemaVersion;
- (id)_getKeysAndValuesFromRowEnumerator:(id)a0;
- (id)_getRulesWithOutErrorMessage:(id *)a0;
- (id)_insertRule:(id)a0 inDatabase:(id)a1;
- (BOOL)_isDatabaseEmpty;
- (int)_resetDatabaseSchema;
- (void)addRules:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteRules:(id)a0 completionHandler:(id /* block */)a1;
- (void)getRulesWithCompletionHandler:(id /* block */)a0;
- (id)initWithComposedIdentifier:(id)a0 usesInMemoryDatabase:(BOOL)a1;
- (void)updateRulesByRemovingIDs:(id)a0 addRules:(id)a1 completionHandler:(id /* block */)a2;

@end
