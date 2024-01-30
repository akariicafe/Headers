@class UIWindow, NSString, AXUIClient, AXDispatchTimer, AXAccessQueueTimer, AXAssetsService;

@interface AXSpringBoardSettingsLoader : NSObject <AXSBVoiceOverSwipeDetectorDelegate, AVSpeechSynthesizerDelegate, AXUIClientDelegate> {
    UIWindow *_voiceOverVibrateWindow;
    AXAccessQueueTimer *_voiceOverActivationCanceler;
    AXDispatchTimer *_managedConfigurationNotificationCoalesceTimer;
    AXUIClient *_soundDetectionClient;
    AXAssetsService *_assetsService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)_gracefulRebootForBrokenHomeButton;
+ (void)_registerForNotifications;
+ (void)_checkAccessibilityOptionsSetByiTunes;
+ (void)_checkMonoAudioSetByiTunes;
+ (void)bootstrapGuidedAccessIfNeeded;
+ (void)_checkSpeakAutofillSetByiTunes;
+ (void)_checkForDataResetFile;
+ (void)_updateSpringBoardHelper;
+ (void)_registerForHomeButtonBreakageNotification;
+ (void)checkAccessibilityOptions;
+ (void)_initializeDelayedSpringBoardSettings;
+ (void)_checkInvertColorsSetByiTunes;
+ (void)checkScreenContrast;
+ (void)_startAssistiveTouchForBrokenHomeButton;
+ (void)_checkAssistiveTouchSetByiTunes;
+ (void)_checkZoomTouchSetByiTunes;
+ (void)_checkClosedCaptioningSetByiTunes;
+ (BOOL)_alreadyRebootedGracefullyOnce;
+ (void)_findNoteFromLoginSessionWithCompletion:(id /* block */)a0;
+ (void)_registerForHomeButtonBreakage;
+ (void)_checkVoiceOverTouchSetByiTunes;
+ (void)_setRebootedGracefullyOnce;
+ (void)_setVoiceOverTouchSettings:(unsigned char)a0;
+ (void)_checkContrastSetting;
+ (void)_checkForHomeButtonBreakage:(BOOL)a0;
+ (void)_performValidations;
+ (void)_updateAXSettings;

- (void)_reachabilityChanged:(id)a0;
- (void)swipeDetectorCanceled;
- (id)init;
- (void).cxx_destruct;
- (void)_playVOActivationSoundEnded;
- (void)dealloc;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (BOOL)_shouldArmSoundDetection;
- (void)_ensureUltronAppVisibility:(BOOL)a0;
- (void)_remoteAccessibilitySettingsChanged:(id)a0;
- (void)_playVOActivationSoundStarted;
- (void)_bootstrapSoundDetection;
- (void)_updateRemoteAccessibilitySettings;
- (void)_makeVoiceOverVibrateWindow;
- (void)_handleGuidedAccessManagedConfigurationDidChange:(id)a0;
- (void)_showVibrationVoiceOverEnablerView;
- (void)_initializeRemoteSettingsListener;
- (void)_turnOnHearingControlCenterModule;
- (void)_voiceOverEnabled:(id)a0;
- (void)_startupSoundDetectionUIServer;
- (void)_hideVoiceOverEnabler;
- (void)_showSwipeDetectionEnablerView;
- (void)_registerReachability;
- (void)_updateAXSettings;
- (BOOL)_isDeviceAffectedByVOActivationWorkaround;
- (void)swipeDetectorDetectedSwipe;

@end
