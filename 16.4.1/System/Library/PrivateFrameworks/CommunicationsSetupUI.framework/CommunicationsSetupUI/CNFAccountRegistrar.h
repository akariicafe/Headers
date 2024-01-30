@class NSTimer, IMAccount, UIViewController;

@interface CNFAccountRegistrar : NSObject

@property (copy) id /* block */ completionBlock;
@property (retain) IMAccount *account;
@property (retain) NSTimer *registrationTimer;
@property long long serviceType;
@property (retain) UIViewController *presentationViewController;

- (void)dealloc;
- (void)_startTimer;
- (void)_stopTimer;
- (void).cxx_destruct;
- (void)continueRegistrationForAccount:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithServiceType:(long long)a0 presentationViewController:(id)a1;
- (void)registerAccountWithUsername:(id)a0 password:(id)a1 service:(id)a2 completionBlock:(id /* block */)a3;
- (void)_accountRegistrationStatusChanged:(id)a0;
- (void)_configureAliasesForAccount:(id)a0;
- (void)_continueRegisteringAuthenticatedAccount:(id)a0;
- (void)_registrationTimerFired:(id)a0;

@end
