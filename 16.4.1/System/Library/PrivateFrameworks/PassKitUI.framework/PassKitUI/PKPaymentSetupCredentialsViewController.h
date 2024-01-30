@class NSString, PKPaymentSetupProduct, LAContext, PKPaymentSetupFlowController, PKPaymentSetupCredentialsSectionController;

@interface PKPaymentSetupCredentialsViewController : PKPaymentSetupOptionsViewController <PKPaymentSetupCredentialsSectionControllerDelegate, PKPaymentSetupPresentationProtocol> {
    PKPaymentSetupFlowController *_flowController;
    PKPaymentSetupCredentialsSectionController *_sectionController;
    PKPaymentSetupProduct *_product;
    LAContext *_localAuthenticationContext;
    BOOL _didBeginWalletProvisioningSubject;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_beginReportingIfNecessary;
- (void)presentRefundFlowForCredential:(id)a0;
- (void)reloadAnimated:(BOOL)a0;
- (id)_analyticsPageTag;
- (void)_continueButtonPressed;
- (void)_endReportingIfNecessary;
- (void)_presentCredentialDoubleCheckAlert:(id)a0 continueHandler:(id /* block */)a1 setupLaterHandler:(id /* block */)a2;
- (void)_presentManualAddController;
- (void)_presentProvisioningFlowForCredentials:(id)a0;
- (void)_requestAuthAndStartProvisioningForCredentials:(id)a0;
- (void)_requestExternalizedAuthIfNeededWithCompletion:(id /* block */)a0;
- (void)_setUserInteractionEnabled:(BOOL)a0;
- (void)_setupDockView;
- (void)_setupLaterTapped;
- (void)_terminateSetupFlow;
- (void)_toggleEdit;
- (void)_updateEditButtonVisibility;
- (void)credentialSelectionDidChange:(BOOL)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 delegate:(id)a2 credentials:(id)a3 product:(id)a4 allowsManualEntry:(BOOL)a5;
- (void)presentUnavailableDetailsForCredential:(id)a0;
- (void)setShowNoResultsView:(BOOL)a0;
- (void)showCredentialDeletionError;
- (void)showDeleteConfirmationWithCompletion:(id /* block */)a0;
- (void)showMaxSelectionAlertForCredential:(id)a0;
- (void)showUnableToDeleteCredentialError;
- (void)showUnableToDeleteSafariCredentialError;

@end
