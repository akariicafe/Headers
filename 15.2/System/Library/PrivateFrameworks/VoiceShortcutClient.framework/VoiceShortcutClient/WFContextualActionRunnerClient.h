@protocol WFContextualActionRunnerClientDelegate;

@interface WFContextualActionRunnerClient : WFWorkflowRunnerClient

@property (weak, nonatomic) id<WFContextualActionRunnerClientDelegate> delegate;

- (void)start;
- (id)initWithContextualAction:(id)a0 actionContext:(id)a1;
- (void)handleWorkflowRunResult:(id)a0 completion:(id /* block */)a1;

@end
