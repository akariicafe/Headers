@class NSDictionary, NSString, SSSQLiteDatabase;

@interface SSPurchasableItem : NSObject {
    NSDictionary *_propertyValues;
    NSString *_tableName;
    SSSQLiteDatabase *_database;
}

+ (id)databaseTable;
+ (id)allPropertyKeys;
+ (id)sortByDatePurchasedKey;

- (long long)storeID;
- (long long)pid;
- (BOOL)isHidden;
- (void)dealloc;
- (id)description;
- (id)propertyValues;
- (id)datePurchased;
- (long long)accountUniqueIdentifier;
- (id)initWithPropertyValues:(id)a0;

@end
