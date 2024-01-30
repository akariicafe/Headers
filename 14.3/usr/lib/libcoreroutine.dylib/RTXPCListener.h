@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface RTXPCListener : NSXPCListener <NSXPCListenerDelegate>

@property (readonly, nonatomic) NSString *machServiceName;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMutableArray *connectedClients;
@property (readonly, nonatomic) NSMutableArray *disconnectedClients;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_shutdown;
- (void)setup;
- (void)shutdown;
- (void)_setup;
- (void).cxx_destruct;
- (id)initWithMachServiceName:(id)a0;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)logClients;

@end
