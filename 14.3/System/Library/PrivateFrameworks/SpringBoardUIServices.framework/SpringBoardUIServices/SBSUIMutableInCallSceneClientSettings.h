@interface SBSUIMutableInCallSceneClientSettings : UIMutableApplicationSceneClientSettings

@property (nonatomic) unsigned long long preferredHardwareButtonEventTypes;
@property (nonatomic) int preferredStatusBarStyleOverridesToSuppress;
@property (nonatomic) BOOL supportsDeviceLockActions;
@property (nonatomic) BOOL transientOverlayHomeIndicatorAutoHidden;
@property (nonatomic) BOOL shouldBecomeVisibleWhenWakingDisplay;
@property (nonatomic, getter=isCallConnected) BOOL callConnected;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (void)setHomeIndicatorAutoHidden:(BOOL)a0;

@end
