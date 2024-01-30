@class NSNumber;

@interface _UIWindowSceneFBSSceneLifecycleMonitor : _UISceneLifecycleMonitor {
    NSNumber *_transitioningState;
    BOOL _transitioning;
    BOOL _connected;
}

- (id)initWithScene:(id)a0;
- (long long)currentActivationState;
- (id)_windowScene;
- (void)didEnterBackground;
- (void)willBecomeActive;
- (void)transitionToTargetState:(id)a0 fromState:(id)a1 withTransitionContext:(id)a2 preparations:(id /* block */)a3;
- (void).cxx_destruct;

@end
