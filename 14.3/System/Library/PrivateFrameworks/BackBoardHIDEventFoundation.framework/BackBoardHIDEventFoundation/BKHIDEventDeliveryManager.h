@class BKSHIDEventAuthenticationKeyRing, NSSet, NSMutableDictionary, NSString, BKSHIDEventDisplay, BSMutableIntegerMap, NSMutableArray;
@protocol BKHIDEventDeliveryResolutionObserver;

@interface BKHIDEventDeliveryManager : NSObject <BKHIDEventClientDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSMutableArray *deliveryRoots;
@property (retain, nonatomic) NSMutableArray *keyCommandDeliveryRoots;
@property (retain, nonatomic) BSMutableIntegerMap *deferringRulesByPID;
@property (retain, nonatomic) BSMutableIntegerMap *clientsByPID;
@property (retain, nonatomic) NSSet *deferringResolutions;
@property (retain, nonatomic) NSMutableDictionary *destinationCacheBySender;
@property (retain, nonatomic) id<BKHIDEventDeliveryResolutionObserver> resolutionObserver;
@property (nonatomic) BOOL observeClientDeath;
@property (retain, nonatomic) BKSHIDEventDisplay *mainDisplay;
@property (readonly, nonatomic) BKSHIDEventAuthenticationKeyRing *authenticationKeyRing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithObserverService:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_lock_destinationsForKeyCommand:(id)a0 sender:(id)a1;
- (id)_lock_resolveDeferringChainForPID:(int)a0 display:(id)a1 environment:(id)a2 targetOrder:(out id *)a3;
- (id)destinationsForKeyCommand:(id)a0 sender:(id)a1;
- (void)_lock_setDeferringRules:(id)a0 forClientWithPID:(int)a1;
- (id)_lock_dispatchingRuleInDeliveryRoot:(id)a0 matchingDescriptor:(id)a1 sender:(id)a2;
- (void)setDispatchingRuleSets:(id)a0 forClientWithPID:(int)a1;
- (void)setDeferringRules:(id)a0 forClientWithPID:(int)a1;
- (id)_lock_canonicalDisplayForEventSender:(id)a0;
- (id)destinationsForEvent:(struct __IOHIDEvent { } *)a0 sender:(id)a1;
- (void)_lock_setDispatchingRuleSets:(id)a0 forClientWithPID:(int)a1;
- (void)clientDied:(id)a0;
- (id)_lock_bundleIdentifierForPID:(int)a0;
- (id)_destinationFromTarget:(id)a0 display:(id)a1 environment:(id)a2;
- (id)_lock_selectNextDeferringRuleForPID:(int)a0 display:(id)a1 environment:(id)a2 token:(id)a3 incomplete:(BOOL *)a4 ignoreRulesWithTargets:(id)a5;
- (id)_lock_allRootResolutions;
- (void)_lock_setKeyCommandsRegistrations:(id)a0 forClientWithPID:(int)a1;
- (long long)_registration:(id)a0 containsMatchForKeyCommand:(id)a1;
- (id)_lock_clientWithPID:(int)a0 createIfNeeded:(BOOL)a1;
- (void)_lock_setKeyCommandDispatchingRules:(id)a0 forClientWithPID:(int)a1;
- (id)destinationsStartingFromPID:(int)a0 deferringPredicate:(id)a1;
- (void)setKeyCommandDispatchingRules:(id)a0 forClientWithPID:(int)a1;
- (void)setKeyCommandsRegistrations:(id)a0 forClientWithPID:(int)a1;
- (void)_lock_notifyObserversOfResolutionUpdates:(id /* block */)a0;

@end
