@class WFWorkflowRunRequest, WFWorkflowRunningContext, WFWorkflowRunDescriptor, NSObject;
@protocol OS_dispatch_queue, WFWorkflowRunnerClientDelegate;

@interface WFWorkflowRunnerClient : NSObject

@property (retain, nonatomic) WFWorkflowRunningContext *context;
@property (retain, nonatomic) id progressSubscriber;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (retain, nonatomic) WFWorkflowRunDescriptor *descriptor;
@property (retain, nonatomic) WFWorkflowRunRequest *runRequest;
@property (weak, nonatomic) id<WFWorkflowRunnerClientDelegate> delegate;
@property (readonly, nonatomic, getter=isRunning) BOOL running;

+ (id)underlyingErrorIfRunnerError:(id)a0;

- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)beginObservingProgressForWorkflowWithRunningContext:(id)a0;
- (void)dispatchWorkflowResultHandlingWithResult:(id)a0;
- (void)handleWorkflowDidStart:(id)a0;
- (void)handleWorkflowRunResult:(id)a0 completion:(id /* block */)a1;
- (id)initWithDescriptor:(id)a0 runRequest:(id)a1;
- (id)initWithDescriptor:(id)a0 runRequest:(id)a1 delegateQueue:(id)a2;
- (id)runWorkflowWithRequest:(id)a0 completion:(id /* block */)a1;
- (void)stopObservingRunProgress;

@end
