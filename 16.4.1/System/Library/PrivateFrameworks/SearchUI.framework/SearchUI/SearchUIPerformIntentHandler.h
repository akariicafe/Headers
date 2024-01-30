@class NSString, WFWorkflowRunnerClient;

@interface SearchUIPerformIntentHandler : SearchUIOpenUserActivityHandler <WFWorkflowRunnerClientDelegate>

@property (retain, nonatomic) WFWorkflowRunnerClient *runnerClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (void).cxx_destruct;
- (void)getUserActivityForCommand:(id)a0 environment:(id)a1 completionHandler:(id /* block */)a2;
- (void)performCommand:(id)a0 triggerEvent:(unsigned long long)a1 environment:(id)a2;
- (BOOL)shouldDeselectAfterExecution;

@end
