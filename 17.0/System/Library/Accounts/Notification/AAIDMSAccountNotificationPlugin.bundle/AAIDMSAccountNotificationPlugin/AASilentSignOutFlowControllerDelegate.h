@class NSString, ACAccountStore, AIDAAccountManager;

@interface AASilentSignOutFlowControllerDelegate : NSObject <AASignOutFlowControllerDelegate> {
    id /* block */ _pendingSignOutCompletion;
    ACAccountStore *_accountStore;
}

@property (retain, nonatomic) AIDAAccountManager *accountManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)signOutFlowController:(id)a0 disableFindMyDeviceForAccount:(id)a1 completion:(id /* block */)a2;
- (void)signOutFlowController:(id)a0 performWalrusValidationForAccount:(id)a1 completion:(id /* block */)a2;
- (void)signOutFlowController:(id)a0 showAlertWithTitle:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)signOutFlowController:(id)a0 signOutAccount:(id)a1 completion:(id /* block */)a2;

@end
