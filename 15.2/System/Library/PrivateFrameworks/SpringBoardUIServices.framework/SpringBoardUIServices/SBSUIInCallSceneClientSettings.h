@interface SBSUIInCallSceneClientSettings : UIApplicationSceneClientSettings

@property (readonly, nonatomic) unsigned long long preferredHardwareButtonEventTypes;
@property (readonly, nonatomic) unsigned long long preferredStatusBarStyleOverridesToSuppress;
@property (readonly, nonatomic) BOOL supportsDeviceLockActions;
@property (readonly, nonatomic) BOOL transientOverlayHomeIndicatorAutoHidden;
@property (readonly, nonatomic) BOOL shouldBecomeVisibleWhenWakingDisplay;
@property (readonly, nonatomic, getter=isCallConnected) BOOL callConnected;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } expanseHUDDodgingInsets;
@property (readonly, nonatomic) BOOL prefersBannersHiddenFromClonedDisplay;
@property (readonly, nonatomic) BOOL prefersHiddenWhenDismissed;
@property (readonly, nonatomic) BOOL shouldNeverBeShownWhenLaunchingFaceTime;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (BOOL)homeIndicatorAutoHidden;

@end
