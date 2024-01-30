@class SBFMobileKeyBagState, NSHashTable, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SBFMobileKeyBag : NSObject {
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_observerStateChangedCallbackBlocks;
    NSHashTable *_queue_observers;
    NSMutableArray *_queue_performAfterFirstUnlockBlocks;
    BOOL _queue_hasPasscodeSet;
    BOOL _queue_hasUnlockedSinceBoot;
    struct _MKBEvent { } *_mbkEvent;
}

@property (readonly, copy, nonatomic) SBFMobileKeyBagState *state;
@property (readonly, copy, nonatomic) SBFMobileKeyBagState *extendedState;
@property (readonly, nonatomic) BOOL hasBeenUnlockedSinceBoot;
@property (readonly, nonatomic) BOOL hasPasscodeSet;
@property (readonly, nonatomic) long long maxUnlockAttempts;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_queue_verifyExpectedStashState:(long long)a0;
- (BOOL)unlockWithPasscode:(id)a0 error:(id *)a1;
- (void)removeObserver:(id)a0;
- (void)dealloc;
- (id)_queue_lockStateExtended:(BOOL)a0;
- (void)addObserver:(id)a0;
- (void)waitForUnlockWithTimeout:(float)a0;
- (void)_queue_firstUnlockOccurred;
- (void)createStashBag:(id)a0 completion:(id /* block */)a1 completionQueue:(id)a2;
- (void)performAfterFirstUnlockSinceBootUsingBlock:(id /* block */)a0;
- (void)_queue_createStashBag:(id)a0;
- (BOOL)beginRecovery:(id)a0 error:(id *)a1;
- (void)lockSkippingGracePeriod:(BOOL)a0;
- (void)_queue_handleKeybagStatusChanged;
- (void)createStashBag:(id)a0 completion:(id /* block */)a1;
- (void)_queue_setHasPasscodeIfNecessary:(id)a0;

@end
