@interface WFSpeakTextLanguagePickerParameterMigration : WFWorkflowMigration

+ (BOOL)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;

- (id)availableLanguageCodes;
- (void)migrateWorkflow;
- (void)migrateSpeakTextLanguageParameterInParametersDictionary:(id)a0;

@end
