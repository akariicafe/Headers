@interface WFShortcutsAppRunnerClient : WFWorkflowRunnerClient

- (id)runWorkflowWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithWorkflow:(id)a0 state:(id)a1 runSource:(id)a2 input:(id)a3 remoteDialogPresenterEndpoint:(id)a4 requestOutput:(BOOL)a5;

@end
