@class HRProfile, WDClinicalGatewayProxy, UINavigationController, WDClinicalAccountOnboardingSession, SFSafariViewController, HKClinicalAccount, HKClinicalProvider;
@protocol ClinicalSharingOnboardingDelegate;

@interface WDClinicalOnboardingOAuthNavigationViewController : UINavigationController <HRClinicalSharingOnboardingDelegate>

@property (readonly, nonatomic) HRProfile *profile;
@property (readonly, nonatomic) WDClinicalAccountOnboardingSession *onboardingSession;
@property (readonly, copy, nonatomic) HKClinicalAccount *onboardingAccount;
@property (weak, nonatomic) id<ClinicalSharingOnboardingDelegate> onboardingDelegate;
@property (readonly, nonatomic) SFSafariViewController *safariViewController;
@property (retain, nonatomic) HKClinicalProvider *providerToPresent;
@property (retain, nonatomic) WDClinicalGatewayProxy *gatewayProxyToTry;
@property (nonatomic) BOOL showProviderNotFound;
@property (nonatomic) BOOL onboardingSourceIsDeepLink;
@property (nonatomic) UINavigationController *onboardingTileNavigationViewController;

- (void)viewDidLoad;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)_dismissViewController;
- (id)_createInitialRootViewController;
- (void)beginListeningToNotification;
- (void)completionNotificationHandler:(id)a0;
- (void)createRootViewController;
- (void)didCompleteOnboardingFor:(id)a0;
- (void)didLoginToAccount:(id)a0;
- (void)dismissSafariViewControllerAnimatedWithCompletion:(id /* block */)a0;
- (void)dismissWithAccount:(id)a0 error:(id)a1 animated:(BOOL)a2;
- (id)initWithContext:(long long)a0 onboardingOptions:(unsigned long long)a1 profile:(id)a2 existingAccount:(id)a3;
- (id)initWithSession:(id)a0 existingAccount:(id)a1;
- (void)presentSafariViewController;
- (void)presentSafariViewController:(id)a0 withGatewayUrl:(id)a1;
- (void)stopListeningToNotification;

@end
