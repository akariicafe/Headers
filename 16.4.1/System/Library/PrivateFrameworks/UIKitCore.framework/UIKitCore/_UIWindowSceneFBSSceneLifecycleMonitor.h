@class NSNumber;

@interface _UIWindowSceneFBSSceneLifecycleMonitor : _UISceneLifecycleMonitor {
    NSNumber *_transitioningState;
    BOOL _transitioning;
    BOOL _connected;
}

- (void)willBecomeActive;
- (id)_windowScene;
- (id)initWithScene:(id)a0;
- (void)didEnterBackground;
- (void)transitionToTargetState:(id)a0 fromState:(id)a1 withTransitionContext:(id)a2 preparations:(id /* block */)a3;
- (void).cxx_destruct;
- (long long)currentActivationState;

@end
