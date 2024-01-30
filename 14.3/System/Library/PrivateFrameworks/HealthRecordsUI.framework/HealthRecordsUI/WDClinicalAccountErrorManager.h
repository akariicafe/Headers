@class SFSafariViewController;

@interface WDClinicalAccountErrorManager : NSObject

@property (weak, nonatomic) SFSafariViewController *activeLoginViewController;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handleSingleAccountNeedsRelogin:(id)a0 fromPresenter:(id)a1 profile:(id)a2;
- (void)_handleMultipleAccountsNeedReloginFromPresenter:(id)a0;
- (void)_dismissReloginViewController:(id)a0;
- (void)reloginAccount:(id)a0 fromPresenter:(id)a1 profile:(id)a2 completion:(id /* block */)a3;
- (void)presentErrorsIfNecessaryForAccounts:(id)a0 fromPresenter:(id)a1 profile:(id)a2;

@end
