@class AAUIGenericTermsRemoteUI, NSString, CDPContext, NSSet, ACAccountStore, UIViewController;

@interface AAUISignInFlowControllerDelegate : NSObject <AAUIGenericTermsRemoteUIDelegate, AAUISignInOperationDelegate, AASignInFlowControllerDelegate> {
    id /* block */ _pendingEnableDataclassesCompletion;
    id /* block */ _pendingTermsCompletion;
    AAUIGenericTermsRemoteUI *_genericTermsRemoteUI;
    ACAccountStore *_accountStore;
}

@property (weak, nonatomic) UIViewController *presentingViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CDPContext *cdpContext;
@property (nonatomic) BOOL skipCDPEnablement;
@property (nonatomic) BOOL backgroundDataclassEnablement;
@property (nonatomic) BOOL skipDataclassEnablement;
@property (copy, nonatomic) NSSet *requiredTerms;
@property (nonatomic) BOOL shouldStashLoginResponse;
@property (nonatomic) unsigned long long findMyActivationAction;

- (id)init;
- (void).cxx_destruct;
- (void)signInFlowController:(id)a0 saveAccount:(id)a1 withAllDataclassesEnabledIfPossibleWithCompletion:(id /* block */)a2;
- (void)signInFlowController:(id)a0 showAlertWithTitle:(id)a1 message:(id)a2 completion:(id /* block */)a3;
- (void)signInFlowController:(id)a0 presentGenericTermsUIForAccount:(id)a1 completion:(id /* block */)a2;
- (void)signInFlowController:(id)a0 enableFindMyWithAction:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)initWithPresentingViewController:(id)a0;
- (void)genericTermsRemoteUI:(id)a0 didFinishWithSuccess:(BOOL)a1;
- (void)_hasActivationLockSupportedWatchWithCompletion:(id /* block */)a0;
- (void)signInOperationManager:(id)a0 didSaveAccount:(id)a1 error:(id)a2;

@end
