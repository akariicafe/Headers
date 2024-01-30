@class PKPaymentProvisioningController, PKPeerPaymentCredential, PKDeviceSharingCapabilitiesManager, PKPeerPaymentTermsController, PKPeerPaymentWebService, PKPeerPaymentAccount, UIViewController, PKPeerPaymentService, NSString, PKPaymentPass, PKSecurityCapabilitiesController, PKPaymentWebService, PKPeerPaymentConfirmNameViewController, UIImage;
@protocol PKPeerPaymentSetupFlowControllerConfiguration, PKPassLibraryDataProvider, PKPeerPaymentSetupFlowControllerDataSource;

@interface PKPeerPaymentSetupFlowController : NSObject <PKPaymentSelectPassesViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPeerPaymentConfirmNameViewControllerDelegate> {
    PKPaymentPass *_peerPaymentPass;
    PKPeerPaymentTermsController *_termsController;
    PKSecurityCapabilitiesController *_securityCapabiltiesController;
    BOOL _hasPresentedDeviceToDeviceEncryptionFlow;
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
    PKPeerPaymentConfirmNameViewController *_confirmNameViewControllerBeingPresented;
    unsigned long long _operations;
    unsigned long long _completedOperations;
    id /* block */ _nextViewControllerCompletion;
}

@property (retain, nonatomic) UIViewController<PKPeerPaymentSetupFlowControllerDataSource> *parentViewController;
@property (readonly, nonatomic) long long context;
@property (readonly, nonatomic) id<PKPeerPaymentSetupFlowControllerConfiguration> configuration;
@property (readonly, nonatomic) PKPeerPaymentCredential *peerPaymentCredential;
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (readonly, nonatomic) PKPeerPaymentWebService *peerPaymentWebService;
@property (readonly, nonatomic) PKPaymentWebService *paymentWebService;
@property (readonly, nonatomic) PKPeerPaymentService *peerPaymentService;
@property (readonly, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (readonly, nonatomic) PKDeviceSharingCapabilitiesManager *deviceCapabiltiesManager;
@property (readonly, nonatomic) UIImage *passSnapShot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setOperations:(unsigned long long)a0;
- (id)_paymentWebService;
- (void).cxx_destruct;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (void)viewControllerDidCancelSetupFlow:(id)a0;
- (void)nextViewControllerAfterPerfomingOperations:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)passesIncludingPeerPaymentPass:(BOOL)a0;
- (id)_peerPaymentWebService;
- (id)initWithPeerPaymentCredential:(id)a0 provisioningController:(id)a1 passLibraryDataProvider:(id)a2 configuration:(id)a3 context:(long long)a4;
- (id)firstPeerPaymentAccountSetupViewController;
- (void)selectPassesViewControllerDidTapBackButton:(id)a0;
- (void)selectPassesViewController:(id)a0 didSelectPasses:(id)a1 completion:(id /* block */)a2;
- (void)_handlePeerPaymentAccountDidChangeNotification;
- (void)confirmNameViewController:(id)a0 enteredFirstName:(id)a1 lastName:(id)a2;
- (void)confirmNameViewControllerCancelled:(id)a0;
- (void)_fetchAppleCashCapabilitiesIfNecessary;
- (void)_fitlerOperations:(unsigned long long)a0 peerPaymentAccount:(id)a1 context:(long long)a2;
- (void)_nextViewControllerWithCompletion:(id /* block */)a0;
- (BOOL)_willDisplayErrorForOperationOperationInContext:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_termsOperationWithTermsResponse:(id)a0 completion:(id /* block */)a1;
- (void)_completedOperation:(unsigned long long)a0;
- (void)_presentManateeCapableOperationWithCompletion:(id /* block */)a0;
- (void)_checkManateeCapabilityWithCompletion:(id /* block */)a0;
- (void)_presentEnsurePassCountWithCompletion:(id /* block */)a0;
- (void)_handleDisplayableError:(id)a0 completion:(id /* block */)a1;
- (void)_presentMissingTLKsFlowWithCompletion:(id /* block */)a0;
- (void)_checkMissingTLKsWithCompletion:(id /* block */)a0;
- (void)_setupCloudStoreWithCompletion:(id /* block */)a0;
- (void)_checkCloudStoreSetupWithCompletion:(id /* block */)a0;
- (void)_provisionPassWithCompletion:(id /* block */)a0;
- (void)_presentIdentityVerificationFlowWithError:(id)a0 completion:(id /* block */)a1;
- (void)_addAssociatedAccountWithCompletion:(id /* block */)a0;
- (void)_presentNameConfirmationViewControllerWithError:(id)a0 completion:(id /* block */)a1;
- (void)_presentTermWithTermsResponse:(id)a0 completion:(id /* block */)a1;
- (unsigned long long)_cipState;
- (BOOL)_hasTooManyPasses;
- (BOOL)_peerPaymentPassIsProvisioned;

@end
