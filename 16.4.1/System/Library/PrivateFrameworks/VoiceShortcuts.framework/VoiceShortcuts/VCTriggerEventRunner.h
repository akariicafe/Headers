@class NSString, WFWorkflowRunningContext, WFWorkflowRunEvent, WFConfiguredTrigger, WFWorkflowRunCoordinator;
@protocol WFDatabaseProvider, VCTriggerEventRunnerDelegate;

@interface VCTriggerEventRunner : NSObject <WFWorkflowRunCoordinatorObserver>

@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) id<VCTriggerEventRunnerDelegate> delegate;
@property (retain, nonatomic) WFWorkflowRunEvent *inProgressRunEvent;
@property (retain, nonatomic) WFConfiguredTrigger *inProgressTrigger;
@property (retain, nonatomic) WFWorkflowRunningContext *inProgressRunningContext;
@property (readonly, nonatomic) WFWorkflowRunCoordinator *runCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDatabaseProvider:(id)a0 delegate:(id)a1 runCoordinator:(id)a2;
- (BOOL)isRunningWorkflowWithIdentifier:(id)a0;
- (void)logPowerLogEventForConfiguredTrigger:(id)a0 workflowReference:(id)a1;
- (void)runCoordinator:(id)a0 didFinishRunningWorkflowWithError:(id)a1 runningContext:(id)a2 cancelled:(BOOL)a3;
- (BOOL)startRunningWorkflow:(id)a0 forTrigger:(id)a1 eventInfo:(id)a2;

@end
