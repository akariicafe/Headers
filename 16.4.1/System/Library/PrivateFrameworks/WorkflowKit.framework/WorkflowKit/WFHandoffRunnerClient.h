@interface WFHandoffRunnerClient : WFWorkflowRunnerClient

@property (copy, nonatomic) id /* block */ runningDidStartHandler;

- (void)startWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)handleWorkflowDidStart:(id)a0;
- (void)handleWorkflowRunResult:(id)a0 completion:(id /* block */)a1;
- (id)runWorkflowWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)notifyStartHandlerWithProgress:(id)a0;
- (id)initWithWorkflowControllerState:(id)a0 runSource:(id)a1 remoteDialogPresenterEndpoint:(id)a2;

@end
