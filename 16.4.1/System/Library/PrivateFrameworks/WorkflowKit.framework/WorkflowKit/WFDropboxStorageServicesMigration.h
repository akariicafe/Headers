@interface WFDropboxStorageServicesMigration : WFWorkflowMigration

+ (id)migrationClassDependencies;
+ (BOOL)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;

- (void)migrateWorkflow;

@end
