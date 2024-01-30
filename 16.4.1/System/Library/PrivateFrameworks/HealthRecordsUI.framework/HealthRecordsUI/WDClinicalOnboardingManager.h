@class HRProfile, WDClinicalGatewayProxy, WDClinicalOnboardingOAuthNavigationViewController, UINavigationController;

@interface WDClinicalOnboardingManager : NSObject

@property (weak, nonatomic) HRProfile *profile;
@property (retain, nonatomic) WDClinicalGatewayProxy *pendingOnboardingGateway;
@property (weak, nonatomic) WDClinicalOnboardingOAuthNavigationViewController *inFlightLoginViewController;
@property (weak, nonatomic) UINavigationController *inFlightClinicalSharingLoginViewController;
@property (weak, nonatomic) UINavigationController *onboardingTileNavigationController;

- (id)logPrefix;
- (id)initWithProfile:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_didDismissLoginViewController:(id)a0;
- (id)_deepLinkOnboardingViewControllerWithOptions:(unsigned long long)a0;
- (void)_dismissInFlightLoginViewControllerIfExistsWithCompletion:(id /* block */)a0;
- (void)_presentAccount:(id)a0 presentingViewController:(id)a1;
- (void)_startLoginWithLoginViewController:(id)a0 presentingViewController:(id)a1;
- (void)_startOrReplaceLoginWithLoginViewController:(id)a0 presentingViewController:(id)a1;
- (id)gatewayProxyWithActivity:(id)a0;
- (id)getPendingOnboardingGatewayAndClear;
- (void)onboardWithActivity:(id)a0 presentingViewController:(id)a1;
- (void)registerInflightOnboardingViewController:(id)a0 completion:(id /* block */)a1;

@end
