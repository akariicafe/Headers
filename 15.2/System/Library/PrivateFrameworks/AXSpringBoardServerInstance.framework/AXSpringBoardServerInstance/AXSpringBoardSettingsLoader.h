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
+ (void)_registerForNotifications;
+ (void)_checkInvertColorsSetByiTunes;
+ (void)_checkForDataResetFile;
+ (void)checkAccessibilityOptions;
+ (void)_gracefulRebootForBrokenHomeButton;
+ (void)_checkClosedCaptioningSetByiTunes;
+ (void)_registerForHomeButtonBreakage;
+ (void)_checkContrastSetting;
+ (void)_updateAXSettings;
+ (void)_startAssistiveTouchForBrokenHomeButton;
+ (void)_updateSpringBoardHelper;
+ (void)_setVoiceOverTouchSettings:(unsigned char)a0;
+ (void)_performValidations;
+ (void)bootstrapGuidedAccessIfNeeded;
+ (void)_checkMonoAudioSetByiTunes;
+ (void)_checkSpeakAutofillSetByiTunes;
+ (void)_findNoteFromLoginSessionWithCompletion:(id /* block */)a0;
+ (void)_checkAccessibilityOptionsSetByiTunes;
+ (void)checkScreenContrast;
+ (BOOL)_alreadyRebootedGracefullyOnce;
+ (void)_checkVoiceOverTouchSetByiTunes;
+ (void)_checkForHomeButtonBreakage:(BOOL)a0;
+ (void)_checkZoomTouchSetByiTunes;
+ (void)_checkAssistiveTouchSetByiTunes;
+ (void)_initializeDelayedSpringBoardSettings;
+ (void)_setRebootedGracefullyOnce;
+ (void)_registerForHomeButtonBreakageNotification;

- (void)_reachabilityChanged:(id)a0;
- (void)swipeDetectorDetectedSwipe;
- (void)_playVOActivationSoundEnded;
- (void)_hideVoiceOverEnabler;
- (void)_updateAXSettings;
- (BOOL)_shouldArmSoundRecognition;
- (void)_handleGuidedAccessManagedConfigurationDidChange:(id)a0;
- (void)_playVOActivationSoundStarted;
- (void).cxx_destruct;
- (void)_turnOnHearingControlCenterModule;
- (BOOL)_isDeviceAffectedByVOActivationWorkaround;
- (void)_initializeRemoteSettingsListener;
- (void)_registerReachability;
- (id)init;
- (void)_showVibrationVoiceOverEnablerView;
- (void)_ensureUltronAppVisibility:(BOOL)a0;
- (void)_makeVoiceOverVibrateWindow;
- (BOOL)_shouldArmVoiceTriggers;
- (void)_showSwipeDetectionEnablerView;
- (void)_voiceOverEnabled:(id)a0;
- (void)dealloc;
- (void)_bootstrapSoundDetection;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (void)_remoteAccessibilitySettingsChanged:(id)a0;
- (void)swipeDetectorCanceled;
- (void)_updateRemoteAccessibilitySettings;
- (void)_startupSoundDetectionUIServer;

@end
