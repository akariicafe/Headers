@class NSString;

@interface SBSUIInCallSceneTransitionContext : UIApplicationSceneTransitionContext

@property (copy, nonatomic) NSString *analyticsSource;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;

@end
