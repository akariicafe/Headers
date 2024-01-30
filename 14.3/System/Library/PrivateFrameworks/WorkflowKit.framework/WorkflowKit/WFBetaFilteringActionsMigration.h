@interface WFBetaFilteringActionsMigration : WFWorkflowMigration

+ (BOOL)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;
+ (id)actionIdentifierMapping;

- (void)migrateWorkflow;

@end
