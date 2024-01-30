@class BSMutableIntegerMap, NSString, NSSet, NSMutableDictionary, BKSHIDEventDisplay, NSMutableArray, BKSHIDEventAuthenticationOriginator;
@protocol BKHIDEventDeliveryResolutionObserver;

@interface BKHIDEventDeliveryManager : NSObject <BKHIDEventClientDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_deliveryRoots;
    NSMutableArray *_keyCommandDeliveryRoots;
    BSMutableIntegerMap *_deferringRulesByPID;
    BSMutableIntegerMap *_clientsByPID;
    NSSet *_deferringResolutions;
    NSMutableDictionary *_destinationCacheBySender;
}

@property (retain, nonatomic) id<BKHIDEventDeliveryResolutionObserver> resolutionObserver;
@property (nonatomic) BOOL observeClientDeath;
@property (retain, nonatomic) BKSHIDEventDisplay *mainDisplay;
@property (readonly, nonatomic) BKSHIDEventAuthenticationOriginator *authenticationOriginator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionOfResolutionPathForEventDescriptor:(id)a0 senderDescriptor:(id)a1;
- (void)setDeferringRules:(id)a0 forClientWithPID:(int)a1;
- (id)destinationsForKeyCommand:(id)a0 sender:(id)a1;
- (void)setDispatchingRuleSets:(id)a0 forClientWithPID:(int)a1;
- (id)initWithObserverService:(id)a0;
- (void)setKeyCommandsRegistrations:(id)a0 forClientWithPID:(int)a1;
- (void)clientDied:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)destinationsForEvent:(struct __IOHIDEvent { } *)a0 sender:(id)a1;
- (void)setKeyCommandDispatchingRules:(id)a0 forClientWithPID:(int)a1;
- (id)destinationsStartingFromPID:(int)a0 deferringPredicate:(id)a1;

@end
