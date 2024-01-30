@class SSSQLiteDatabase;

@interface SSAppPurchaseHistoryDatabase : NSObject {
    SSSQLiteDatabase *_database;
}

+ (id)accountUniqueIdentifierKey;
+ (void)_createDatabaseDirectory;
+ (BOOL)_setupDatabase:(id)a0;
+ (id)newDefaultInstance;

- (id)database;
- (BOOL)setValue:(id)a0 forDatabaseProperty:(id)a1;
- (id)valueForDatabaseProperty:(id)a0;
- (BOOL)setLocalRevision:(long long)a0 forAccountUniqueIdentifier:(id)a1;
- (BOOL)resetCacheForNewAccountID:(id)a0;
- (id)initWithDatabaseURL:(id)a0 readOnly:(BOOL)a1;
- (long long)localRevisionForAccountUniqueIdentifier:(id)a0;
- (id)init;
- (id)allProperties:(id)a0 accountID:(id)a1 includingHidden:(BOOL)a2;
- (id)currentAccountUniqueIdentifier;
- (BOOL)setCurrentAccountUniqueIdentifier:(id)a0;
- (void)readUsingTransactionBlock:(id /* block */)a0;
- (void)dealloc;
- (void)readAsyncUsingTransactionBlock:(id /* block */)a0;
- (BOOL)removeValueForDatabaseProperty:(id)a0;
- (void)modifyUsingAppPurchaseHistoryTransactionBlock:(id /* block */)a0;

@end
