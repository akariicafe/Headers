@class PKPaymentCredentialMetadataTableController, NSString, PKPaymentCredential, UIImage, PKPaymentSetupProduct, PKAddPaymentPassRequest;

@interface PKPaymentCredentialProvisioningViewController : PKPaymentSetupProvisioningFieldsViewController <PKViewControllerPreflightable, PKPaymentProvisioningControllerDelegate, PKPaymentSetupHideSetupLaterButtonProtocol, PKPaymentSetupPresentationProtocol> {
    UIImage *_passSnapshotPlaceHolder;
    unsigned long long _credentialProvisioningType;
    unsigned long long _displayType;
    PKPaymentCredentialMetadataTableController *_metadataController;
    PKPaymentCredential *_paymentCredential;
    PKPaymentSetupProduct *_setupProduct;
    BOOL _allowsManualEntry;
    BOOL _previouslyAcceptedTerms;
    UIImage *_passSnapshot;
    BOOL _passSnapshotNeedsCorners;
    struct CGSize { double width; double height; } _passSnapshotOverrideSize;
    PKAddPaymentPassRequest *_addRequest;
}

@property (nonatomic) BOOL shouldAutoProvision;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isComplete;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)paymentPassUpdatedOnCredential:(id)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)_fetchAddRequestWithCompletion:(id /* block */)a0;
- (void)_cleanupTransferredCredentialFromSourceDeviceWithCompletion:(id /* block */)a0;
- (void)_createPassSnapshotFromPaymentPass:(id)a0 completion:(id /* block */)a1;
- (id)_defaultHeaderViewSubTitleForLocalCredential;
- (id)_defaultHeaderViewSubTitleForLocalCredentialTransfer;
- (BOOL)_isPaymentAccount;
- (void)_performEligibilityWithCompletion:(id /* block */)a0;
- (void)_performFinishWithCompletion:(id /* block */)a0;
- (void)_performProvisionWithCompletion:(id /* block */)a0;
- (void)_performRequirementsWithCompletion:(id /* block */)a0;
- (void)_performTermsWithCompletion:(id /* block */)a0;
- (void)_preflightCredentialFieldsWithCompletion:(id /* block */)a0;
- (id)_remoteExistingCredentialDefaultHeaderViewSubTitle;
- (void)_skipCard;
- (void)_terminateSetupFlow;
- (void)_updatePassSnapshotHeader;
- (void)addDifferentCard:(id)a0;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)fieldCellEditableTextFieldValueDidChange:(id)a0;
- (void)handleNextButtonTapped:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 paymentCredential:(id)a3 setupProduct:(id)a4 allowsManualEntry:(BOOL)a5 previouslyAcceptedTerms:(BOOL)a6;
- (BOOL)isProvisioningHomeKey;
- (BOOL)isProvisioningPaymentAccount;
- (id)newPaymentEligibilityRequest;
- (id)newPaymentProvisioningRequest;
- (id)newPaymentRequirementsRequest;
- (unsigned long long)onPresentationRemoveViewControllersAfterMarker;
- (void)performNextActionForProvisioningState:(long long)a0 withCompletion:(id /* block */)a1;
- (id)readonlyFieldIdentifiers;
- (void)setPassSnapshot:(id)a0 needsCorners:(BOOL)a1;
- (void)triggerWatchProvisioning;
- (id)visibleFieldIdentifiers;

@end
