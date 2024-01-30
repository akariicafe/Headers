@interface ADLockScreenManager : NSObject

+ (id)sharedManager;

- (BOOL)isDeviceLocked;
- (void)requestPassCodeUnlockUIWithBlock:(id /* block */)a0;

@end
