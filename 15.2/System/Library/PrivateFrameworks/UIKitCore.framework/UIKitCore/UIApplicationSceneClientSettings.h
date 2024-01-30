@class FBSDisplayMode, NSString, NSDictionary, FBSDisplayConfigurationRequest, NSArray, NSData;

@interface UIApplicationSceneClientSettings : FBSSceneClientSettings <UIApplicationSceneClientSettings>

@property (readonly, nonatomic) long long statusBarStyle;
@property (readonly, nonatomic) long long statusBarModernStyle;
@property (readonly, copy, nonatomic) NSDictionary *statusBarPartStyles;
@property (readonly, nonatomic) BOOL statusBarHidden;
@property (readonly, nonatomic) double statusBarAlpha;
@property (readonly, nonatomic, getter=isStatusBarForegroundTransparent) BOOL statusBarForegroundTransparent;
@property (readonly, nonatomic) unsigned int statusBarContextID;
@property (readonly, nonatomic) long long defaultStatusBarStyle;
@property (readonly, nonatomic) BOOL defaultStatusBarHidden;
@property (readonly, nonatomic) long long userInterfaceStyle;
@property (readonly, copy, nonatomic) NSString *defaultPNGName;
@property (readonly, nonatomic) double defaultPNGExpirationTime;
@property (readonly, nonatomic) long long compatibilityMode;
@property (readonly, nonatomic) BOOL deviceOrientationEventsEnabled;
@property (readonly, nonatomic) BOOL interfaceOrientationChangesDisabled;
@property (readonly, nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) unsigned long long supportedInterfaceOrientations;
@property (readonly, nonatomic) BOOL idleTimerDisabled;
@property (readonly, nonatomic) unsigned long long proximityDetectionModes;
@property (readonly, nonatomic) double controlCenterAmbiguousActivationMargin;
@property (readonly, nonatomic) long long controlCenterRevealMode;
@property (readonly, nonatomic) long long notificationCenterRevealMode;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } primaryWindowOverlayInsets;
@property (readonly, nonatomic) long long backgroundStyle;
@property (readonly, nonatomic) BOOL idleModeVisualEffectsEnabled;
@property (readonly, nonatomic) long long whitePointAdaptivityStyle;
@property (readonly, copy, nonatomic) FBSDisplayMode *requestedDisplayMode;
@property (readonly, copy, nonatomic) FBSDisplayConfigurationRequest *displayConfigurationRequest;
@property (readonly, nonatomic, getter=isReachabilitySupported) BOOL reachabilitySupported;
@property (readonly, nonatomic) unsigned long long screenEdgesDeferringSystemGestures;
@property (readonly, nonatomic) BOOL homeIndicatorAutoHidden;
@property (readonly, nonatomic) BOOL wantsExclusiveForeground;
@property (readonly, nonatomic) unsigned long long visibleMiniAlertCount;
@property (readonly, nonatomic) NSArray *audioCategoriesDisablingVolumeHUD;
@property (readonly, nonatomic) double brightnessLevel;
@property (readonly, nonatomic) BOOL disablesMirroring;
@property (readonly, copy, nonatomic) NSString *canvasTitle;
@property (readonly, nonatomic) NSData *activationConditionsData;
@property (readonly, nonatomic) long long sceneActivationBias;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } screenFocusedFrame;
@property (readonly, nonatomic) long long preferredPointerLockStatus;
@property (readonly, nonatomic) NSArray *multitaskingDragExclusionRects;
@property (readonly, nonatomic) unsigned long long _debugValidationOrientationMask;
@property (readonly, nonatomic) long long playbackControlsState;
@property (readonly, nonatomic) BOOL discardSessionOnUserDisconnect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofSetting:(unsigned long long)a2;
- (BOOL)settings:(id)a0 appendDescriptionToBuilder:(id)a1 forFlag:(long long)a2 object:(id)a3 ofSetting:(unsigned long long)a4;
- (BOOL)isUISubclass;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (id)keyDescriptionForOtherSetting:(unsigned long long)a0;
- (id)valueDescriptionForFlag:(long long)a0 object:(id)a1 ofOtherSetting:(unsigned long long)a2;

@end
