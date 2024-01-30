@class WFWorkflowRunRequest, WFWorkflowRunningContext, WFWorkflowRunDescriptor, NSObject;
@protocol OS_voucher;

@interface WFQueuedRunRequest : NSObject

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) WFWorkflowRunDescriptor *descriptor;
@property (readonly, nonatomic) WFWorkflowRunRequest *runRequest;
@property (readonly, nonatomic) WFWorkflowRunningContext *runningContext;
@property (readonly, nonatomic) NSObject<OS_voucher> *voucher;
@property (readonly, copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) BOOL shouldNotifyObservers;

- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 descriptor:(id)a1 runRequest:(id)a2 runningContext:(id)a3 voucher:(id)a4 completionHandler:(id /* block */)a5;

@end
