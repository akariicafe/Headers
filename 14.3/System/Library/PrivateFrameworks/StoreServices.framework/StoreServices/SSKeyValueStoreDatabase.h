@class SSSQLiteDatabase;

@interface SSKeyValueStoreDatabase : NSObject {
    SSSQLiteDatabase *_database;
}

- (id)init;
- (void)readUsingSessionBlock:(id /* block */)a0;
- (void)dealloc;
- (void)modifyAsyncUsingTransactionBlock:(id /* block */)a0;
- (id)initReadOnly;
- (id)_initReadOnly:(BOOL)a0;
- (void)_dispatchBlockAsync:(id /* block */)a0;
- (void)readAsyncUsingSessionBlock:(id /* block */)a0;
- (void)modifyUsingTransactionBlock:(id /* block */)a0;

@end
