@class FBSDisplayConfiguration, FBScene, SBExternalDisplayDefaults, SBSceneHostingDisplayController, BSAtomicSignal, BSContinuousMachTimer, NSString, SBExternalDisplayService, SBDisplayScaleMapping, FBSceneManager, SBExternalDisplayRuntimeAvailabilitySettings, SBSDisplayModeSettings, SBMousePointerManager, FBSDisplayIdentity;
@protocol BSDefaultObserver;

@interface SBSystemShellExtendedDisplayControllerPolicy : NSObject <SBExternalDisplayServiceObserver, SBMousePointerHardwareConnectionObserver, PTSettingsKeyObserver, SBSceneHostingDisplayControllerPolicy> {
    SBSceneHostingDisplayController *_displayController;
    FBSDisplayIdentity *_displayIdentity;
    SBExternalDisplayDefaults *_externalDisplayDefaults;
    id<BSDefaultObserver> _externalDisplayDefaultsToken;
    id<BSDefaultObserver> _displayModeSettingsToken;
    SBExternalDisplayService *_externalDisplayService;
    SBExternalDisplayRuntimeAvailabilitySettings *_runtimeAvailabilitySettings;
    SBMousePointerManager *_mousePointerManager;
    BOOL _metRuntimeRequirementsAtLeastOnce;
    SBSDisplayModeSettings *_displayModeSettings;
    SBDisplayScaleMapping *_displayScaleMapping;
    FBSceneManager *_fbSceneManager;
    FBScene *_currentScene;
    unsigned long long _previouslyReceivedDeactivationReasons;
    FBSDisplayConfiguration *_lastPresentationUpdateDisplayConfiguration;
    double _contentScale;
    BSContinuousMachTimer *_timerForAttachedDevicesToAffectDisplayAssertion;
    BOOL _didConnectToRequiredDevicesDuringTimerWindow;
    int _userMirroringPreference;
    BSAtomicSignal *_displayDisconnectSignal;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)externalDisplayServiceDidUpdatePreferredDisplayArrangement:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)mousePointerManager:(id)a0 hardwarePointingDeviceAttachedDidChange:(BOOL)a1;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (BOOL)_areRuntimeAvailabilityRequirementsMet;
- (long long)_currentRuntimeMask;
- (id)_fetchOrCreateSceneWithDisplayConfiguration:(id)a0 deactivationReasons:(unsigned long long)a1 sceneManager:(id)a2;
- (void)_hardwareAvailabilityChanged;
- (void)_keyboardAvailabilityChanged:(id)a0;
- (BOOL)_wantsControlOfDisplay;
- (id)assertionPreferencesForDisplay:(id)a0 displayConfiguration:(id)a1;
- (void)connectToDisplayController:(id)a0 displayConfiguration:(id)a1;
- (unsigned long long)displayAssertionDeactivationReasons:(id)a0;
- (unsigned long long)displayAssertionPriorityLevel:(id)a0;
- (void)displayController:(id)a0 didBeginTransaction:(id)a1 sceneManager:(id)a2 displayConfiguration:(id)a3 deactivationReasons:(unsigned long long)a4;
- (void)displayController:(id)a0 didGainControlOfDisplayWithSceneManager:(id)a1;
- (void)displayController:(id)a0 sceneManager:(id)a1 didLoseControlOfDisplayWithDeactivationReasons:(unsigned long long)a2;
- (void)displayController:(id)a0 sceneManager:(id)a1 didReceiveNewDeactivationReasons:(unsigned long long)a2;
- (void)displayController:(id)a0 updatePresentationWithSceneManager:(id)a1 displayConfiguration:(id)a2 completion:(id /* block */)a3;
- (void)displayControllerDidDisconnect:(id)a0 transaction:(id)a1 sceneManager:(id)a2;
- (void)displayControllerWillDisconnect:(id)a0 sceneManager:(id)a1;
- (id)displayPreferencesForDisplayController:(id)a0;
- (id)initWithExternalDisplayDefaults:(id)a0 externalDisplayService:(id)a1 mousePointerManager:(id)a2 runtimeAvailabilitySettings:(id)a3 sceneManager:(id)a4;

@end
