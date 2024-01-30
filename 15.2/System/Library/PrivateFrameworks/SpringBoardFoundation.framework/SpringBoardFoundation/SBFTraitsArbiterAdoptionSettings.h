@interface SBFTraitsArbiterAdoptionSettings : PTSettings

@property (nonatomic) BOOL orientationActuationEnabledForAllRoles;
@property (nonatomic) BOOL orientationActuationEnabledForAlert;
@property (nonatomic) BOOL orientationActuationEnabledForAssistant;
@property (nonatomic) BOOL orientationActuationEnabledForBanner;
@property (nonatomic) BOOL orientationActuationEnabledForBiometricMonitorUI;
@property (nonatomic) BOOL orientationActuationEnabledForCommandTab;
@property (nonatomic) BOOL orientationActuationEnabledForControlCenter;
@property (nonatomic) BOOL orientationActuationEnabledForCoverSheet;
@property (nonatomic) BOOL orientationActuationEnabledForCoverSheetHomeScreenOverlay;
@property (nonatomic) BOOL orientationActuationEnabledForFloatingDock;
@property (nonatomic) BOOL orientationActuationEnabledForFloatingKeyboard;
@property (nonatomic) BOOL orientationActuationEnabledForFullscreenOcclusionTestRecipe;
@property (nonatomic) BOOL orientationActuationEnabledForHUD;
@property (nonatomic) BOOL orientationActuationEnabledForHomeScreen;
@property (nonatomic) BOOL orientationActuationEnabledForHomeScreenDimming;
@property (nonatomic) BOOL orientationActuationEnabledForInteractiveScreenshotGesture;
@property (nonatomic) BOOL orientationActuationEnabledForLoginBootToSetupAppZoomInAnimation;
@property (nonatomic) BOOL orientationActuationEnabledForLoginWindowRecipe;
@property (nonatomic) BOOL orientationActuationEnabledForMedusaDrag;
@property (nonatomic) BOOL orientationActuationEnabledForModifierTimeline;
@property (nonatomic) BOOL orientationActuationEnabledForPictureInPicture;
@property (nonatomic) BOOL orientationActuationEnabledForReachability;
@property (nonatomic) BOOL orientationActuationEnabledForRecordingIndicator;
@property (nonatomic) BOOL orientationActuationEnabledForRenderOverlayRecipe;
@property (nonatomic) BOOL orientationActuationEnabledForScreenFlash;
@property (nonatomic) BOOL orientationActuationEnabledForSecureApp;
@property (nonatomic) BOOL orientationActuationEnabledForStartupFadeAnimation;
@property (nonatomic) BOOL orientationActuationEnabledForSwitcher;
@property (nonatomic) BOOL orientationActuationEnabledForTransientOverlay;
@property (nonatomic) BOOL orientationActuationEnabledForTransientOverlayBackground;
@property (nonatomic) BOOL orientationActuationEnabledForUnlockedDodgingLayer;
@property (nonatomic) BOOL orientationActuationEnabledForWallpaper;
@property (nonatomic) BOOL orientationActuationEnabledForWindowedAccessory;

+ (id)actuationEnablementForAllPropertyName;
+ (id)settingsControllerModule;
+ (id)actuationEnablementPropertiesNamesPrefix;

- (void)setDefaultValues;

@end
