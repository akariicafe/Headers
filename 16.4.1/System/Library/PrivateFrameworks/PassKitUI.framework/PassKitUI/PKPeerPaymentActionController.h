@class PKPaymentPass, NSString, PKPeerPaymentWebService, PKPeerPaymentAccount, PKBankAccountInformation, PKPeerPaymentTermsController, PKPeerPaymentController;
@protocol PKPassLibraryDataProvider, PKPeerPaymentActionControllerDelegate;

@interface PKPeerPaymentActionController : NSObject <PKPaymentSetupViewControllerDelegate, PKAddBankAccountInformationViewControllerDelegate, PKExplanationViewControllerDelegate, PKPeerPaymentControllerDelegate> {
    PKPaymentPass *_pass;
    PKPeerPaymentWebService *_peerPaymentWebService;
    PKPeerPaymentAccount *_account;
    long long _context;
    PKPeerPaymentTermsController *_termsController;
    id<PKPassLibraryDataProvider> _passLibraryDataProvider;
    PKPeerPaymentController *_peerPaymentController;
    BOOL _performingAction;
}

@property (nonatomic) unsigned long long controllerAction;
@property (readonly, weak, nonatomic) id<PKPeerPaymentActionControllerDelegate> delegate;
@property (readonly, nonatomic) PKBankAccountInformation *bankInformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)alertControllerForPeerPaymentActionUnableReason:(unsigned long long)a0 displayableError:(id)a1 addCardActionHandler:(id /* block */)a2;
+ (BOOL)canPerformPeerPaymentAction:(unsigned long long)a0 account:(id)a1 unableReason:(unsigned long long *)a2 displayableError:(id *)a3;
+ (id)displayableErrorForPeerPaymentAction:(unsigned long long)a0 andReason:(unsigned long long)a1;

- (void)_handleError:(id)a0;
- (void).cxx_destruct;
- (id)presentationSceneIdentifierForPeerPaymentController:(id)a0;
- (void)_handlePeerPaymentAccountDidChangeNotification:(id)a0;
- (void)_peerPaymentActionHasCompletedWithState:(unsigned long long)a0;
- (unsigned long long)_peerPaymentControllerModeForAction;
- (void)_presentIdentityVerificationWithError:(id)a0;
- (void)_presentTermsAndConditionsWithError:(id)a0;
- (void)_updateAccountWithCompletion:(id /* block */)a0;
- (void)bankAccountInformationViewControllerChangedBankAccountInformation:(id)a0;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (id)initWithPaymentPass:(id)a0 webService:(id)a1 context:(long long)a2 passLibraryDataProvider:(id)a3 delegate:(id)a4;
- (void)performActionWithCurrencyAmount:(id)a0;
- (void)presentAddBankAccountViewController;
- (void)presentAddDebitCardViewController;
- (void)viewControllerDidCancelSetupFlow:(id)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;

@end
