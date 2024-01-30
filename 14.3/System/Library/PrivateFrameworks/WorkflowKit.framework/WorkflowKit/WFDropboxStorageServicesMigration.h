@interface WFDropboxStorageServicesMigration : WFWorkflowMigration

+ (BOOL)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;
+ (id)migrationClassDependencies;

- (void)migrateWorkflow;

@end
