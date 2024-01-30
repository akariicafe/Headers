@interface WFInputContentClassesMigration : WFWorkflowMigration

+ (BOOL)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;
+ (id)addedContentItemClassesByVersion;

- (void)migrateWorkflow;

@end
