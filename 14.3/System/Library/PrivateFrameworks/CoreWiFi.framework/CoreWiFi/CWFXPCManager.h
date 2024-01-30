@class CWFXPCRequestProxy, NSSet, NSString, NSObject, NSMutableArray;
@protocol CWFXPCManagerDelegate, OS_dispatch_queue;

@interface CWFXPCManager : NSObject <CWFXPCListenerDelegate, CWFXPCRequestProxyDelegate> {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSMutableArray *_mutableXPCListeners;
    CWFXPCRequestProxy *_XPCRequestProxy;
}

@property (retain) id<CWFXPCManagerDelegate> delegate;
@property (copy) NSSet *supportedRequestTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)registeredActivities;
- (void)sendXPCEvent:(id)a0 reply:(id /* block */)a1;
- (id)registeredEventIDs;
- (void)XPCListener:(id)a0 invalidatedXPCConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)XPCListener:(id)a0 XPCConnection:(id)a1 receivedXPCRequest:(id)a2;
- (void)XPCRequestProxy:(id)a0 XPCConnection:(id)a1 receivedXPCRequest:(id)a2;
- (void)XPCRequestProxy:(id)a0 sendXPCEvent:(id)a1 reply:(id /* block */)a2;
- (void)XPCRequestProxy:(id)a0 invalidatedXPCConnection:(id)a1;
- (id)initWithServiceTypes:(id)a0;
- (void)resume;
- (void)XPCListener:(id)a0 XPCConnection:(id)a1 canceledXPCRequestsWithUUID:(id)a2;
- (void)XPCRequestProxy:(id)a0 XPCConnection:(id)a1 canceledXPCRequestsWithUUID:(id)a2;
- (void)suspend;
- (void)invalidate;
- (void)setTargetQueue:(id)a0 requestType:(long long)a1 interfaceName:(id)a2;

@end
