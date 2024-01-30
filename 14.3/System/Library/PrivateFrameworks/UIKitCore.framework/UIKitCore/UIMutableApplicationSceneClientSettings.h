@class FBSDisplayMode, NSString, NSDictionary, FBSDisplayConfigurationRequest, NSArray, NSData;

@interface UIMutableApplicationSceneClientSettings : FBSMutableSceneClientSettings <UIApplicationSceneClientSettings>

@property (nonatomic) long long statusBarStyle;
@property (nonatomic) long long statusBarModernStyle;
@property (copy, nonatomic) NSDictionary *statusBarPartStyles;
@property (nonatomic) BOOL statusBarHidden;
@property (nonatomic) double statusBarAlpha;
@property (nonatomic, getter=isStatusBarForegroundTransparent) BOOL statusBarForegroundTransparent;
@property (nonatomic) unsigned int statusBarContextID;
@property (nonatomic) long long defaultStatusBarStyle;
@property (nonatomic) BOOL defaultStatusBarHidden;
@property (nonatomic) long long userInterfaceStyle;
@property (copy, nonatomic) NSString *defaultPNGName;
@property (nonatomic) double defaultPNGExpirationTime;
@property (nonatomic) long long compatibilityMode;
@property (nonatomic) BOOL deviceOrientationEventsEnabled;
@property (nonatomic) BOOL interfaceOrientationChangesDisabled;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) unsigned long long supportedInterfaceOrientations;
@property (nonatomic) BOOL idleTimerDisabled;
@property (nonatomic) unsigned long long proximityDetectionModes;
@property (nonatomic) double controlCenterAmbiguousActivationMargin;
@property (nonatomic) long long controlCenterRevealMode;
@property (nonatomic) long long notificationCenterRevealMode;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } primaryWindowOverlayInsets;
@property (nonatomic) long long backgroundStyle;
@property (nonatomic) BOOL idleModeVisualEffectsEnabled;
@property (nonatomic) long long whitePointAdaptivityStyle;
@property (copy, nonatomic) FBSDisplayMode *requestedDisplayMode;
@property (copy, nonatomic) FBSDisplayConfigurationRequest *displayConfigurationRequest;
@property (nonatomic, getter=isReachabilitySupported) BOOL reachabilitySupported;
@property (nonatomic) unsigned long long screenEdgesDeferringSystemGestures;
@property (nonatomic) BOOL homeIndicatorAutoHidden;
@property (nonatomic) BOOL wantsExclusiveForeground;
@property (nonatomic) unsigned long long visibleMiniAlertCount;
@property (retain, nonatomic) NSArray *audioCategoriesDisablingVolumeHUD;
@property (nonatomic) double brightnessLevel;
@property (nonatomic) BOOL disablesMirroring;
@property (copy, nonatomic) NSString *canvasTitle;
@property (retain, nonatomic) NSData *activationConditionsData;
@property (nonatomic) long long sceneActivationBias;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } screenFocusedFrame;
@property (nonatomic) long long preferredPointerLockStatus;
@property (retain, nonatomic) NSArray *multitaskingDragExclusionRects;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (BOOL)isUISubclass;
- (BOOL)settings:(id)a0 appendDescriptionToBuilder:(id)a1 forFlag:(long long)a2 object:(id)a3 ofSetting:(unsigned long long)a4;

@end
