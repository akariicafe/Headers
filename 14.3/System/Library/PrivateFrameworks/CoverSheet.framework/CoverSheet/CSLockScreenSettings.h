@class CSDashBoardScrollModifierSettings, CSBounceSettings, CSLockScreenPearlSettings, CSLockScreenChargingSettings, CSLockScreenPasscodeSettings, CSDashBoardRemoteContentSettings, PTOutlet, CSLockScreenMesaSettings, CSCoverSheetDismissGestureSettings, CSDashBoardQuickActionsButtonSettings, CSCoverSheetTransitionsSettings, CSDashBoardNotificationVersusPagingScrollSettings, CSHorizontalScrollFailureRecognizerSettings, SBFAnimationSettings, CSLockScreenTestPluginSettings;

@interface CSLockScreenSettings : PTSettings

@property double minTouchIDDuration;
@property double idleUntilShimmerDuration;
@property double restToOpenDuration;
@property double restToOpenIdleDuration;
@property BOOL autoDismissUnlockedLockScreen;
@property BOOL showNowPlaying;
@property BOOL showUserPicture;
@property BOOL showLogoutButton;
@property BOOL showThermalTrap;
@property BOOL showBlockedUI;
@property BOOL showResetRestore;
@property BOOL showEmergencyDialer;
@property BOOL showRegionsDebugView;
@property (retain) PTOutlet *addNotificationOutlet;
@property (retain) CSBounceSettings *verticalBounceSettings;
@property (retain) CSBounceSettings *horizontalBounceSettings;
@property (retain) CSLockScreenPasscodeSettings *passcodeSettings;
@property (retain) CSLockScreenChargingSettings *chargingSettings;
@property (retain) CSLockScreenMesaSettings *mesaSettings;
@property (retain) CSLockScreenPearlSettings *pearlSettings;
@property (retain) CSCoverSheetTransitionsSettings *coverSheetTransitionsSettings;
@property (retain) CSHorizontalScrollFailureRecognizerSettings *horizontalScrollFailureRecognizerSettings;
@property (retain) CSDashBoardScrollModifierSettings *dashBoardScrollModifierSettings;
@property (retain) CSDashBoardNotificationVersusPagingScrollSettings *dashBoardNotificationScrollSettings;
@property (retain) CSDashBoardQuickActionsButtonSettings *dashBoardQuickActionButtonSettings;
@property (retain) CSDashBoardRemoteContentSettings *dashBoardRemoteContentSettings;
@property (retain) CSCoverSheetDismissGestureSettings *coverSheetDismissGestureSettings;
@property (retain) SBFAnimationSettings *unlockToPhoneWallpaperOutSettings;
@property (retain) SBFAnimationSettings *unlockToPhoneWallpaperInSettings;
@property (retain) SBFAnimationSettings *unlockWallpaperOutSettings;
@property (retain) SBFAnimationSettings *unlockWallpaperInSettings;
@property (retain) CSLockScreenTestPluginSettings *testPluginSettings;
@property double nowPlayingHeight;
@property double mainToCameraViewSlideCompletionPercentage;
@property double mainToTodayViewSlideCompletionPercentage;
@property double unlockSlideForIdleTimerDisabledPercentage;
@property double unlockSlideForIdleTimerDisabledPercentageIPad;
@property double notificationScrollForIdleTimerDisabledOffset;
@property double notificationScrollForIdleTimerDisabledOffsetIPad;
@property double appGrabberSlideUpVelocityThreshold;
@property double unlockPasscodeThreshold;
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

- (void).cxx_destruct;
- (void)setDefaultValues;

@end
