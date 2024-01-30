@interface WFBetaFilteringActionsMigration : WFWorkflowMigration

+ (id)actionIdentifierMapping;
+ (BOOL)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;

- (void)migrateWorkflow;

@end
