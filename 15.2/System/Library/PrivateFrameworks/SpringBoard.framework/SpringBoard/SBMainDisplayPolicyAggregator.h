@class SBTelephonyManager, SBApplicationController, SBLocalDefaults, SBAssistantController, SBLockStateAggregator, SBRemoteTransientOverlaySessionManager, SBCommandTabController, SBAlertItemsController, SBConferenceManager, MCProfileConnection, SBLockScreenManager, SBSetupManager, SBBannerManager, SBMainWorkspace;

@interface SBMainDisplayPolicyAggregator : SBPolicyAggregator {
    struct __CFBoolean { } *_hasCameraCapability;
    SBLocalDefaults *_defaults;
    BOOL _storeDemoAppLockEnabled;
}

@property (retain, nonatomic, getter=_profileConnection, setter=_setProfileConnection:) MCProfileConnection *profileConnection;
@property (retain, nonatomic, getter=_setupManager, setter=_setSetupManager:) SBSetupManager *setupManager;
@property (retain, nonatomic, getter=_alertItemsController, setter=_setAlertItemsController:) SBAlertItemsController *alertItemsController;
@property (retain, nonatomic, getter=_applicationController, setter=_setApplicationController:) SBApplicationController *applicationController;
@property (retain, nonatomic, getter=_assistantController, setter=_setAssistantController:) SBAssistantController *assistantController;
@property (retain, nonatomic, getter=_commandTabController, setter=_setCommandTabController:) SBCommandTabController *commandTabController;
@property (retain, nonatomic, getter=_conferenceManager, setter=_setConferenceManager:) SBConferenceManager *conferenceManager;
@property (retain, nonatomic, getter=_remoteTransientOverlaySessionManager, setter=_setRemoteTransientOverlaySessionManager:) SBRemoteTransientOverlaySessionManager *remoteTransientOverlaySessionManager;
@property (retain, nonatomic, getter=_lockScreenManager, setter=_setLockScreenManager:) SBLockScreenManager *lockScreenManager;
@property (retain, nonatomic, getter=_lockStateAggregator, setter=_setLockStateAggregator:) SBLockStateAggregator *lockStateAggregator;
@property (retain, nonatomic, getter=_telephonyManager, setter=_setTelephonyManager:) SBTelephonyManager *telephonyManager;
@property (retain, nonatomic, getter=_mainWorkspace, setter=_setMainWorkspace:) SBMainWorkspace *mainWorkspace;
@property (retain, nonatomic, getter=_bannerManager, setter=_setBannerManager:) SBBannerManager *bannerManager;

- (BOOL)allowsCapability:(long long)a0;
- (BOOL)allowsTransitionRequest:(id)a0;
- (BOOL)_allowsCapabilityLogoutWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilityAssistantWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilityUnlockToPluginSpecifiedApplicationWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilitySendMediaCommandWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilityLockScreenBulletinWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilityTodayViewWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilityScreenshotWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilityCoverSheetSpotlightWithExplanation:(id *)a0;
- (BOOL)_allowsNotificationOrControlCenterWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilityLockScreenNotificationCenterWithExplanation:(id *)a0;
- (BOOL)_hasFullySetUpUserWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilityLockScreenControlCenterWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilitySpotlightWithExplanation:(id *)a0;
- (id)_initWithDefaults:(id)a0;
- (BOOL)_allowsCapabilitySuggestedApplicationWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilityLockScreenCameraWithExplanation:(id *)a0;
- (void).cxx_destruct;
- (void)reloadDemoDefaults;
- (BOOL)_allowsCapabilityControlCenterWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilityHomeScreenEditingWithExplanation:(id *)a0;
- (id)init;
- (BOOL)_dictationInfoOnScreen;
- (BOOL)_allowsCapabilityAssistantEnabledWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilityDismissCoverSheetWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilityLockScreenCameraSupportedWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilityQuickNoteWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilityLiftToWakeWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilitySystemGestureWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilityLockScreenTodayViewWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilityVoiceControlWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilityLoginWindowWithExplanation:(id *)a0;
- (BOOL)allowsCapability:(long long)a0 explanation:(id *)a1;
- (BOOL)_allowsCapabilityCommandTabWithExplanation:(id *)a0;
- (BOOL)_allowsCapabilityCoverSheetWithExplanation:(id *)a0;

@end
