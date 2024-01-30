@class HRProfile, WDClinicalGatewayProxy, SFSafariViewController, HKClinicalProvider;

@interface WDClinicalOnboardingOAuthNavigationViewController : UINavigationController

@property (readonly, nonatomic) HRProfile *profile;
@property (readonly, nonatomic) SFSafariViewController *safariViewController;
@property (retain, nonatomic) HKClinicalProvider *providerToPresent;
@property (retain, nonatomic) WDClinicalGatewayProxy *gatewayProxyToTry;
@property (nonatomic) BOOL showProviderNotFound;
@property (nonatomic) BOOL onboardingSourceIsDeepLink;

+ (id)clinicalOnboardingOauthViewControllerWithProfile:(id)a0;

- (id)initWithProfile:(id)a0;
- (id)init;
- (void)presentSafariViewController:(id)a0 withGatewayUrl:(id)a1;
- (void).cxx_destruct;
- (id)_onboardingViewController;
- (void)viewDidAppear:(BOOL)a0;
- (void)dismissViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)createRootViewController;
- (void)beginListeningToNotification;
- (void)presentSafariViewController;
- (void)completionNotificationHandler:(id)a0;
- (void)showClinicalAccountEducationViewControllerWithAccount:(id)a0;
- (void)viewDidLoad;

@end
