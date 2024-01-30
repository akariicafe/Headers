@class NSString, NSMutableSet;

@interface SBLockScreenDisabledAssertionManager : NSObject <SBAutoUnlockRule> {
    NSMutableSet *_disableLockScreenIfPossibleAssertions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addLockScreenDisableAssertion:(id)a0;
- (BOOL)isLockScreenDisabledForAssertion;
- (BOOL)shouldAutoUnlockForSource:(int)a0;
- (void)removeLockScreenDisableAssertion:(id)a0;

@end
