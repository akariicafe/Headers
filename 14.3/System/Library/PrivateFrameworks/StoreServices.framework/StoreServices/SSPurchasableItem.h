@class NSDictionary, NSString, SSSQLiteDatabase;

@interface SSPurchasableItem : NSObject {
    NSDictionary *_propertyValues;
    NSString *_tableName;
    SSSQLiteDatabase *_database;
}

+ (id)databaseTable;
+ (id)sortByDatePurchasedKey;
+ (id)allPropertyKeys;

- (long long)storeID;
- (long long)pid;
- (void)dealloc;
- (id)description;
- (id)propertyValues;
- (id)datePurchased;
- (id)initWithPropertyValues:(id)a0;
- (long long)accountUniqueIdentifier;
- (BOOL)isHidden;

@end
