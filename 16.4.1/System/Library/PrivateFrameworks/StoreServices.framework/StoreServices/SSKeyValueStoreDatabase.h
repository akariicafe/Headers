@class SSSQLiteDatabase;

@interface SSKeyValueStoreDatabase : NSObject {
    SSSQLiteDatabase *_database;
}

- (void)dealloc;
- (void)readUsingSessionBlock:(id /* block */)a0;
- (id)init;
- (void)modifyUsingTransactionBlock:(id /* block */)a0;
- (void)_dispatchBlockAsync:(id /* block */)a0;
- (id)_initReadOnly:(BOOL)a0;
- (id)initReadOnly;
- (void)modifyAsyncUsingTransactionBlock:(id /* block */)a0;
- (void)readAsyncUsingSessionBlock:(id /* block */)a0;

@end
