@interface WFWorkflowMigrator : NSObject

+ (void)initialize;
+ (void)migrateWorkflowIfNeeded:(id)a0 completion:(id /* block */)a1;
+ (id)migrationClasses;
+ (id)migrationClassesWithDependencies;
+ (id)orderedMigrationClassesWithoutDependencies;
+ (void)registerAllWorkflowKitMigrationClasses;
+ (void)registerMigrationClass:(Class)a0;

@end
