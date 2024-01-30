@class SBSecureAppManager, NSString, CSCoverSheetViewController, SBInProcessSecureAppAction;

@interface SBDashBoardApplicationLauncher : NSObject <CSExternalEventHandling, SBLockScreenApplicationLaunching, CSApplicationLaunching, CSCameraPrewarming> {
    SBInProcessSecureAppAction *_secureAppAction;
    BOOL _cameraIsPrewarming;
    BOOL _cameraPrewarmSucceeded;
}

@property (retain, nonatomic) CSCoverSheetViewController *coverSheetViewController;
@property (weak, nonatomic) SBSecureAppManager *secureAppManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, nonatomic) long long participantState;

- (BOOL)handleTransitionRequest:(id)a0;
- (BOOL)wouldHandleButtonEvent:(id)a0;
- (void)_prewarmCamera;
- (BOOL)handleEvent:(id)a0;
- (void)_reallyActivateAppSceneWithEntity:(id)a0 interactive:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)prewarmCameraHardware:(BOOL)a0 andApplication:(BOOL)a1;
- (BOOL)_canHandleTransitionRequest:(id)a0 outActivatingSceneEntity:(id *)a1;
- (void)conformsToCSEventHandling;
- (void)notePrewarmRequestWasUseful;
- (void)_activateAppSceneBelowDashBoard:(id)a0 secureAppType:(unsigned long long)a1 withActions:(id)a2 interactive:(BOOL)a3 completion:(id /* block */)a4;
- (void)launchQuickNote;
- (void)_launchQuickNote;
- (void)dealloc;
- (void)_presentApplicationSceneEntity:(id)a0 withResult:(id /* block */)a1;
- (void)_coolCameraIfNecessary;
- (void)_activateCameraAnimated:(BOOL)a0 actions:(id)a1 completion:(id /* block */)a2;
- (void)_attemptToUnlockToCameraCompletion:(id /* block */)a0;
- (BOOL)_backgroundLaunchCamera;
- (void).cxx_destruct;
- (void)notePrewarmRequestEnded;

@end
