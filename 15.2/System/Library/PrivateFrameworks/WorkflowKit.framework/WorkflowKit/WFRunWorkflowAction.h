@class NSString, NSProgress, WFWorkflowRunnerClient, WFWorkflowController;

@interface WFRunWorkflowAction : WFAction <WFRunShortcutRunnerClientDelegate, WFWorkflowControllerDelegate>

@property (retain, nonatomic) WFWorkflowRunnerClient *workflowRunnerClient;
@property (weak, nonatomic) WFWorkflowController *workflowController;
@property (retain, nonatomic) NSProgress *workflowRunningProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;
- (void)dealloc;
- (void)cancel;
- (void)stop;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)finishRunningWithError:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (void)workflowController:(id)a0 didFinishRunningWithError:(id)a1 cancelled:(BOOL)a2;
- (void)workflowController:(id)a0 prepareToRunAction:(id)a1 withInput:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)workflowController:(id)a0 handleUnsupportedUserInterfaceForAction:(id)a1 currentState:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)workflowController:(id)a0 handleUnsupportedEnvironmentForAction:(id)a1 currentState:(id)a2 completionHandler:(id /* block */)a3;
- (id)workflowController:(id)a0 parameterInputProviderForAction:(id)a1;
- (id)userInterfaceForWorkflowController:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (id)actionSandboxExtensionProviderForWorkflowRunnerClient:(id)a0;
- (id)getWorkflowWithError:(id *)a0;
- (void)setHandoffWorkflowControllerState:(id)a0;
- (void)getHandoffWorkflowControllerState:(id /* block */)a0;

@end
