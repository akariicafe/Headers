@class HKClinicalAccountStore, SFSafariViewController;

@interface WDClinicalAccountErrorManager : NSObject {
    HKClinicalAccountStore *_clinicalAccountStore;
}

@property (weak, nonatomic) SFSafariViewController *activeLoginViewController;

+ (id)sharedInstance;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_dismissReloginViewController:(id)a0;
- (void)reloginAccount:(id)a0 fromPresenter:(id)a1 profile:(id)a2 completion:(id /* block */)a3;

@end
