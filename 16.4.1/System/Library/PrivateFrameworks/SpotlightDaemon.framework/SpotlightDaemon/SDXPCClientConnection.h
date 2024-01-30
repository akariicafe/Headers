@class NSObject;
@protocol OS_dispatch_queue;

@interface SDXPCClientConnection : CSXPCConnection

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;

- (void)handleError:(id)a0;
- (void)invalidationHandler;
- (void).cxx_destruct;
- (id)initWithServiceName:(id)a0 clientType:(long long)a1;

@end
