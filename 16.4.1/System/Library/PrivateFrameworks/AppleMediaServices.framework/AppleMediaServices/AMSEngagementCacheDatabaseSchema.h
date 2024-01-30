@interface AMSEngagementCacheDatabaseSchema : NSObject

+ (BOOL)createOrUpdateSchemaUsingConnection:(id)a0;
+ (void)_migrateVersion0to1WithMigration:(id)a0;

@end
