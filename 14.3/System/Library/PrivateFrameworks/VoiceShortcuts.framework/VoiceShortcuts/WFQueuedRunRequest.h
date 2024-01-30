@class WFWorkflowRunningContext, WFWorkflowRunRequest;

@interface WFQueuedRunRequest : NSObject

@property (readonly, nonatomic) WFWorkflowRunRequest *runRequest;
@property (readonly, nonatomic) WFWorkflowRunningContext *runningContext;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) BOOL shouldNotifyObservers;

- (void).cxx_destruct;
- (id)initWithRunRequest:(id)a0 runningContext:(id)a1 completionHandler:(id /* block */)a2;

@end
