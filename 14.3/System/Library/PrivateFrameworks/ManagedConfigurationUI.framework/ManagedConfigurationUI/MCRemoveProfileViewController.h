@class NSString, UITextField, MCProfile;

@interface MCRemoveProfileViewController : MCInstallProfileViewController <MCProfileViewControllerDelegate, DevicePINControllerDelegate>

@property (retain, nonatomic) MCProfile *updatingProfile;
@property (retain, nonatomic) UITextField *passwordField;
@property (nonatomic) BOOL profileWantsToReEnroll;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)didAcceptEnteredPIN:(id)a0;
- (void)didCancelEnteringPIN;
- (BOOL)profileViewControllerIsProfileInstalled;
- (void)profileViewControllerDidSelectRemoveProfile:(id)a0;
- (void)profileViewControllerDidSelectUpdateProfile:(id)a0;
- (void)setInstallState:(int)a0 animated:(BOOL)a1;
- (void)updateTitleForProfileInstallationState:(int)a0;
- (void)updateBarButtonItemsForProfileInstallationState:(int)a0 animated:(BOOL)a1;
- (void)profileRemovalDidFinish;
- (void)_didFinishEnteringPINWithCompletion:(id /* block */)a0;
- (void)_showRemovalWarningAfterPINVerification;
- (void)_performReEnroll;
- (void)_performReEnrollAfterPINVerification;
- (void)_showLeaveRemoteManagementAlert;
- (void)_showRemovalWarningAlert;
- (void)_showRemovalWarningActionSheet;
- (void)_showEraseDeviceAlert;
- (void)_leaveRemoteManagementAndErase;
- (void)_resetWithMode:(int)a0;
- (id)_mdmProfileRemovalAlertBody;
- (void)_showWrongRemovalPasswordAlert;

@end
