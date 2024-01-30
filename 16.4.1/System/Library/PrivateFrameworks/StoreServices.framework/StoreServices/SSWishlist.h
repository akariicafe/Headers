@class NSNumber, SSSQLiteDatabase;

@interface SSWishlist : NSObject {
    SSSQLiteDatabase *_database;
}

@property (readonly, nonatomic) long long accountIdentifier;
@property (copy, nonatomic) NSNumber *lastSyncTime;

+ (BOOL)existsForAccountIdentifier:(long long)a0;

- (id)initWithAccountIdentifier:(long long)a0;
- (void)dealloc;
- (void)performTransactionWithBlock:(id /* block */)a0;
- (BOOL)deleteBackingStore;

@end
