@protocol SBWindowSceneStatusBarAssertion;

@interface SBLockToAppStatusBarAnimator : NSObject {
    id<SBWindowSceneStatusBarAssertion> _disableStatusBarAlphaChangeAssertion;
}

- (void).cxx_destruct;
- (void)animateStatusBarFromLockToHome;

@end
