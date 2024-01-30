@class IMAccount;

@interface CNFRegSecureAccountWebViewController : CNFRegAuthorizedAccountWebViewController {
    BOOL _triedGettingNewCredentials;
    BOOL _gotNewCredential;
    unsigned long long _signinFailureCount;
}

@property (retain, nonatomic) IMAccount *account;

- (void)_handleTimeout;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_incrementSigninFailureCount;
- (void)_launchForgotPasswordUrl;
- (void)_resetSigninFailureCount;
- (void)_setupAccountHandlers;
- (void)_showBadPasswordAlert;
- (void)_showForgotPasswordAlert;
- (void)_showRegistrationFailureWithError:(id)a0;
- (void)_showRequestPasswordAlert;
- (id)authIdHeaderValue;
- (id)authTokenHeaderValue;
- (void)doHandoffWithStatus:(int)a0 appleID:(id)a1 authID:(id)a2 authToken:(id)a3;
- (id)initWithRegController:(id)a0 account:(id)a1;

@end
