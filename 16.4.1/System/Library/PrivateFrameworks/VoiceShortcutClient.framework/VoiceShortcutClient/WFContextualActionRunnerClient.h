@protocol WFContextualActionRunnerClientDelegate;

@interface WFContextualActionRunnerClient : WFWorkflowRunnerClient

@property (weak, nonatomic) id<WFContextualActionRunnerClientDelegate> delegate;

- (void)start;
- (void)handleWorkflowRunResult:(id)a0 completion:(id /* block */)a1;
- (id)initWithContextualAction:(id)a0 actionContext:(id)a1;

@end
