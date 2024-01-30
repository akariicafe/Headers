@class NSString, NSMutableDictionary, NSMutableSet, NSMutableArray;

@interface WFWorkflowMigration : NSObject <WFWorkflowMigration>

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSMutableDictionary *workflow;
@property (readonly, nonatomic) NSMutableArray *actions;
@property (readonly, nonatomic) NSString *actionIdentifierKey;
@property (readonly, nonatomic) NSString *actionParametersKey;
@property (readonly, nonatomic) NSMutableSet *warnings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)migrationClassDependencies;
+ (BOOL)workflowNeedsMigration:(id)a0 fromClientVersion:(id)a1;

- (void)finish;
- (void).cxx_destruct;
- (void)migrateWorkflow;
- (void)enumerateActionsWithIdentifier:(id)a0 usingBlock:(id /* block */)a1;
- (void)migrateWorkflowIfNeeded:(id)a0 completion:(id /* block */)a1;

@end
