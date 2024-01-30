@class IMAccount;

@interface CNFRegSecureAccountWebViewController : CNFRegAuthorizedAccountWebViewController {
    BOOL _triedGettingNewCredentials;
    BOOL _gotNewCredential;
    unsigned long long _signinFailureCount;
}

@property (retain, nonatomic) IMAccount *account;

- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)_handleTimeout;
- (void)viewDidAppear:(BOOL)a0;
- (void)_setupAccountHandlers;
- (id)initWithRegController:(id)a0 account:(id)a1;
- (void)doHandoffWithStatus:(int)a0 appleID:(id)a1 authID:(id)a2 authToken:(id)a3;
- (id)authIdHeaderValue;
- (id)authTokenHeaderValue;
- (void)_showRequestPasswordAlert;
- (void)_showForgotPasswordAlert;
- (void)_showBadPasswordAlert;
- (void)_launchForgotPasswordUrl;
- (void)_resetSigninFailureCount;
- (void)_incrementSigninFailureCount;
- (void)_showRegistrationFailureWithError:(id)a0;

@end
