@class UIScene;

@interface _UISceneLifecycleMonitor : NSObject

@property (weak, nonatomic) UIScene *_scene;
@property (readonly, nonatomic) long long currentActivationState;

- (void)willEnterForeground;
- (void)willBecomeActive;
- (void)didBecomeActive;
- (void)willResignActive;
- (id)initWithScene:(id)a0;
- (void)didEnterBackground;
- (void)transitionToTargetState:(id)a0 fromState:(id)a1 withTransitionContext:(id)a2 preparations:(id /* block */)a3;
- (void)didResignActive;
- (void)didEnterForeground;
- (void)didConnect;
- (void)willDisonnect;
- (void)willConnect;
- (void)willEnterBackground;
- (void)didDisonnect;
- (void).cxx_destruct;

@end
