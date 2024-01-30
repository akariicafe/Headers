@class NSDateFormatter;

@interface WFThingsTaskActionMigration : WFWorkflowMigration

@property (retain, nonatomic) NSDateFormatter *dateFormatter;

+ (BOOL)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;

- (void).cxx_destruct;
- (void)migrateWorkflow;

@end
