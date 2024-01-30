@class NSString, NSMutableSet;

@interface SBLockScreenDisabledAssertionManager : NSObject <SBAutoUnlockRule> {
    NSMutableSet *_disableLockScreenIfPossibleAssertions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isLockScreenDisabledForAssertion;
- (void)addLockScreenDisableAssertion:(id)a0;
- (BOOL)shouldAutoUnlockForSource:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeLockScreenDisableAssertion:(id)a0;

@end
