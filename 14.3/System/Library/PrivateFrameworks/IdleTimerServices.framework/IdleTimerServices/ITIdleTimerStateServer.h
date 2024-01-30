@class NSString, NSMutableDictionary, NSMutableSet, BSServiceConnectionListener, NSObject;
@protocol OS_dispatch_queue, ITIdleTimerStateServerDelegate;

@interface ITIdleTimerStateServer : NSObject <BSServiceConnectionListenerDelegate, ITIdleTimerServerInterface> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _accessLock;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    BSServiceConnectionListener *_connectionListener;
    NSMutableSet *_connections;
    NSMutableDictionary *_clientTargetsByConfigIdentifier;
}

@property (weak, nonatomic) id<ITIdleTimerStateServerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)clientConfiguration:(id)a0 handleIdleEvent:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)initWithCalloutQueue:(id)a0 delegate:(id)a1;
- (void)addIdleTimerServiceConfiguration:(id)a0 forReason:(id)a1 error:(id *)a2;
- (void)_addConnection:(id)a0;
- (BOOL)_hasIdleTimerServicesEntitlementForProcess:(id)a0 missingEntitlementError:(id *)a1;
- (void)removeIdleTimerServiceConfiguration:(id)a0 forReason:(id)a1 error:(id *)a2;
- (void)listener:(id)a0 didReceiveConnection:(id)a1 withContext:(id)a2;
- (void)_removeConnection:(id)a0;
- (BOOL)isIdleTimerServiceAvailableWithError:(id *)a0;

@end
