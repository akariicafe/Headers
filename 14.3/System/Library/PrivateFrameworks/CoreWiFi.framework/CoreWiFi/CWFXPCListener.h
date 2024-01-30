@class NSXPCListener, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, CWFXPCListenerDelegate;

@interface CWFXPCListener : NSObject <NSXPCListenerDelegate, CWFXPCConnectionDelegate> {
    NSXPCListener *_XPCListener;
    NSMutableArray *_mutableXPCConnections;
    NSObject<OS_dispatch_queue> *_mutexQueue;
}

@property (retain) id<CWFXPCListenerDelegate> delegate;
@property (readonly, nonatomic) long long serviceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)registeredActivities;
- (void)sendXPCEvent:(id)a0 reply:(id /* block */)a1;
- (id)initWithServiceType:(long long)a0;
- (id)registeredEventIDs;
- (id)init;
- (void).cxx_destruct;
- (void)XPCConnection:(id)a0 canceledXPCRequestsWithUUID:(id)a1;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)resume;
- (void)XPCConnection:(id)a0 receivedXPCRequest:(id)a1;
- (BOOL)__allowXPCConnection:(id)a0 serviceType:(long long)a1;
- (void)suspend;
- (void)invalidate;

@end
