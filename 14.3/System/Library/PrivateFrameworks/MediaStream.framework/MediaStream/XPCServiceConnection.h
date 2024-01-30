@class NSString, XPCServiceListener, NSObject;
@protocol OS_xpc_object, XPCServiceConnectionDelegate, OS_dispatch_queue, NSObject;

@interface XPCServiceConnection : NSObject

@property (readonly, nonatomic) NSObject<OS_xpc_object> *client;
@property (weak, nonatomic) XPCServiceListener *serviceListener;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, retain, nonatomic) NSString *serviceName;
@property (weak, nonatomic) id<XPCServiceConnectionDelegate> delegate;
@property (retain, nonatomic) id<NSObject> context;

- (void).cxx_destruct;
- (void)resume;
- (id)debugDescription;
- (void)sendMessage:(id)a0 withHandler:(id /* block */)a1;
- (void)shutDownCompletionBlock:(id /* block */)a0;
- (id)initWithServiceName:(id)a0 client:(id)a1 queue:(id)a2;
- (void)workQueueHandleIncomingMessage:(id)a0;
- (void)workQueueShutDown;

@end
