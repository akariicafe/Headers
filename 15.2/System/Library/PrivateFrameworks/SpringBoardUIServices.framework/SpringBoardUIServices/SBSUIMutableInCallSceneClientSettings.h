@interface SBSUIMutableInCallSceneClientSettings : UIMutableApplicationSceneClientSettings

@property (nonatomic) unsigned long long preferredHardwareButtonEventTypes;
@property (nonatomic) unsigned long long preferredStatusBarStyleOverridesToSuppress;
@property (nonatomic) BOOL supportsDeviceLockActions;
@property (nonatomic) BOOL transientOverlayHomeIndicatorAutoHidden;
@property (nonatomic) BOOL shouldBecomeVisibleWhenWakingDisplay;
@property (nonatomic, getter=isCallConnected) BOOL callConnected;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } expanseHUDDodgingInsets;
@property (nonatomic) BOOL prefersBannersHiddenFromClonedDisplay;
@property (nonatomic) BOOL prefersHiddenWhenDismissed;
@property (nonatomic) BOOL shouldNeverBeShownWhenLaunchingFaceTime;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setHomeIndicatorAutoHidden:(BOOL)a0;

@end
