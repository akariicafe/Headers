@class BSTimer, SBApplicationController, BKSHIDEventDeliveryManager, SBCameraHardwareButtonSettings, RBSProcessMonitor, NSMutableIndexSet, CMPocketStateManager, SBCoverSheetPresentationManager, SBBacklightController, BSMutableIntegerMap, NSString, SBCameraHardwareButtonDefaults, SBHIDButtonStateArbiter, SBProximitySensorManager, SBLockScreenManager, SBLiftToWakeStudyLogger, _SBCameraLaunchCondition, SBSceneManager, SBBacklightStudyLogger, SBCameraHardwareButtonStudyLogger;
@protocol BSInvalidatable;

@interface SBCameraHardwareButton : NSObject <SBHIDButtonStateDelegate, PTSettingsKeyObserver, SBSceneManagerObserver> {
    BOOL _shouldUsePocketStateDetection;
    int _lastCameraApplicationPID;
    id<BSInvalidatable> _dispatchingRuleAssertion;
    id<BSInvalidatable> _deferringRuleAssertion;
    NSMutableIndexSet *_allCameraShutterButtonPIDs;
    NSMutableIndexSet *_foregroundCameraShutterButtonPIDs;
    NSMutableIndexSet *_foregroundPendingRemovalCameraShutterButtonPIDs;
    BSMutableIntegerMap *_deferringTokensPerPID;
    SBHIDButtonStateArbiter *_buttonArbiter;
    RBSProcessMonitor *_processMonitor;
    CMPocketStateManager *_pocketStateManager;
    _SBCameraLaunchCondition *_shouldLaunchCameraCondition;
    _SBCameraLaunchCondition *_longPressCondition;
    _SBCameraLaunchCondition *_outOfPocketCondition;
    BSTimer *_longPressCancellationTimer;
    double _longPressCancellationTimeout;
    BKSHIDEventDeliveryManager *_deliveryManager;
    SBApplicationController *_applicationController;
    SBLockScreenManager *_lockScreenManager;
    SBCoverSheetPresentationManager *_coverSheetPresentationManager;
    SBBacklightController *_backlightController;
    SBProximitySensorManager *_proximitySensorManager;
    SBSceneManager *_mainDisplaySceneManager;
    SBCameraHardwareButtonSettings *_settings;
    SBCameraHardwareButtonDefaults *_defaults;
    SBBacklightStudyLogger *_backlightStudyLogger;
    SBCameraHardwareButtonStudyLogger *_studyLogger;
    SBLiftToWakeStudyLogger *_liftToWakeStudyLogger;
}

@property (nonatomic) BOOL disableDeferringToApplications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isCoverSheetCameraVisible;
- (void)_launchToCoverSheetCameraAfterWakingScreen:(BOOL)a0;
- (void)_launchCameraIfReady;
- (void)_deferCameraPressesToApplication:(id)a0;
- (id)init;
- (void)_stopWaitingForLongPressCancellation;
- (void).cxx_destruct;
- (void)_longPressDidCancel;
- (void)_updateSettingsForReason:(id)a0;
- (void)dealloc;
- (BOOL)_shouldDeferToCoverSheetCamera;
- (void)_deferCameraPressesToCameraApplication;
- (void)sceneManager:(id)a0 didRemoveExternalForegroundApplicationSceneHandle:(id)a1;
- (void)_process:(id)a0 stateDidUpdate:(id)a1;
- (void)_deferCameraPressesToSpringBoard;
- (void)_deferCameraPressesToPID:(int)a0;
- (void)performActionsForButtonLongPress:(id)a0;
- (void)removeProcessRequestingCameraButton:(int)a0;
- (void)performActionsForButtonUp:(id)a0;
- (void)handleButtonEvent:(struct __IOHIDEvent { } *)a0;
- (BOOL)_shouldDeferToNonSpringBoardProcess;
- (void)_reconfigureProcessMonitor;
- (void)_reconfigureProcessMonitorForPredicates:(id)a0;
- (void)_notifyCoreAnalyticsCameraDidLaunchToLockScreen:(BOOL)a0 screenWasOff:(BOOL)a1;
- (void)_startWaitingForLongPressCancellation;
- (void)_launchToUnlockedCameraAfterWakingScreen:(BOOL)a0;
- (void)sceneManager:(id)a0 didAddExternalForegroundApplicationSceneHandle:(id)a1;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)performActionsForButtonDown:(id)a0;
- (void)_updateCameraDeferringRule;
- (void)addProcessRequestingCameraButton:(int)a0 token:(id)a1;

@end
