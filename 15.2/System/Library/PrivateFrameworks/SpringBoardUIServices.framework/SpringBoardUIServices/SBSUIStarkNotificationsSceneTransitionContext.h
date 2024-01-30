@interface SBSUIStarkNotificationsSceneTransitionContext : UIApplicationSceneTransitionContext

@property (nonatomic) BOOL dismissNotification;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;

@end
