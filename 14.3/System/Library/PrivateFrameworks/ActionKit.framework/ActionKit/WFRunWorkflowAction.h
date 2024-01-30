@class NSString, WFWorkflowController;

@interface WFRunWorkflowAction : WFAction <WFWorkflowControllerDelegate>

@property (weak, nonatomic) WFWorkflowController *workflowController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void).cxx_destruct;
- (void)stop;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)finishRunningWithError:(id)a0;
- (void)workflowController:(id)a0 didFinishRunningWithError:(id)a1 cancelled:(BOOL)a2;
- (void)workflowController:(id)a0 prepareToRunAction:(id)a1 withInput:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)workflowController:(id)a0 handleUnsupportedUserInterfaceForAction:(id)a1 currentState:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)workflowController:(id)a0 handleUnsupportedEnvironmentForAction:(id)a1 currentState:(id)a2 completionHandler:(id /* block */)a3;
- (id)workflowController:(id)a0 parameterInputProviderForAction:(id)a1;
- (id)workflowController:(id)a0 userInterfaceForAction:(id)a1;
- (id)targetContentAttribution;
- (id)getWorkflowWithError:(id *)a0;
- (void)setHandoffWorkflowControllerState:(id)a0;
- (void)getHandoffWorkflowControllerState:(id /* block */)a0;

@end
