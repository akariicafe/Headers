@interface WFFindMyFriendsIntentMigration : WFWorkflowMigration

+ (BOOL)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;
+ (id)parameterConversion;
+ (id)classNameConversion;
+ (id)launchIdConversion;

- (void)migrateWorkflow;
- (BOOL)updateBundleIdentifierForIntent:(id)a0;
- (BOOL)updateClassNameForIntent:(id)a0;
- (BOOL)convertParametersAndUpdateIntent:(id *)a0;

@end
