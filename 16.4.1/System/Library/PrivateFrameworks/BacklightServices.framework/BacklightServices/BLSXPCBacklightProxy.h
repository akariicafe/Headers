@class NSString, NSHashTable, NSObject, BSServiceConnection;
@protocol OS_dispatch_queue;

@interface BLSXPCBacklightProxy : NSObject <BLSBacklightProxy, BLSXPCBacklightProxyClientInterface, BSInvalidatable> {
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BSServiceConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _backlightState;
    BOOL _isBacklightStateCached;
    BOOL _isAlwaysOnEnabled;
    BOOL _isAlwaysOnEnabledCached;
    BOOL _lock_invalidated;
}

@property (readonly, nonatomic) long long backlightState;
@property (readonly, nonatomic) long long flipbookState;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (readonly, nonatomic, getter=isAlwaysOnEnabled) BOOL alwaysOnEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (id)performChangeRequest:(id)a0;
- (oneway void)didChangeAlwaysOnEnabled:(id)a0;
- (oneway void)didCompleteUpdateToState:(id)a0 forEvent:(id)a1;

@end
