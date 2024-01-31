@class CKSQLiteKeyValueStore;

@interface CKSQLiteKeyValueTableGroup : CKSQLiteSharedTableGroup {
    CKSQLiteKeyValueStore *_store;
}

+ (id)keyValueStoreInDatabase:(id)a0;

- (id)createTables:(id *)a0;
- (void).cxx_destruct;

@end
