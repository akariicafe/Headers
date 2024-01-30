@interface WFFindMyFriendsIntentMigration : WFWorkflowMigration

+ (id)classNameConversion;
+ (id)launchIdConversion;
+ (id)parameterConversion;
+ (BOOL)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;

- (void)migrateWorkflow;
- (BOOL)convertParametersAndUpdateIntent:(id *)a0;
- (BOOL)updateBundleIdentifierForIntent:(id)a0;
- (BOOL)updateClassNameForIntent:(id)a0;

@end
