@class NSString, BGSystemTaskRequest, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface BGSystemTaskSchedulerRegistration : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *launchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *expirationQueue;
@property (copy, nonatomic) id /* block */ launchHandler;
@property (retain, nonatomic) BGSystemTaskRequest *taskRequest;
@property (retain, nonatomic) NSObject<OS_xpc_object> *descriptor;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 launchQueue:(id)a1 launchHandler:(id /* block */)a2;

@end
