@class NSString, SBLockScreenEmergencyCallViewController;
@protocol SBLockScreenEmergencyDialerDelegate;

@interface SBLockScreenEmergencyDialerController : NSObject <SBLockScreenEmergencyCallViewControllerDelegate>

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) SBLockScreenEmergencyCallViewController *viewController;
@property (weak, nonatomic) id<SBLockScreenEmergencyDialerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deactivate;
- (void)activateWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dismissEmergencyCallViewController:(id)a0;
- (void)emergencyCallViewController:(id)a0 didExitWithError:(id)a1;

@end
