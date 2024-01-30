@class NSString, RBSProcessMonitor;
@protocol BLSXPCBacklightProxyClientInterface, BLSBacklightProxy;

@interface BLSHXPCBacklightProxyHost : NSObject <BLSBacklightStateObserving, BLSXPCBacklightProxyHostInterface, BSInvalidatable> {
    id<BLSBacklightProxy> _localBacklightProxy;
    id<BLSXPCBacklightProxyClientInterface> _observingClient;
    RBSProcessMonitor *_processMonitor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _clientPid;
    BOOL _clientIsTaskScheduled;
    BOOL _stateIsStale;
    BOOL _valid;
    unsigned int _entitlements;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isTransitioning;
- (BOOL)isAlwaysOnEnabled;
- (void)dealloc;
- (void)backlight:(id)a0 didCompleteUpdateToState:(long long)a1 forEvent:(id)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (id)performChangeRequest:(id)a0;
- (void)backlight:(id)a0 didChangeAlwaysOnEnabled:(BOOL)a1;
- (oneway void)beginObservation;
- (oneway void)endObservation;
- (id)getBacklightState;
- (id)getFlipbookState;
- (id)initWithLocalBacklightProxy:(id)a0 peer:(id)a1;

@end
