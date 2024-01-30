@class NSString, PKPaymentSetupProduct, LAContext, PKPaymentSetupFlowController, PKPaymentSetupCredentialsSectionController;

@interface PKPaymentSetupCredentialsViewController : PKPaymentSetupOptionsViewController <PKPaymentSetupCredentialsSectionControllerDelegate, PKPaymentSetupPresentationProtocol> {
    PKPaymentSetupFlowController *_flowController;
    PKPaymentSetupCredentialsSectionController *_sectionController;
    PKPaymentSetupProduct *_product;
    LAContext *_localAuthenticationContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reloadAnimated:(BOOL)a0;
- (void)_terminateSetupFlow;
- (id)paymentSetupMarker;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 delegate:(id)a2 credentials:(id)a3 product:(id)a4 allowsManualEntry:(BOOL)a5;
- (void)showDeleteConfirmationWithCompletion:(id /* block */)a0;
- (void)presentRefundFlowForCredential:(id)a0;
- (void)presentUnavailableDetailsForCredential:(id)a0;
- (void)showUnableToDeleteCredentialError;
- (void)credentialSelectionDidChange:(BOOL)a0;
- (void)showMaxSelectionAlertForCredential:(id)a0;
- (void)showCredentialDeletionError;
- (void)_setupDockView;
- (void)_toggleEdit;
- (void)_presentProvisioningFlowForCredentials:(id)a0;
- (void)_continueButtonPressed;
- (void)_setupLaterTapped;
- (void)_presentManualAddController;
- (void)_requestAuthAndStartProvisioningForCredentials:(id)a0;
- (void)_presentCredentialDoubleCheckAlert:(id)a0 continueHandler:(id /* block */)a1 setupLaterHandler:(id /* block */)a2;
- (void)_setUserInteractionEnabled:(BOOL)a0;
- (void)_requestExternalizedAuthIfNeededWithCompletion:(id /* block */)a0;

@end
