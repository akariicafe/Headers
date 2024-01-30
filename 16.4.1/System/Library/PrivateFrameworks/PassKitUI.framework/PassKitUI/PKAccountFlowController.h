@class PKAccountCredential, PKPaymentProvisioningController, PKAccountProvisioningController, NSString, PKAccountService, PKAssertion, PKAccount;
@protocol PKPaymentSetupViewControllerDelegate, PKSetupFlowControllerProtocol, PKAccountFlowControllerDelegate;

@interface PKAccountFlowController : NSObject <PKAccountProvisioningControllerDelegate, PKFeatureDisplayableErrorProvider, PKSetupFlowControllerProtocol> {
    PKAccountProvisioningController *_accountProvisioningController;
    PKAccount *_account;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    long long _context;
    PKAccountService *_accountService;
    unsigned long long _postProvisoningContentIndex;
    unsigned long long _madeDefault;
    BOOL _endedProvisioningFlow;
    PKAssertion *_notificationSupressionAssertion;
    BOOL _isMerchantApp;
    BOOL _shownMoreInfoItems;
}

@property (readonly, nonatomic) unsigned long long operations;
@property (readonly, nonatomic) PKAccountCredential *accountCredential;
@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (readonly, nonatomic) PKAccountProvisioningController *accountProvisioningController;
@property (retain, nonatomic) id<PKSetupFlowControllerProtocol> parentFlowController;
@property (weak, nonatomic) id<PKAccountFlowControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)displayableErrorForError:(id)a0 featureIdentifier:(unsigned long long)a1 genericErrorTitle:(id)a2 genericErrorMessage:(id)a3;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)accountProvisioningController:(id)a0 displayableError:(id)a1;
- (void)accountProvisioningControllerUpdatedState:(id)a0;
- (void)_accountProvisioningControllerRequiresNextViewController:(id)a0;
- (void)_acquireAssertion;
- (void)_checkAccountProvisioningControllerState:(id)a0;
- (unsigned long long)_fitleredOperations:(unsigned long long)a0 account:(id)a1 context:(long long)a2;
- (void)_invalidateAssertion;
- (void)_nextPostProvisioningViewControllerWithCompletion:(id /* block */)a0;
- (void)_requestPresentationOfActiviationViewControllerShowingMadeDefault:(BOOL)a0;
- (void)_resetPostProvisioningContent;
- (void)endProvisioningFlow;
- (id)firstAccountViewController;
- (id)initWithAccountCredential:(id)a0 provisioningController:(id)a1 setupDelegate:(id)a2 context:(long long)a3 operations:(unsigned long long)a4;
- (void)makeAccountPassDefault:(BOOL)a0;
- (void)nextViewControllerWithCompletion:(id /* block */)a0;
- (void)performInitalOperations;

@end
