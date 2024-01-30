@interface WFProgressiveCoreDataMigrator : NSObject

+ (BOOL)migrateDatabaseAtPersistentStoreURL:(id)a0 error:(id *)a1;
+ (id)customModificationsStepForSchemaWithIdentifier:(id)a0;

@end
