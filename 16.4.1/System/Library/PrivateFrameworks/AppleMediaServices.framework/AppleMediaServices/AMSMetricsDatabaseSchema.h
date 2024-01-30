@interface AMSMetricsDatabaseSchema : NSObject

+ (void)migrateVersion3to4WithMigration:(id)a0;
+ (void)migrateVersion2to3WithMigration:(id)a0;
+ (void)migrateVersion0to1WithMigration:(id)a0;
+ (BOOL)createOrUpdateSchemaUsingConnection:(id)a0;
+ (void)migrateVersion1to2WithMigration:(id)a0;
+ (void)migrateVersion4to5WithMigration:(id)a0;

@end
