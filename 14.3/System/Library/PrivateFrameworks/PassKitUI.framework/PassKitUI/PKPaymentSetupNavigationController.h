@class NSString, PKPaymentProvisioningController;
@protocol PKPaymentSetupDelegate;

@interface PKPaymentSetupNavigationController : PKNavigationController <PKPaymentSetupViewControllerDelegate, PKViewControllerPreflightable> {
    long long _context;
    BOOL _rootViewControllerNeedsConfiguration;
}

@property (readonly, retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (weak, nonatomic) id<PKPaymentSetupDelegate> setupDelegate;
@property (nonatomic) BOOL showsWelcomeViewController;
@property (nonatomic) BOOL allowsManualEntry;
@property (nonatomic) long long paymentSetupMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerForPresentingPaymentError:(id)a0;

- (void)cancel:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)viewController:(id)a0 didShowProvisioningError:(id)a1;
- (void)loadView;
- (void)viewControllerDidShowEligibilityIssue:(id)a0;
- (void)viewController:(id)a0 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)a1 completion:(id /* block */)a2;
- (void)viewController:(id)a0 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)a1 withShouldContinue:(BOOL)a2 error:(id)a3;
- (void)viewController:(id)a0 requestPasscodeUpgradeWithCompletion:(id /* block */)a1;
- (void)viewController:(id)a0 didExitPasscodeUpgradeWithShouldContinue:(BOOL)a1 error:(id)a2;
- (BOOL)shouldAutorotate;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (void)viewControllerDidCancelSetupFlow:(id)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (long long)_preferredModalPresentationStyle;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)_reconfigureRootViewController;
- (void)_dirtyConfigurationAndReloadIfNeeded;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1;
- (void)setCustomFormSheetPresentationStyleForiPad;
- (void)viewDidLoad;

@end
