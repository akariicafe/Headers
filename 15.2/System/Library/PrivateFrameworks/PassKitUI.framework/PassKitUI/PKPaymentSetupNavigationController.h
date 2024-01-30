@class NSString, PKPaymentProvisioningController, PKPaymentSetupFlowController;
@protocol PKPaymentSetupDelegate;

@interface PKPaymentSetupNavigationController : PKNavigationController <PKPaymentSetupViewControllerDelegate, PKViewControllerPreflightable> {
    long long _context;
    BOOL _rootViewControllerNeedsConfiguration;
    PKPaymentSetupFlowController *_flowController;
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

- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)cancel:(id)a0;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)loadView;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (long long)_preferredModalPresentationStyle;
- (BOOL)shouldAutorotate;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (void)viewControllerDidCancelSetupFlow:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1;
- (void)setCustomFormSheetPresentationStyleForiPad;
- (void)viewController:(id)a0 didShowProvisioningError:(id)a1;
- (void)viewControllerDidShowEligibilityIssue:(id)a0;
- (void)viewController:(id)a0 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)a1 completion:(id /* block */)a2;
- (void)viewController:(id)a0 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)a1 withShouldContinue:(BOOL)a2 error:(id)a3;
- (void)viewController:(id)a0 requestPasscodeUpgradeWithCompletion:(id /* block */)a1;
- (void)viewController:(id)a0 didExitPasscodeUpgradeWithShouldContinue:(BOOL)a1 error:(id)a2;
- (BOOL)viewController:(id)a0 requestsReturnToMarker:(id)a1 reset:(BOOL)a2;
- (void)_reconfigureRootViewController;
- (void)_dirtyConfigurationAndReloadIfNeeded;

@end
