@class CKSQLiteKeyValueStore;

@interface CKSQLiteKeyValueTableGroup : CKSQLiteTableGroup {
    CKSQLiteKeyValueStore *_store;
}

+ (id)keyValueStoreInDatabase:(id)a0;

- (id)createTables;
- (void).cxx_destruct;

@end
