@interface SBLockScreenActionContextFactory : NSObject

+ (id)sharedInstance;

- (id)lockScreenActionContextForAction:(id)a0 fromPlugin:(id)a1;
- (id)lockScreenActionContextForAlertItem:(id)a0;
- (id)lockScreenActionContextForPlugin:(id)a0;

@end
