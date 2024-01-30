@class WFWorkflowRunningContext, WFWorkflowRunRequest;

@interface WFQueuedRunRequest : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) WFWorkflowRunRequest *runRequest;
@property (readonly, nonatomic) WFWorkflowRunningContext *runningContext;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) BOOL shouldNotifyObservers;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 runRequest:(id)a1 runningContext:(id)a2 completionHandler:(id /* block */)a3;

@end
