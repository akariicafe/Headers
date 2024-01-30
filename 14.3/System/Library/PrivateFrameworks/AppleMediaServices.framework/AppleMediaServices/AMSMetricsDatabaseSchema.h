@interface AMSMetricsDatabaseSchema : NSObject

+ (void)migrateVersion1to2WithMigration:(id)a0;
+ (void)_applyProtectionClassForDirectoryAtURL:(id)a0;
+ (BOOL)removeDatabaseForContainerId:(id)a0;
+ (id)_containerURLForContainerId:(id)a0;
+ (BOOL)createOrUpdateSchemaUsingConnection:(id)a0;
+ (void)migrateVersion3to4WithMigration:(id)a0;
+ (void)migrateVersion0to1WithMigration:(id)a0;
+ (void)migrateVersion2to3WithMigration:(id)a0;
+ (id)databasePathForContainerId:(id)a0;
+ (BOOL)_addSkipBackupAttribute:(BOOL)a0 forURL:(id)a1;

@end
