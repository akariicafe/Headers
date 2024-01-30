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
- (id)datePurchased;
- (id)description;
- (id)propertyValues;
- (id)initWithPropertyValues:(id)a0;
- (long long)accountUniqueIdentifier;
- (void)dealloc;
- (long long)pid;
- (BOOL)isHidden;

@end
