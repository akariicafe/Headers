@interface POKeyBag : NSObject {
    int _notifyToken;
}

@property (copy) id /* block */ unlockCompletion;
@property (copy) id /* block */ startupCompletion;
@property BOOL firstUnlock;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)isUserKeybagUnlocked;
- (void)startObservingKeyBagLockStatusChanges;
- (void)stopObservingKeyBagLockStatusChanges;
- (void)waitForKeyBagFirstUnlockOnStartupWithCompletion:(id /* block */)a0;
- (void)waitForKeyBagFirstUnlockWithCompletion:(id /* block */)a0;

@end
