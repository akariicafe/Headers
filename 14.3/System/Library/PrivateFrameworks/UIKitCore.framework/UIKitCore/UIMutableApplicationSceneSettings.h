@class NSString, NSNumber, BSCornerRadiusConfiguration;

@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings <UIApplicationSceneSettings>

@property (retain, nonatomic) NSString *persistenceIdentifier;
@property (nonatomic) BOOL underLock;
@property (nonatomic) int statusBarStyleOverridesToSuppress;
@property (nonatomic) unsigned long long deactivationReasons;
@property (nonatomic) long long userInterfaceStyle;
@property (retain, nonatomic) NSNumber *forcedStatusBarStyle;
@property (nonatomic) BOOL forcedStatusBarForegroundTransparent;
@property (nonatomic) BOOL deviceOrientationEventsEnabled;
@property (nonatomic) BOOL canShowAlerts;
@property (nonatomic) BOOL idleModeEnabled;
@property (nonatomic) BOOL statusBarDisabled;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } peripheryInsets;
@property (nonatomic) long long statusBarParts;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } statusBarAvoidanceFrame;
@property (nonatomic) double statusBarHeight;
@property (nonatomic) double systemMinimumMargin;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsetsPortrait;
@property (nonatomic) double homeAffordanceOverlayAllowance;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsetsLandscapeLeft;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsetsPortraitUpsideDown;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsetsLandscapeRight;
@property (nonatomic) long long deviceOrientation;
@property (nonatomic) unsigned long long artworkSubtype;
@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic) unsigned int hostContextIdentifierForSnapshotting;
@property (nonatomic) unsigned long long scenePresenterRenderIdentifierForSnapshotting;
@property (nonatomic) long long accessibilityContrast;
@property (nonatomic) long long pointerLockStatus;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (BOOL)isUISubclass;
- (void)setDefaultStatusBarHeight:(double)a0 forOrientation:(long long)a1;
- (double)defaultStatusBarHeightForOrientation:(long long)a0;

@end
