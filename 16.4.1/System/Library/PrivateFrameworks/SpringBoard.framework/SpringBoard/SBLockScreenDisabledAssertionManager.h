@class NSString, NSMutableSet;

@interface SBLockScreenDisabledAssertionManager : NSObject <SBAutoUnlockRule> {
    NSMutableSet *_disableLockScreenIfPossibleAssertions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeLockScreenDisableAssertion:(id)a0;
- (BOOL)shouldAutoUnlockForSource:(int)a0;
- (BOOL)isLockScreenDisabledForAssertion;
- (void)addLockScreenDisableAssertion:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
