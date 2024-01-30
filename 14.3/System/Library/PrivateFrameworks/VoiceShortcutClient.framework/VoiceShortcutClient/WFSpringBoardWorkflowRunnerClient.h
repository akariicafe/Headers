@class WFSpringBoardWebClipMetadata, NSString;

@interface WFSpringBoardWorkflowRunnerClient : WFWorkflowRunnerClient <WFWorkflowRunnerClientDelegate>

@property (retain, nonatomic) WFSpringBoardWebClipMetadata *metadata;
@property (retain, nonatomic) WFSpringBoardWorkflowRunnerClient *retainedSelf;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithError:(id)a1 cancelled:(BOOL)a2;
- (id)initWithWorkflowIdentifier:(id)a0;
- (id)initWithWebClipMetadata:(id)a0;
- (void)showSingleStepCompletionWithCompletion:(id /* block */)a0;
- (void)start;

@end
