@class PKPaymentPass, PKPeerPaymentAccount, PKPeerPaymentWebService, PKPeerPaymentAccountFeatureDescriptor, PKPeerPaymentActionController, NSDecimalNumber, NSString;
@protocol PKPeerPaymentActionViewControllerDelegate, PKPassLibraryDataProvider;

@interface PKPeerPaymentActionViewController : UIViewController <PKPeerPaymentActionControllerDelegate> {
    BOOL _viewHasAppeared;
    BOOL _dismissingViewController;
}

@property (weak, nonatomic) id<PKPeerPaymentActionViewControllerDelegate> delegate;
@property (weak, nonatomic) id<PKPassLibraryDataProvider> passLibraryDataProvider;
@property (retain, nonatomic) PKPeerPaymentAccount *account;
@property (readonly, nonatomic) PKPeerPaymentActionController *actionController;
@property (nonatomic) unsigned long long controllerAction;
@property (readonly, nonatomic) PKPeerPaymentWebService *webService;
@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) PKPeerPaymentAccountFeatureDescriptor *feature;
@property (copy, nonatomic) NSDecimalNumber *currentAmount;
@property (copy, nonatomic) NSDecimalNumber *cardBalance;
@property (copy, nonatomic) NSDecimalNumber *minBalance;
@property (copy, nonatomic) NSDecimalNumber *maxBalance;
@property (copy, nonatomic) NSDecimalNumber *minLoadAmount;
@property (copy, nonatomic) NSDecimalNumber *maxLoadAmount;
@property (nonatomic) BOOL showCancelButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)navigationBarBackgroundColor;
+ (id)peerPaymentActionViewControllerForAction:(unsigned long long)a0 paymentPass:(id)a1 webService:(id)a2 passLibraryDataProvider:(id)a3 context:(long long)a4;

- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)initWithPaymentPass:(id)a0 webService:(id)a1 passLibraryDataProvider:(id)a2 context:(long long)a3;
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)a0;
- (void)_handleApplicationDidBecomeActiveNotification:(id)a0;
- (void)updateFirstResponder;
- (void)_performedAction;
- (void)_cancelledAction;
- (void)updateAccountValues;
- (void)willDismissViewController;
- (id)_cancelBarButton;
- (void)_cancelButtonPressed:(id)a0;
- (void)peerPaymentActionController:(id)a0 hasChangedState:(unsigned long long)a1;
- (void)peerPaymentActionController:(id)a0 requestPresentViewController:(id)a1;
- (void)peerPaymentActionController:(id)a0 requestPresentViewController:(id)a1 withTransition:(int)a2;
- (BOOL)pkui_disablesAutomaticDismissalUponEnteringBackground;

@end
