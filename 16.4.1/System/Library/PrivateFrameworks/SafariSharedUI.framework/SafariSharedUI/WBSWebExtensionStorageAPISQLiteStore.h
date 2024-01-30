@class NSString;

@interface WBSWebExtensionStorageAPISQLiteStore : WBSWebExtensionSQLiteStore <WBSWebExtensionStorageProtocol> {
    long long _storageType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)_createFreshDatabaseSchema;
- (id)_databaseURL;
- (void)setKeyedData:(id)a0 completionHandler:(id /* block */)a1;
- (int)_currentDatabaseSchemaVersion;
- (id)_getAllKeysReturningErrorMessage:(id *)a0;
- (id)_getKeysAndValuesFromRowEnumerator:(id)a0;
- (id)_getValuesForAllKeysReturningErrorMessage:(id *)a0;
- (id)_getValuesForKeys:(id)a0 outErrorMessage:(id *)a1;
- (id)_insertOrUpdateValue:(id)a0 forKey:(id)a1 inDatabase:(id)a2;
- (BOOL)_isDatabaseEmpty;
- (int)_resetDatabaseSchema;
- (void)deleteDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)deleteValuesForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)getStorageSizeForAllKeysIncludingKeyedData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)getStorageSizeForAllKeysWithCompletionHandler:(id /* block */)a0 queue:(id)a1;
- (void)getStorageSizeForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)getValuesForAllKeysWithCompletionHandler:(id /* block */)a0;
- (void)getValuesForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (id)initForTestingWithType:(long long)a0 composedIdentifier:(id)a1;
- (id)initWithType:(long long)a0 composedIdentifier:(id)a1;

@end
