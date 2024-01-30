@class PKPaymentProvisioningController, UIImageView, PKPaymentProvisioningMethodMetadata, PKDigitalIssuanceServiceProviderItem, PKPaymentSetupProduct, PKDigitalIssuanceServiceProviderProduct, PKPaymentSetupCardImageHeaderView, NSString, PKServiceProviderPurchase, PKPaymentAuthorizationCoordinator, UIActivityIndicatorView, PKPaymentSetupPurchaseController, PKPaymentServiceProviderItemsListSectionController, UIImage;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupPurchaseServiceProviderProductItemsViewController : PKDynamicCollectionViewController <PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentSetupPurchaseControllerDelegate, PKPaymentServiceProviderItemsListSectionControllerDelegate, RemoteUIControllerDelegate, PKPaymentSetupDelegate, PKViewControllerPreflightable> {
    BOOL _snapshotNeedsCorners;
    unsigned char _visibility;
    PKPaymentSetupCardImageHeaderView *_headerView;
    BOOL _hasSelectedItems;
    PKDigitalIssuanceServiceProviderItem *_selectedItem;
    PKPaymentProvisioningController *_provisioningController;
    long long _setupContext;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    PKDigitalIssuanceServiceProviderProduct *_serviceProviderProduct;
    PKPaymentProvisioningMethodMetadata *_provisioningMethodMetadata;
    UIImageView *_passView;
    PKPaymentAuthorizationCoordinator *_authorizationCoordinator;
    PKServiceProviderPurchase *_purchase;
    UIImage *_cardImage;
    UIActivityIndicatorView *_activityIndicator;
    PKPaymentServiceProviderItemsListSectionController *_listSectionController;
}

@property (nonatomic) BOOL acceptedTerms;
@property (readonly, nonatomic) PKPaymentSetupProduct *product;
@property (readonly, nonatomic) PKPaymentSetupPurchaseController *purchaseController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePurchase:(id)a1 completion:(id /* block */)a2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)_rightBarButton;
- (void)_rightBarButtonPressed:(id)a0;
- (void)_showSpinner:(BOOL)a0;
- (id)_spinnerBarButton;
- (void)didSelectServiceProviderItem:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 product:(id)a3 serviceProviderProduct:(id)a4;
- (void)paymentSetupDidFinish:(id)a0;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (void)showSpinner:(BOOL)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;

@end
