@class HMDXPCMessageCountTracker, NSString, NSArray, NSXPCInterface, HMDProcessMonitor, NSObject, HMDApplicationRegistry, NSXPCListener, NSMutableSet;
@protocol OS_dispatch_queue, HMFLocking;

@interface HMDXPCMessageTransport : HMFMessageTransport <NSXPCListenerDelegate, HMFLogging, HMFMessageTransportDelegate> {
    id<HMFLocking> _lock;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_connections;
    NSXPCInterface *_exportedInterface;
    NSXPCInterface *_remoteObjectInterface;
    HMDXPCMessageCountTracker *_xpcCounterTracker;
}

@property (class, readonly) HMDXPCMessageTransport *defaultTransport;

@property (readonly) NSXPCListener *listener;
@property (readonly) HMDProcessMonitor *processMonitor;
@property (readonly) HMDApplicationRegistry *applicationRegistry;
@property (readonly, copy) NSArray *connections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)sendMessage:(id)a0 completionHandler:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;
- (id)activeRequests;
- (BOOL)stop;
- (id)dumpState;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (BOOL)start;
- (void)messageTransport:(id)a0 didReceiveMessage:(id)a1;
- (void)submitCounters;

@end
