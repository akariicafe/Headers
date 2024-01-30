@class WFWorkflowRunningContext, WFWorkflowRunRequest;
@protocol WFWorkflowRunnerClientDelegate;

@interface WFWorkflowRunnerClient : NSObject

@property (readonly, nonatomic) WFWorkflowRunRequest *runRequest;
@property (retain, nonatomic) WFWorkflowRunningContext *context;
@property (retain, nonatomic) id progressSubscriber;
@property (weak, nonatomic) id<WFWorkflowRunnerClientDelegate> delegate;

- (void).cxx_destruct;
- (void)stop;
- (id)initWithRunRequest:(id)a0;
- (void)beginObservingProgressForWorkflowWithRunningContext:(id)a0;
- (void)stopObservingRunProgress;
- (void)start;

@end
