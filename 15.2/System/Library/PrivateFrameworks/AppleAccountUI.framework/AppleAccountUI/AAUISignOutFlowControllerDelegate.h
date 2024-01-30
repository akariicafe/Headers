@class NSString, UIViewController, ACAccountStore;

@interface AAUISignOutFlowControllerDelegate : NSObject <AAUISignOutControllerDelegate, AASignOutFlowControllerDelegate> {
    id /* block */ _pendingSignOutCompletion;
    ACAccountStore *_accountStore;
}

@property (weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)signOutFlowController:(id)a0 showAlertWithTitle:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)signOutFlowController:(id)a0 disableFindMyDeviceForAccount:(id)a1 completion:(id /* block */)a2;
- (void)signOutFlowController:(id)a0 signOutAccount:(id)a1 completion:(id /* block */)a2;
- (id)initWithPresentingViewController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_disableDeviceLocatorForAccount:(id)a0 inViewController:(id)a1 completion:(id /* block */)a2;
- (void)_completedRestoreFromiCloud:(id /* block */)a0;
- (void)signOutController:(id)a0 didCompleteWithSuccess:(BOOL)a1 error:(id)a2;
- (void)signOutControllerDidCancel:(id)a0;

@end
