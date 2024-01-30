@class UIScene;

@interface _UISceneLifecycleMonitor : NSObject

@property (weak, nonatomic) UIScene *_scene;
@property (readonly, nonatomic) long long currentActivationState;

- (void)willResignActive;
- (void)didEnterBackground;
- (void)didDisonnect;
- (void).cxx_destruct;
- (void)willEnterBackground;
- (void)didBecomeActive;
- (id)initWithScene:(id)a0;
- (void)willDisonnect;
- (void)transitionToTargetState:(id)a0 fromState:(id)a1 withTransitionContext:(id)a2 preparations:(id /* block */)a3;
- (void)didResignActive;
- (void)willEnterForeground;
- (void)didEnterForeground;
- (void)willBecomeActive;
- (void)willConnect;
- (void)didConnect;

@end
