@class WFWorkflowRunRequest, WFWorkflowRunningContext, NSObject;
@protocol OS_dispatch_queue, WFWorkflowRunnerClientDelegate;

@interface WFWorkflowRunnerClient : NSObject

@property (retain, nonatomic) WFWorkflowRunningContext *context;
@property (retain, nonatomic) id progressSubscriber;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) WFWorkflowRunRequest *runRequest;
@property (weak, nonatomic) id<WFWorkflowRunnerClientDelegate> delegate;
@property (readonly, nonatomic, getter=isRunning) BOOL running;

- (void)start;
- (void).cxx_destruct;
- (void)handleWorkflowRunResult:(id)a0 completion:(id /* block */)a1;
- (id)initWithRunRequest:(id)a0;
- (id)initWithRunRequest:(id)a0 delegateQueue:(id)a1;
- (id)runWorkflowWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)dispatchWorkflowResultHandlingWithResult:(id)a0;
- (void)beginObservingProgressForWorkflowWithRunningContext:(id)a0;
- (void)stopObservingRunProgress;
- (void)stop;

@end
