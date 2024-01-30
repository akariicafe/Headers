@class NSString, BSCornerRadiusConfiguration, FBSDisplayConfiguration, NSNumber;

@interface UIApplicationSceneSettings : FBSSceneSettings <_UIDisplayInfoProviding, UIApplicationSceneSettings>

@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (readonly, nonatomic) unsigned long long artworkSubtype;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } peripheryInsets;
@property (readonly, nonatomic) double systemMinimumMargin;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsetsPortrait;
@property (readonly, nonatomic) double homeAffordanceOverlayAllowance;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsetsLandscapeLeft;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsetsPortraitUpsideDown;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsetsLandscapeRight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *persistenceIdentifier;
@property (readonly, nonatomic) BOOL underLock;
@property (readonly, nonatomic) int statusBarStyleOverridesToSuppress;
@property (readonly, nonatomic) unsigned long long deactivationReasons;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, nonatomic) NSNumber *forcedStatusBarStyle;
@property (readonly, nonatomic) BOOL forcedStatusBarForegroundTransparent;
@property (readonly, nonatomic) BOOL deviceOrientationEventsEnabled;
@property (readonly, nonatomic) BOOL canShowAlerts;
@property (readonly, nonatomic) BOOL idleModeEnabled;
@property (readonly, nonatomic) BOOL statusBarDisabled;
@property (readonly, nonatomic) long long statusBarParts;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } statusBarAvoidanceFrame;
@property (readonly, nonatomic) double statusBarHeight;
@property (readonly, nonatomic) long long deviceOrientation;
@property (readonly, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (readonly, nonatomic) unsigned int hostContextIdentifierForSnapshotting;
@property (readonly, nonatomic) unsigned long long scenePresenterRenderIdentifierForSnapshotting;
@property (readonly, nonatomic) long long accessibilityContrast;
@property (readonly, nonatomic) long long pointerLockStatus;

@end
