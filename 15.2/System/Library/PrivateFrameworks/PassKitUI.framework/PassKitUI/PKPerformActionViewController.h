@class UIView, NSString, PKPaymentPassAction, PKPaymentWebService, PKServiceProviderPurchase, PKPerformActionPassView, PKPerformActionLoadingView, PKPaymentPass, UIBarButtonItem;
@protocol PKPaymentDataProvider, PKPerformActionView, PKPerformActionViewControllerDelegate;

@interface PKPerformActionViewController : UIViewController <PKPerformActionViewDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate> {
    PKPerformActionPassView *_passView;
    PKPerformActionLoadingView *_loadingView;
    id<PKPaymentDataProvider> _paymentDataProvider;
    BOOL _remoteContentFetched;
    BOOL _fieldsVerified;
    PKServiceProviderPurchase *_completedPurchase;
    UIBarButtonItem *_button;
    UIBarButtonItem *_spinner;
}

@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) PKPaymentPassAction *action;
@property (readonly, nonatomic) UIView<PKPerformActionView> *actionView;
@property (retain, nonatomic) PKPaymentWebService *webService;
@property (weak, nonatomic) id<PKPerformActionViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alertControllerForUnableReason:(unsigned long long)a0 action:(id)a1 displayableError:(id)a2 addCardActionHandler:(id /* block */)a3;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePurchase:(id)a1 completion:(id /* block */)a2;
- (void)updateFirstResponder;
- (void)_cancelButtonPressed:(id)a0;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;
- (void)_showSpinner:(BOOL)a0;
- (void)_rightBarButtonPressed:(id)a0;
- (void)shakeCard;
- (void)_reloadActionView;
- (id)initWithPass:(id)a0 action:(id)a1 paymentDataProvider:(id)a2;
- (void)setRightBarButtonEnabled:(BOOL)a0;
- (id)initWithPass:(id)a0 action:(id)a1;
- (void)_fetchRemoteContentIfNeeded;
- (BOOL)shouldHidePassView;
- (void)updatePassViewVisibility;
- (void)_showLoadingView:(BOOL)a0;
- (void)_showGenericErrorAlert:(id /* block */)a0;
- (id)_actionViewForPass:(id)a0 action:(id)a1;
- (BOOL)_shouldPresentPaymentRequest:(long long)a0;
- (void)_canPerformPaymentWithCompletion:(id /* block */)a0;
- (void)_presentPaymentSetupControllerWithAllowedPaymentNetworks:(id)a0;

@end
