@class CWFXPCRequestProxy, NSSet, NSString, RBSProcessMonitor, NSMutableSet, NSObject, NSMutableArray;
@protocol CWFXPCManagerDelegate, OS_dispatch_queue;

@interface CWFXPCManager : NSObject <CWFXPCListenerDelegate, CWFXPCRequestProxyDelegate> {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSMutableArray *_mutableXPCListeners;
    CWFXPCRequestProxy *_XPCRequestProxy;
    RBSProcessMonitor *_processMonitor;
    NSMutableSet *_processMonitorPIDs;
}

@property (retain) id<CWFXPCManagerDelegate> delegate;
@property (copy) NSSet *supportedRequestTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setTargetQueue:(id)a0 requestType:(long long)a1 interfaceName:(id)a2;
- (id)registeredActivities;
- (void)XPCListener:(id)a0 invalidatedXPCConnection:(id)a1;
- (void)XPCListener:(id)a0 XPCConnection:(id)a1 canceledXPCRequestsWithUUID:(id)a2;
- (void)sendXPCEvent:(id)a0 reply:(id /* block */)a1;
- (void)XPCListener:(id)a0 XPCConnection:(id)a1 receivedXPCRequest:(id)a2;
- (id)registeredEventIDs;
- (void).cxx_destruct;
- (id)init;
- (void)__updateProcessMonitorConfiguration;
- (void)XPCListener:(id)a0 addedXPCConnection:(id)a1;
- (void)suspend;
- (void)XPCRequestProxy:(id)a0 XPCConnection:(id)a1 receivedXPCRequest:(id)a2;
- (id)initWithServiceTypes:(id)a0;
- (void)invalidate;
- (void)XPCListener:(id)a0 XPCConnection:(id)a1 updatedRegisteredEventIDs:(id)a2;
- (void)resume;
- (void)XPCRequestProxy:(id)a0 XPCConnection:(id)a1 canceledXPCRequestsWithUUID:(id)a2;
- (void)XPCRequestProxy:(id)a0 sendXPCEvent:(id)a1 reply:(id /* block */)a2;
- (void)XPCRequestProxy:(id)a0 invalidatedXPCConnection:(id)a1;

@end
