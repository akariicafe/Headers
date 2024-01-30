@class PKPaymentProvisioningController, PKPeerPaymentCredential, PKPeerPaymentTermsController, PKPeerPaymentWebService, PKPeerPaymentAccount, UIViewController, PKPeerPaymentService, NSString, PKPaymentPass, NSHashTable, PKAppleCashSharingRecipientCapabilitiesFetchStatus, PKSecurityCapabilitiesController, PKPaymentWebService, PKPeerPaymentConfirmNameViewController, UIImage;
@protocol PKPeerPaymentSetupFlowControllerConfiguration, PKPassLibraryDataProvider, PKPeerPaymentSetupFlowControllerDataSource;

@interface PKPeerPaymentSetupFlowController : NSObject <PKPaymentSelectPassesViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPeerPaymentServiceObserver, PKPeerPaymentConfirmNameViewControllerDelegate> {
    PKPaymentPass *_peerPaymentPass;
    PKPeerPaymentTermsController *_termsController;
    PKSecurityCapabilitiesController *_securityCapabiltiesController;
    BOOL _hasPresentedDeviceToDeviceEncryptionFlow;
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
    PKPeerPaymentConfirmNameViewController *_confirmNameViewControllerBeingPresented;
    PKAppleCashSharingRecipientCapabilitiesFetchStatus *_familyMemberCapabilitiesFetchStatus;
    unsigned long long _operations;
    unsigned long long _completedOperations;
    id /* block */ _nextViewControllerCompletion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegatesLock;
    NSHashTable *_delegates;
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
@property (readonly, nonatomic) UIImage *passSnapShot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (id)delegates;
- (void)nextViewControllerAfterPerfomingOperations:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)passesIncludingPeerPaymentPass:(BOOL)a0;
- (void).cxx_destruct;
- (id)_peerPaymentWebService;
- (void)confirmNameViewController:(id)a0 enteredFirstName:(id)a1 lastName:(id)a2;
- (id)firstPeerPaymentAccountSetupViewController;
- (void)confirmNameViewControllerCancelled:(id)a0;
- (void)setOperations:(unsigned long long)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (void)viewControllerDidCancelSetupFlow:(id)a0;
- (void)didReceiveAppleCashSharingRecipientCapabilities:(id)a0 forHandle:(id)a1;
- (id)_paymentWebService;
- (void)_fetchAppleCashCapabilitiesIfNecessary;
- (void)_fitlerOperations:(unsigned long long)a0 peerPaymentAccount:(id)a1 context:(long long)a2;
- (void)_nextViewControllerWithCompletion:(id /* block */)a0;
- (BOOL)_willDisplayErrorForOperationOperationInContext:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)_completedOperation:(unsigned long long)a0;
- (unsigned long long)_cipState;
- (void)_handlePeerPaymentAccountDidChangeNotification;
- (id)familyMemberCashCapabilitiesStatus;
- (void)_termsOperationWithTermsResponse:(id)a0 completion:(id /* block */)a1;
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
- (BOOL)_hasTooManyPasses;
- (BOOL)_peerPaymentPassIsProvisioned;
- (id)initWithPeerPaymentCredential:(id)a0 provisioningController:(id)a1 passLibraryDataProvider:(id)a2 configuration:(id)a3 context:(long long)a4;
- (void)selectPassesViewControllerDidTapBackButton:(id)a0;
- (void)selectPassesViewController:(id)a0 didSelectPasses:(id)a1 completion:(id /* block */)a2;

@end
