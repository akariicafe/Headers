@class NSCountedSet, BSServiceConnection;

@interface SBSLockScreenServiceConnection : NSObject {
    BSServiceConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSCountedSet *_lock_preventPasscodeLockReasons;
    NSCountedSet *_lock_preventSpuriousScreenUndimReasons;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)launchEmergencyDialerWithCompletion:(id /* block */)a0;
- (void)requestPasscodeUnlockUIWithOptions:(id)a0 withCompletion:(id /* block */)a1;
- (id)preventPasscodeLockWithReason:(id)a0;
- (id)preventSpuriousScreenUndimWithReason:(id)a0;

@end
