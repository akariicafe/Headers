@interface WFProgressiveCoreDataMigrator : NSObject

+ (BOOL)migrateDatabaseAtPersistentStoreDescription:(id)a0 useLockFile:(BOOL)a1 error:(id *)a2;
+ (id)customModificationsStepForSchemaWithIdentifier:(id)a0;

@end
