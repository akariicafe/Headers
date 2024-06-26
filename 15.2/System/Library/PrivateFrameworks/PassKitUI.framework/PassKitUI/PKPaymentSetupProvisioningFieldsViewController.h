@class NSTimer, NSString, PKPaymentProvisioningController, PKPasscodeUpgradeFlowController, CLInUseAssertion, UINotificationFeedbackGenerator, RemoteUIController, PKPaymentSetupFooterView, PKPaymentProvisioningTracker, PKPaymentVerificationController;

@interface PKPaymentSetupProvisioningFieldsViewController : PKPaymentSetupFieldsViewController <UITextFieldDelegate, RemoteUIControllerDelegate, PKPaymentVerificationControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol> {
    PKPaymentSetupFooterView *_cardDetailsFooterView;
    RemoteUIController *_termsUIController;
    CLInUseAssertion *_CLInUse;
    BOOL _termsPresented;
    UINotificationFeedbackGenerator *_cardAddedFeedbackGenerator;
    PKPaymentVerificationController *_verificationController;
    BOOL _waitForActivation;
    id /* block */ _waitForActivationCompletionHandler;
    NSTimer *_waitForActivationTimer;
    NSString *_activatingPaymentPassUniqueID;
    PKPaymentProvisioningTracker *_provisioningTracker;
    PKPasscodeUpgradeFlowController *_passcodeUpgradeFlowController;
}

@property (retain, nonatomic) PKPaymentProvisioningController *paymentProvisioningController;
@property (nonatomic) BOOL hideSetupLaterButton;
@property (copy, nonatomic) id /* block */ continueActionHandler;
@property (readonly, nonatomic, getter=isProvisioningHomeKey) BOOL provisioningHomeKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (id)footerView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)declineTerms;
- (void)requestProvisioning:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_passLibraryDidChange:(id)a0;
- (void)dealloc;
- (void)acceptTerms;
- (void)requestEligibility:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)requestRequirements:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_showAddToWatchOfferForPass:(id)a0;
- (id)initWithWebService:(id)a0 context:(long long)a1 setupDelegate:(id)a2 setupFieldsModel:(id)a3;
- (id)defaultHeaderViewTitle;
- (id)defaultHeaderViewSubTitle;
- (void)handleNextButtonTapped:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2;
- (void)suppressFooterViewManualEntryButton;
- (void)suppressFooterViewSkipCardButton;
- (void)setNotificationTextInFooterView:(id)a0;
- (void)suppressFooterViewSetupLaterButton;
- (void)updateFieldsModelWithPaymentCredential:(id)a0;
- (void)performPasscodeUpgradeIfNeeded:(BOOL)a0 completion:(id /* block */)a1;
- (id)newPaymentRequirementsRequest;
- (id)newPaymentEligibilityRequest;
- (id)newPaymentProvisioningRequest;
- (void)resetAllFieldsAndProvisioningState;
- (void)_performEligibilityWithCompletion:(id /* block */)a0;
- (void)_performTermsWithCompletion:(id /* block */)a0;
- (void)_performProvisionWithCompletion:(id /* block */)a0;
- (void)_performFinishWithCompletion:(id /* block */)a0;
- (void)updateFieldsModelWithRequirementsResponse:(id)a0;
- (void)showEligibilityIssueWithReason:(long long)a0 learnMoreURL:(id)a1 completion:(id /* block */)a2;
- (void)displayTermsForEligibility:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)showProvisioningError:(id)a0 completion:(id /* block */)a1;
- (void)handlePassSuccessfullyAdded:(id)a0 completionHandler:(id /* block */)a1;
- (void)addDifferentCard:(id)a0;
- (void)performNextActionForProvisioningState:(long long)a0 withCompletion:(id /* block */)a1;
- (id)defaultFields;
- (void)presentVerificationViewController:(id)a0 animated:(BOOL)a1;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 setupFieldsModel:(id)a3;
- (void)displayTermsForTermsURL:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)resetProvisioningState;
- (void)resetRightBarButtonState;
- (void)handleNextActionError:(id)a0 shouldContinue:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)handleNextActionWithCompletion:(id /* block */)a0;
- (void)_provisioningLocalizedProgressDescriptionDidChange:(id)a0;
- (void)_provisioningStateDidChange:(id)a0;
- (id)_cardDetailsFooterView;
- (void)setupLater:(id)a0;
- (void)_logNormalizedLevenshteinDistanceFromString:(id)a0 toField:(id)a1 forKey:(id)a2 onQueue:(id)a3;
- (void)_waitForActivation:(id)a0;
- (void)_waitForActivationDidTimeout:(id)a0;
- (void)_cleanupWaitForActivation;
- (void)_didActivatePaymentPass:(id)a0;
- (void)_requestWaitForActivation:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)_handlePassSuccessfullyAdded:(id)a0;
- (void)_showVerifiedUIForPass:(id)a0;
- (BOOL)_shouldShowAutomaticSelectionForPass:(id)a0;
- (BOOL)_shouldShowVerificationMethodsForPass:(id)a0;
- (void)_showAutomaticSelectionForPass:(id)a0;
- (void)_showVerificationMethodsForPass:(id)a0;
- (void)_handleNextCredentialWithPresentationDelay:(long long)a0 completion:(id /* block */)a1;

@end
