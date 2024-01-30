@class NSData, SBFMutableMobileKeyBagState, NSObject;
@protocol OS_dispatch_queue;

@interface SBFShamMobileKeyBag : NSObject {
    float _timeScaleFactor;
    NSObject<OS_dispatch_queue> *_queue;
    NSData *_queue_correctPasscode;
    SBFMutableMobileKeyBagState *_queue_state;
    unsigned long long _queue_escrowState;
    float _queue_escrowCountTotal;
    float _queue_escrowCountDelta;
    NSData *_queue_trialPasscode;
}

+ (id)shamKeyBagWithRecoveryRequired:(BOOL)a0 correctPasscode:(id)a1;
+ (id)shamKeyBagWithRecoveryRequired:(BOOL)a0 recoveryPossible:(BOOL)a1 timeScaleFactor:(float)a2 correctPasscode:(id)a3;

- (void)lock;
- (void).cxx_destruct;
- (void)waitForUnlockWithTimeout:(float)a0;
- (id)extendedState;
- (void)createStashBag:(id)a0 completion:(id /* block */)a1 completionQueue:(id)a2;
- (BOOL)beginRecovery:(id)a0 error:(id *)a1;
- (id)state;
- (void)createStashBag:(id)a0 completion:(id /* block */)a1;
- (id)initWithRecoveryRequired:(BOOL)a0 correctPasscode:(id)a1;
- (id)initWithRecoveryRequired:(BOOL)a0 recoveryPossible:(BOOL)a1 timeScaleFactor:(float)a2 correctPasscode:(id)a3;
- (void)_queue_initializeSecretChangeMachine:(id)a0;
- (long long)_simplifiedLockStateForLockState:(long long)a0;
- (void)_queue_stepSecretChangeMachine;

@end
