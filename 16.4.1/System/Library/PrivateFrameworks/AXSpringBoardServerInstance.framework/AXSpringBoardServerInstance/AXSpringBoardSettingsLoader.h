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
+ (void)_startAssistiveTouchForBrokenHomeButton;
+ (void)_findNoteFromLoginSessionWithCompletion:(id /* block */)a0;
+ (void)_registerForNotifications;
+ (void)_updateAXSettings;
+ (void)_checkMonoAudioSetByiTunes;
+ (void)checkAccessibilityOptions;
+ (void)bootstrapGuidedAccessIfNeeded;
+ (void)_checkForDataResetFile;
+ (void)checkScreenContrast;
+ (void)_checkContrastSetting;
+ (void)_checkForHomeButtonBreakage:(BOOL)a0;
+ (void)_processStartupSoundEnabled;
+ (void)_checkInvertColorsSetByiTunes;
+ (void)_updateSpringBoardHelper;
+ (void)_checkClosedCaptioningSetByiTunes;
+ (void)_gracefulRebootForBrokenHomeButton;
+ (void)_setVoiceOverTouchSettings:(unsigned char)a0;
+ (void)_setRebootedGracefullyOnce;
+ (void)_registerForHomeButtonBreakageNotification;
+ (void)_initializeDelayedSpringBoardSettings;
+ (void)_performValidations;
+ (void)_checkSpeakAutofillSetByiTunes;
+ (BOOL)_alreadyRebootedGracefullyOnce;
+ (void)_registerForHomeButtonBreakage;
+ (void)_checkZoomTouchSetByiTunes;
+ (void)_checkAccessibilityOptionsSetByiTunes;
+ (void)_handleLiveListenEventIsListening:(BOOL)a0 audioLevel:(double)a1;
+ (void)_checkAssistiveTouchSetByiTunes;
+ (void)_checkVoiceOverTouchSetByiTunes;

- (void)_reachabilityChanged:(id)a0;
- (BOOL)_shouldArmVoiceTriggers;
- (void)_initializeRemoteSettingsListener;
- (void)swipeDetectorCanceled;
- (void)swipeDetectorDetectedSwipe;
- (void)_registerReachability;
- (void)_turnOnHearingControlCenterModule;
- (void)_updateAXSettings;
- (void)_updateRemoteAccessibilitySettings;
- (void)_handleGuidedAccessManagedConfigurationDidChange:(id)a0;
- (void)_remoteAccessibilitySettingsChanged:(id)a0;
- (void)_playVOActivationSoundEnded;
- (void)_playVOActivationSoundStarted;
- (void)_voiceOverEnabled:(id)a0;
- (void)dealloc;
- (void)_hideVoiceOverEnabler;
- (void)_startupSoundDetectionUIServer;
- (void)_showSwipeDetectionEnablerView;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (void)_showVibrationVoiceOverEnablerView;
- (void)_bootstrapSoundDetection;
- (id)init;
- (void)_makeVoiceOverVibrateWindow;
- (BOOL)_isDeviceAffectedByVOActivationWorkaround;
- (void)_ensureUltronAppVisibility:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)_shouldArmSoundRecognition;

@end
