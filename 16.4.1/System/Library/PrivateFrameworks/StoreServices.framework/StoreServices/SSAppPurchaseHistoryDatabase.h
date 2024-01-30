@class SSSQLiteDatabase;

@interface SSAppPurchaseHistoryDatabase : NSObject {
    SSSQLiteDatabase *_database;
}

+ (void)_createDatabaseDirectory;
+ (id)accountUniqueIdentifierKey;
+ (id)newDefaultInstance;
+ (BOOL)_setupDatabase:(id)a0;

- (id)database;
- (BOOL)setCurrentAccountUniqueIdentifier:(id)a0;
- (id)valueForDatabaseProperty:(id)a0;
- (BOOL)setLocalRevision:(long long)a0 forAccountUniqueIdentifier:(id)a1;
- (BOOL)resetCacheForNewAccountID:(id)a0;
- (BOOL)setValue:(id)a0 forDatabaseProperty:(id)a1;
- (void)readUsingTransactionBlock:(id /* block */)a0;
- (void)dealloc;
- (BOOL)removeValueForDatabaseProperty:(id)a0;
- (id)currentAccountUniqueIdentifier;
- (id)initWithDatabaseURL:(id)a0 readOnly:(BOOL)a1;
- (void)modifyUsingAppPurchaseHistoryTransactionBlock:(id /* block */)a0;
- (void)readAsyncUsingTransactionBlock:(id /* block */)a0;
- (long long)localRevisionForAccountUniqueIdentifier:(id)a0;
- (id)init;
- (id)allProperties:(id)a0 accountID:(id)a1 includingHidden:(BOOL)a2;

@end
