@class NSNumber;

@interface _UIWindowSceneFBSSceneLifecycleMonitor : _UISceneLifecycleMonitor {
    NSNumber *_transitioningState;
    BOOL _transitioning;
    BOOL _connected;
}

- (void)didEnterBackground;
- (id)_windowScene;
- (void).cxx_destruct;
- (id)initWithScene:(id)a0;
- (void)transitionToTargetState:(id)a0 fromState:(id)a1 withTransitionContext:(id)a2 preparations:(id /* block */)a3;
- (void)willBecomeActive;
- (long long)currentActivationState;

@end
