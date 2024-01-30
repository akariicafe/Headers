@class CSDashBoardScrollModifierSettings, CSBounceSettings, CSLockScreenPearlSettings, CSLockScreenChargingSettings, CSLockScreenTestPluginSettings, CSLockScreenPasscodeSettings, PTOutlet, CSLockScreenMesaSettings, CSDashBoardRemoteContentSettings, CSCoverSheetDismissGestureSettings, CSFocusSettings, CSDashBoardQuickActionsButtonSettings, CSCoverSheetTransitionsSettings, CSDashBoardNotificationVersusPagingScrollSettings, CSHorizontalScrollFailureRecognizerSettings, CSVibrancySettings, CSLookSettings, CSLockScreenIdleTimerSettings, SBFAnimationSettings;

@interface CSLockScreenSettings : PTSettings

@property BOOL showRawErrorCodes;
@property BOOL autoDismissUnlockedLockScreen;
@property BOOL showNowPlaying;
@property BOOL showUserPicture;
@property BOOL showLogoutButton;
@property BOOL showThermalTrap;
@property BOOL showBlockedUI;
@property BOOL showResetRestore;
@property BOOL showEmergencyDialer;
@property BOOL showRegionsDebugView;
@property BOOL alwaysEnableUserRequestedErase;
@property (retain) PTOutlet *addNotificationOutlet;
@property (retain) CSBounceSettings *verticalBounceSettings;
@property (retain) CSBounceSettings *horizontalBounceSettings;
@property (retain) CSLockScreenPasscodeSettings *passcodeSettings;
@property (retain) CSLockScreenChargingSettings *chargingSettings;
@property (retain) CSFocusSettings *focusSettings;
@property (retain) CSLockScreenMesaSettings *mesaSettings;
@property (retain) CSLockScreenPearlSettings *pearlSettings;
@property (retain) CSLookSettings *lookSettings;
@property (retain) CSCoverSheetTransitionsSettings *coverSheetTransitionsSettings;
@property (retain) CSHorizontalScrollFailureRecognizerSettings *horizontalScrollFailureRecognizerSettings;
@property (retain) CSDashBoardScrollModifierSettings *dashBoardScrollModifierSettings;
@property (retain) CSDashBoardNotificationVersusPagingScrollSettings *dashBoardNotificationScrollSettings;
@property (retain) CSDashBoardQuickActionsButtonSettings *dashBoardQuickActionButtonSettings;
@property (retain) CSDashBoardRemoteContentSettings *dashBoardRemoteContentSettings;
@property (retain) CSCoverSheetDismissGestureSettings *coverSheetDismissGestureSettings;
@property (retain) CSLockScreenIdleTimerSettings *idleTimerSettings;
@property (retain) CSVibrancySettings *vibrancySettings;
@property (retain) SBFAnimationSettings *unlockToPhoneWallpaperOutSettings;
@property (retain) SBFAnimationSettings *unlockToPhoneWallpaperInSettings;
@property (retain) SBFAnimationSettings *unlockWallpaperOutSettings;
@property (retain) SBFAnimationSettings *unlockWallpaperInSettings;
@property (retain) CSLockScreenTestPluginSettings *testPluginSettings;
@property double nowPlayingHeightCompact;
@property double nowPlayingHeightExpanded;
@property double mainToCameraViewSlideCompletionPercentage;
@property double mainToTodayViewSlideCompletionPercentage;
@property double appGrabberSlideUpVelocityThreshold;
@property double unlockPasscodeThreshold;
@property double unlockPasscodeThresholdForExternalDisplay;
@property double unlockRubberBandThreshold;
@property double unlockRubberBandFeedbackInterval;
@property long long unlockRubberBandFeedbackIntensity;
@property double lockJiggleHapticDelay;
@property double lockJiggleAnimationDelay;
@property double unlockSwipeWallpaperAlpha;
@property BOOL alwaysPutPluginsBelowScrollView;
@property BOOL killsInsecureDrawingApps;
@property BOOL prewarmsCameraHardwareOnSwipe;
@property BOOL prewarmsCameraHardwareOnTap;
@property BOOL prelaunchesCameraAppOnSwipe;
@property BOOL prelaunchesCameraAppOnTap;
@property double cameraPrewarmThresholdOnSwipe;
@property double cameraPrelaunchThresholdOnSwipe;
@property double cameraPrewarmDebounceTimeInterval;
@property double cameraPrewarmAutoCancelTimeInterval;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void).cxx_destruct;

@end
