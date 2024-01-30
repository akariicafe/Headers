@class SSSQLiteDatabase;

@interface SSAppPurchaseHistoryDatabase : NSObject {
    SSSQLiteDatabase *_database;
}

+ (BOOL)_setupDatabase:(id)a0;
+ (id)newDefaultInstance;
+ (void)_createDatabaseDirectory;
+ (id)accountUniqueIdentifierKey;

- (id)database;
- (void)readAsyncUsingTransactionBlock:(id /* block */)a0;
- (BOOL)resetCacheForNewAccountID:(id)a0;
- (id)init;
- (void)dealloc;
- (void)modifyUsingAppPurchaseHistoryTransactionBlock:(id /* block */)a0;
- (BOOL)removeValueForDatabaseProperty:(id)a0;
- (id)valueForDatabaseProperty:(id)a0;
- (id)initWithDatabaseURL:(id)a0 readOnly:(BOOL)a1;
- (BOOL)setLocalRevision:(long long)a0 forAccountUniqueIdentifier:(id)a1;
- (BOOL)setCurrentAccountUniqueIdentifier:(id)a0;
- (long long)localRevisionForAccountUniqueIdentifier:(id)a0;
- (void)readUsingTransactionBlock:(id /* block */)a0;
- (BOOL)setValue:(id)a0 forDatabaseProperty:(id)a1;
- (id)allProperties:(id)a0 accountID:(id)a1 includingHidden:(BOOL)a2;
- (id)currentAccountUniqueIdentifier;

@end
