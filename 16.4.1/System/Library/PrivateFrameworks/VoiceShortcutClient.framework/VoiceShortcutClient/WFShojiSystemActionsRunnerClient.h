@protocol WFShojiSystemActionsRunnerClientDelegate;

@interface WFShojiSystemActionsRunnerClient : WFWorkflowRunnerClient

@property (weak, nonatomic) id<WFShojiSystemActionsRunnerClientDelegate> delegate;

- (void)handleWorkflowRunResult:(id)a0 completion:(id /* block */)a1;
- (id)initWithContextualAction:(id)a0;

@end
