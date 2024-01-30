@interface WFWorkflowMigrator : NSObject

+ (void)initialize;
+ (void)migrateWorkflowIfNeeded:(id)a0 completion:(id /* block */)a1;
+ (void)registerAllWorkflowKitMigrationClasses;
+ (id)migrationClasses;
+ (void)registerMigrationClass:(Class)a0;

@end
