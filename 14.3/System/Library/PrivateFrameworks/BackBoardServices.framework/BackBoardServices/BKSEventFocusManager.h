@class NSXPCConnection, NSString, BKSHIDEventObserver, NSSet, NSMutableDictionary, BKSHIDEventDeliveryManager, NSMutableSet, NSMutableArray, NSObject, NSMapTable;
@protocol OS_dispatch_queue, BSInvalidatable;

@interface BKSEventFocusManager : NSObject <BKSHIDEventDeferringObserving> {
    BKSHIDEventObserver *_observer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _focusDataLock;
    BKSHIDEventDeliveryManager *_focusDataLock_manager;
    BOOL _focusDataLock_adjustsFocusTargetPID;
    int _focusDataLock_adjustedFocusTargetPID;
    id<BSInvalidatable> _queue_keyCommandRulesAssertion;
    NSMutableSet *_focusDataLock_currentState;
    NSMutableDictionary *_focusDataLock_pendingStatesByPriority;
    NSMutableArray *_focusDataLock_assertions;
    id<BSInvalidatable> _observingAssertion;
    NSObject<OS_dispatch_queue> *_focusClientQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    unsigned long long _propertyUpdateGeneration;
}

@property (nonatomic) BOOL needsFlush;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSMapTable *infoPerFocusChangeObserver;
@property (retain, nonatomic) NSSet *cachedFocusedDeferralProperties;
@property (readonly, nonatomic) int pid;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)setSystemAppControlsFocusOnMainDisplay:(BOOL)a0;
- (id)_initWithManager:(id)a0 observer:(id)a1 pid:(int)a2 clientIdentifier:(id)a3;
- (id)_queryDeferralResolutions;
- (void)deferEventsForClientWithProperties:(id)a0 toClientWithProperties:(id)a1;
- (void)_syncObserverState;
- (void)deferEventsForClientWithProperties:(id)a0 toClientWithProperties:(id)a1 withPriority:(int)a2;
- (void)setForegroundApplicationOnMainDisplay:(id)a0 pid:(int)a1;
- (void)_focusDataLock_reallyFlushWithSet:(id)a0;
- (void)_focusClientQueue_deferringResolutionsChanged;
- (void)_pruneSet:(id)a0 ofDeferralsPassingTest:(id /* block */)a1;
- (void)_focusDataLock_updateKeyCommandDispatching;
- (void)_focusDataLock_updateFocusTargetOverride;
- (void)_focusDataLock_rebuildPendingStatesByPriority;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (void)addObserver:(id)a0;
- (void)flush;
- (void)deferringResolutionsChanged;

@end
