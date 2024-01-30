@class NSString, WBSSQLiteDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface WBSWebExtensionSQLiteStore : NSObject {
    NSString *_composedIdentifier;
    WBSSQLiteDatabase *_database;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    long long _storageType;
    BOOL _useInMemoryDatabase;
}

+ (void)deleteStorageForComposedIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (id)_urlForExtensionStorageFolderWithIdentifier:(id)a0;

- (BOOL)_isDatabaseOpen;
- (void)_vacuum;
- (int)_migrateToCurrentSchemaVersionIfNeeded;
- (int)_setDatabaseSchemaVersion:(int)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (int)_createFreshDatabaseSchema;
- (id)_deleteDatabase;
- (void)getValuesForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)getValuesForAllKeysWithCompletionHandler:(id /* block */)a0;
- (void)setKeyedData:(id)a0 completionHandler:(id /* block */)a1;
- (void)getStorageSizeForAllKeysIncludingKeyedData:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)deleteValuesForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)deleteDatabaseWithCompletionHandler:(id /* block */)a0;
- (void)getStorageSizeForKeys:(id)a0 completionHandler:(id /* block */)a1;
- (void)getStorageSizeForAllKeysWithCompletionHandler:(id /* block */)a0;
- (void)_commonInitWithType:(long long)a0 composedIdentifier:(id)a1;
- (BOOL)_openDatabaseIfNecessaryReturningErrorMessage:(id *)a0;
- (id)_getKeysAndValuesFromRowEnumerator:(id)a0;
- (id)_getValuesForKeys:(id)a0 outErrorMessage:(id *)a1;
- (id)_getValuesForAllKeysReturningErrorMessage:(id *)a0;
- (double)_calculateStorageSizeForKeysAndValues:(id)a0;
- (id)_insertOrUpdateValue:(id)a0 forKey:(id)a1 inDatabase:(id)a2;
- (id)_deleteDatabaseIfEmpty;
- (id)_urlForDatabaseOfType:(long long)a0;
- (id)_openDatabase:(id)a0 deleteDatabaseFileOnError:(BOOL)a1;
- (id)_deleteDatabaseFileAtURL:(id)a0 reopenDatabase:(BOOL)a1;
- (BOOL)_isDatabaseEmpty;
- (void)_deleteExtensionStorageFolderIfEmpty;
- (int)_resetDatabaseSchema;
- (id)initWithType:(long long)a0 composedIdentifier:(id)a1;
- (id)initForTestingWithType:(long long)a0 composedIdentifier:(id)a1;

@end
