@class UIScene;

@interface _UISceneLifecycleMonitor : NSObject

@property (weak, nonatomic) UIScene *_scene;
@property (readonly, nonatomic) long long currentActivationState;

- (id)initWithScene:(id)a0;
- (void)willEnterBackground;
- (void)willResignActive;
- (void)willDisonnect;
- (void)didEnterForeground;
- (void)willEnterForeground;
- (void)didEnterBackground;
- (void)willBecomeActive;
- (void)transitionToTargetState:(id)a0 fromState:(id)a1 withTransitionContext:(id)a2 preparations:(id /* block */)a3;
- (void).cxx_destruct;
- (void)willConnect;
- (void)didDisonnect;
- (void)didResignActive;
- (void)didBecomeActive;
- (void)didConnect;

@end
