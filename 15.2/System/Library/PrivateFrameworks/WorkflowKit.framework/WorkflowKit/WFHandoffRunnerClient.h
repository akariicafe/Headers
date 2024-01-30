@interface WFHandoffRunnerClient : WFWorkflowRunnerClient

- (id)runWorkflowWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithWorkflowControllerState:(id)a0 runSource:(id)a1 remoteDialogPresenterEndpoint:(id)a2;

@end
