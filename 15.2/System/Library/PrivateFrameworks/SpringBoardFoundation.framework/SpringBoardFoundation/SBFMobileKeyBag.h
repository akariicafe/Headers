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

- (void)_queue_firstUnlockOccurred;
- (BOOL)_queue_verifyExpectedStashState:(long long)a0;
- (BOOL)beginRecovery:(id)a0 error:(id *)a1;
- (void)_queue_handleKeybagStatusChanged;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)performAfterFirstUnlockSinceBootUsingBlock:(id /* block */)a0;
- (void)waitForUnlockWithTimeout:(float)a0;
- (void)_queue_setHasPasscodeIfNecessary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_queue_createStashBag:(id)a0 skipSEKeepUserDataOperation:(BOOL)a1;
- (void)lockSkippingGracePeriod:(BOOL)a0;
- (void)createStashBagWithOptions:(id)a0 completion:(id /* block */)a1 completionQueue:(id)a2;
- (void)dealloc;
- (id)_queue_lockStateExtended:(BOOL)a0;
- (BOOL)unlockWithOptions:(id)a0 error:(id *)a1;
- (void)createStashBagWithOptions:(id)a0 completion:(id /* block */)a1;

@end
