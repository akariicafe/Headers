@interface SSWishlistDatabaseSchema : NSObject

+ (void)createSchemaInDatabase:(id)a0;
+ (void)_migrate7000to7001InDatabase:(id)a0;
+ (void)_migrate7001to7002InDatabase:(id)a0;
+ (id)databasePathWithAccountIdentifier:(long long)a0;

@end
