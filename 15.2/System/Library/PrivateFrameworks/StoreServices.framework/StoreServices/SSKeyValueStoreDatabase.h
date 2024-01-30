@class SSSQLiteDatabase;

@interface SSKeyValueStoreDatabase : NSObject {
    SSSQLiteDatabase *_database;
}

- (void)modifyAsyncUsingTransactionBlock:(id /* block */)a0;
- (id)initReadOnly;
- (id)_initReadOnly:(BOOL)a0;
- (void)_dispatchBlockAsync:(id /* block */)a0;
- (void)readAsyncUsingSessionBlock:(id /* block */)a0;
- (void)readUsingSessionBlock:(id /* block */)a0;
- (void)modifyUsingTransactionBlock:(id /* block */)a0;
- (id)init;
- (void)dealloc;

@end
