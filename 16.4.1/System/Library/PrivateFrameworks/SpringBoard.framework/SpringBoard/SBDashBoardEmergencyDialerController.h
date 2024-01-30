@class NSString, SBDashBoardEmergencyDialerViewController, CSCoverSheetViewController;

@interface SBDashBoardEmergencyDialerController : NSObject <PTSettingsKeyObserver, CSEmergencyCalling, SBLockScreenCallHandling> {
    CSCoverSheetViewController *_coverSheetViewController;
    SBDashBoardEmergencyDialerViewController *_emergencyDialerViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)launchEmergencyDialer;
- (void)exitEmergencyDialerAnimated:(BOOL)a0;
- (id)initWithCoverSheetViewController:(id)a0;
- (void)dealloc;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)launchEmergencyDialerAnimated:(BOOL)a0;
- (void)emergencyDialerExitedWithError:(id)a0;
- (BOOL)isMakingEmergencyCall;
- (void).cxx_destruct;

@end
