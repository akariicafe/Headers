@class SBLockScreenManager, SBFUserAuthenticationController;

@interface SBStartupTransitionToLockOut : SBBaseStartupTransition {
    SBFUserAuthenticationController *_authController;
}

@property (readonly, nonatomic) SBLockScreenManager *lockScreenManager;

- (void).cxx_destruct;
- (void)performTransitionWithCompletionBlock:(id /* block */)a0;
- (id)initWithDestination:(unsigned long long)a0 context:(id)a1;
- (id)suggestedLockAnimationForTransitionRequest:(id)a0;

@end
