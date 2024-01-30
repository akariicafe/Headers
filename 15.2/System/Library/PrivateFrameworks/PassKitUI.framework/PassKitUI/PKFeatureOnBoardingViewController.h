@class PKAccount, NSMutableArray, PKApplyController, PKPaymentInstallmentConfiguration;

@interface PKFeatureOnBoardingViewController : PKOnBoardingViewController {
    unsigned long long _featureIdentifier;
    PKApplyController *_applyController;
    BOOL _isMainFeatureOnboardingPage;
    BOOL _useCompactLayout;
    unsigned long long _layout;
    BOOL _didBeginOnboardingSubject;
    PKAccount *_defaultFeatureAccount;
    BOOL _fetchedDefaultFeatureAccount;
    long long _onboardingContext;
    NSMutableArray *_defaultFeatureAccountCompletions;
}

@property (retain, nonatomic) PKPaymentInstallmentConfiguration *installmentConfiguration;

- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_beginReportingIfNecessary;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)explanationViewDidUpdateLayout:(id)a0;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (id)initWithParentFlowController:(id)a0 setupDelegate:(id)a1 setupContext:(long long)a2 onboardingContext:(long long)a3 featureIdentifier:(unsigned long long)a4 provisioningController:(id)a5 paymentSetupProduct:(id)a6 currentPage:(id)a7;
- (void)updateForHeroImage;
- (void)_reportAnalyticsViewDidAppear:(BOOL)a0;
- (void)_endReportingIfNecessary;
- (void)_reportCancelTapped;
- (void)_defaultFeatureAccountAnalyticsWithCompletion:(id /* block */)a0;
- (void)_openSecondaryActionItem;
- (void)_openTermsAndConditions;
- (void)_reportRatesAndTermsTapped;
- (void)_reportContinueTapped;
- (void)_handleAccountCredential:(id)a0 completion:(id /* block */)a1;
- (void)_checkSecurityCapabilities:(unsigned long long)a0 nextStep:(id /* block */)a1;
- (void)_handleApplyFlowWithCompletion:(id /* block */)a0;
- (void)_defaultFeatureAccountWithCompletion:(id /* block */)a0;
- (id)_analyticsPartialEventDictionaryForButtonTapWithButtonTagKey:(id)a0;
- (void)_reportAnalyticsSubject:(id)a0 withPartialEventDictionary:(id)a1;
- (void)handleSetupLater;
- (void)handleProductAvailable;
- (id)nextOnboardingViewControllerWithPage:(id)a0 product:(id)a1;

@end
