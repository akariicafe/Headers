@class NSHashTable, NSArray, NSMutableOrderedSet;

@interface WFRunningWorkflowManager : NSObject <WFApplicationStateObserver>

@property (readonly, nonatomic) NSMutableOrderedSet *runningWorkflowControllerSet;
@property (readonly, nonatomic) NSHashTable *workflowControllerAssertionTable;
@property (readonly, nonatomic) NSArray *runningWorkflows;
@property (readonly, nonatomic) NSArray *runningWorkflowControllers;
@property (copy, nonatomic) id /* block */ demoResetBlock;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)applicationContext:(id)a0 applicationStateDidChange:(long long)a1;
- (void)workflowControllerDidStart:(id)a0;
- (void)workflowControllerDidStop:(id)a0;
- (void)updateRunningWorkflowCount;
- (void)updateAssertions;

@end
