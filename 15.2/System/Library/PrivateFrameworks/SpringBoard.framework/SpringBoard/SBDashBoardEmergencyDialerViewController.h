@class NSString, TUCallCenter, SBLockScreenEmergencyDialerController;

@interface SBDashBoardEmergencyDialerViewController : SBHomeGestureDismissableCoverSheetViewController <SBLockScreenEmergencyDialerDelegate> {
    TUCallCenter *_callCenter;
    SBLockScreenEmergencyDialerController *_controller;
    BOOL _inEmergencyCall;
    BOOL _inEmergencyCallMode;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)presentationPriority;
- (BOOL)handleEvent:(id)a0;
- (long long)presentationType;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)dealloc;
- (void)aggregateBehavior:(id)a0;
- (void)aggregateAppearance:(id)a0;
- (void)_deactivateEmergencyDialerController;
- (void)_activateEmergencyDialerController;
- (void)_updateEmergencyCallMode:(id)a0;
- (void)emergencyDialer:(id)a0 willDeactivateWithError:(id)a1;

@end
