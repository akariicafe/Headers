@protocol WFRunShortcutRunnerClientDelegate;

@interface WFRunShortcutRunnerClient : WFWorkflowRunnerClient

@property (weak, nonatomic) id<WFRunShortcutRunnerClientDelegate> delegate;

- (void)handleWorkflowRunResult:(id)a0 completion:(id /* block */)a1;

@end
