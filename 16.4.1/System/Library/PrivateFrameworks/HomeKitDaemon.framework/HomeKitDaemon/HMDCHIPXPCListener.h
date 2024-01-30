@class NSXPCListener, HMDHomeManager, NSString, NSXPCInterface, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCHIPXPCListener : HMFObject <NSXPCListenerDelegate, HMFLogging>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSXPCListener *listener;
@property (readonly, nonatomic) NSXPCInterface *exportedInterface;
@property (readonly, nonatomic) NSXPCInterface *remoteObjectInterface;
@property (readonly, weak, nonatomic) HMDHomeManager *homeManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)initWithHomeManager:(id)a0;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (id)createClientConnectionWithRemoteObjectProxy:(id)a0 homeManager:(id)a1 pid:(int)a2;

@end
