@class PKPaymentProvisioningController, UIImageView, UILabel, PKPaymentProvisioningMethodMetadata, NSDecimalNumber, PKPaymentSetupProduct, PKPaymentSetupPurchaseAmountView, RemoteUIController, PKPaymentAuthorizationCoordinator, NSLayoutConstraint, PKServiceProviderPurchase, NSString, UIActivityIndicatorView, PKPaymentSetupPurchaseController, UIImage;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupPurchaseViewController : UIViewController <PKPaymentSetupPurchaseAmountViewDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentSetupViewControllerDelegate, RemoteUIControllerDelegate, PKPaymentSetupDelegate, PKViewControllerPreflightable> {
    BOOL _snapshotNeedsCorners;
    unsigned char _visibility;
}

@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (nonatomic) long long setupContext;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (retain, nonatomic) PKPaymentProvisioningMethodMetadata *provisioningMethodMetadata;
@property (retain, nonatomic) UIImageView *passView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) PKPaymentSetupPurchaseAmountView *amountView;
@property (retain, nonatomic) NSLayoutConstraint *amountViewBottomHeightConstraint;
@property (copy, nonatomic) NSDecimalNumber *currentAmount;
@property (retain, nonatomic) PKPaymentAuthorizationCoordinator *authorizationCoordinator;
@property (retain, nonatomic) PKServiceProviderPurchase *purchase;
@property (nonatomic) BOOL fieldsVerified;
@property (retain, nonatomic) RemoteUIController *termsController;
@property (nonatomic) BOOL acceptedTerms;
@property (retain, nonatomic) UIImage *cardImage;
@property (retain, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (readonly, nonatomic) PKPaymentSetupProduct *product;
@property (readonly, nonatomic) PKPaymentSetupPurchaseController *purchaseController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePurchase:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)_rightBarButton;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_createSubviews;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 product:(id)a3;
- (void)_updateBottomHeightConstraint;
- (BOOL)_isCompactHeight;
- (BOOL)_readerModeIsSupported;
- (BOOL)_shouldHideImage;
- (struct CGSize { double x0; double x1; })_imageSizeShowingTransferButton:(BOOL)a0;
- (void)_rightBarButtonPressed:(id)a0;
- (id)_spinnerBarButton;
- (id)_paymentRequestForAmount:(id)a0;
- (void)_presetPaymentRequest:(id)a0 forResultType:(long long)a1;
- (void)_presentAddCardAlert:(id)a0;
- (void)_presentTermsAndConditionsWithCompletion:(id /* block */)a0;
- (void)shakeCard;
- (void)didUpdateAmount:(id)a0 isValid:(BOOL)a1;
- (void)transferBalanceFromExistingCard;
- (void)paymentSetupPurchaseAmountViewDidLayoutKeyboard:(id)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (void)_createConstraints;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)_showSpinner:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (void)paymentSetupDidFinish:(id)a0;
- (void)viewDidLoad;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)a0;

@end
