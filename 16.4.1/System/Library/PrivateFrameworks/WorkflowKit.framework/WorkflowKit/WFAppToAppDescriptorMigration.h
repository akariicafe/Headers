@interface WFAppToAppDescriptorMigration : WFWorkflowMigration

+ (BOOL)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;

- (void)migrateWorkflow;
- (BOOL)actionDictionaryContainsSystemIntentAction:(id)a0;
- (void)migrateAppToAppDescriptorForParameterKey:(id)a0 parameters:(id)a1;
- (void)migrateHideAppWithParameters:(id)a0;
- (void)migrateOpenAppWithParameters:(id)a0;
- (void)migrateOpenInWithParameters:(id)a0;
- (void)migrateQuitAppWithParameters:(id)a0;
- (void)migrateSplitScreenWithParameters:(id)a0;
- (void)migrateSystemIntentActionsWithParameters:(id)a0;

@end
