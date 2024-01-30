@interface SBSUIInCallSceneClientSettings : UIApplicationSceneClientSettings

@property (readonly, nonatomic) unsigned long long preferredHardwareButtonEventTypes;
@property (readonly, nonatomic) int preferredStatusBarStyleOverridesToSuppress;
@property (readonly, nonatomic) BOOL supportsDeviceLockActions;
@property (readonly, nonatomic) BOOL transientOverlayHomeIndicatorAutoHidden;
@property (readonly, nonatomic) BOOL shouldBecomeVisibleWhenWakingDisplay;
@property (readonly, nonatomic, getter=isCallConnected) BOOL callConnected;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (BOOL)homeIndicatorAutoHidden;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
