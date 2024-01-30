@class HRProfile, WDClinicalGatewayProxy, UINavigationController, WDClinicalAccountOnboardingSession, SFSafariViewController, HKClinicalAccount, HKClinicalProvider;
@protocol AccountSharingOnboardingDelegate;

@interface WDClinicalOnboardingOAuthNavigationViewController : UINavigationController <HRClinicalSharingOnboardingDelegate>

@property (readonly, nonatomic) HRProfile *profile;
@property (readonly, nonatomic) WDClinicalAccountOnboardingSession *onboardingSession;
@property (readonly, copy, nonatomic) HKClinicalAccount *onboardingAccount;
@property (weak, nonatomic) id<AccountSharingOnboardingDelegate> onboardingDelegate;
@property (readonly, nonatomic) SFSafariViewController *safariViewController;
@property (retain, nonatomic) HKClinicalProvider *providerToPresent;
@property (retain, nonatomic) WDClinicalGatewayProxy *gatewayProxyToTry;
@property (nonatomic) BOOL showProviderNotFound;
@property (nonatomic) BOOL onboardingSourceIsDeepLink;
@property (nonatomic) UINavigationController *onboardingTileNavigationViewController;

- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (void)_dismissViewController;
- (void)viewDidAppear:(BOOL)a0;
- (void)presentSafariViewController:(id)a0 withGatewayUrl:(id)a1;
- (id)initWithContext:(long long)a0 onboardingOptions:(unsigned long long)a1 profile:(id)a2 existingAccount:(id)a3;
- (id)initWithSession:(id)a0 existingAccount:(id)a1;
- (void)createRootViewController;
- (void)beginListeningToNotification;
- (void)stopListeningToNotification;
- (void)completionNotificationHandler:(id)a0;
- (void)dismissSafariViewControllerAnimatedWithCompletion:(id /* block */)a0;
- (void)didLoginToAccount:(id)a0;
- (id)_createInitialRootViewController;
- (void)dismissWithAccount:(id)a0 error:(id)a1 animated:(BOOL)a2;
- (void)presentSafariViewController;
- (void)didCompleteOnboardingFor:(id)a0;

@end
