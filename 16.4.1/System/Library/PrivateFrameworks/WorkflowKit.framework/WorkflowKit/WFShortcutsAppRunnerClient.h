@interface WFShortcutsAppRunnerClient : WFWorkflowRunnerClient

- (id)runWorkflowWithRequest:(id)a0 completion:(id /* block */)a1;
- (id)initWithWorkflowData:(id)a0 runSource:(id)a1;
- (id)initWithIdentifier:(id)a0 name:(id)a1 action:(id)a2 metadata:(id)a3 runSource:(id)a4;
- (id)initWithWorkflow:(id)a0 state:(id)a1 runSource:(id)a2 input:(id)a3 remoteDialogPresenterEndpoint:(id)a4 requestOutput:(BOOL)a5;

@end
