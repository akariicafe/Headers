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

- (void).cxx_destruct;
- (void)dealloc;
- (id)defaultHeaderViewTitle;
- (id)defaultHeaderViewSubTitle;
- (id)visibleFieldIdentifiers;
- (void)handleNextButtonTapped:(id)a0;
- (void)loadView;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 setupDelegate:(id)a2 paymentCredential:(id)a3 setupProduct:(id)a4 allowsManualEntry:(BOOL)a5 previouslyAcceptedTerms:(BOOL)a6;
- (void)setPassSnapshot:(id)a0 needsCorners:(BOOL)a1;
- (void)_skipCard;
- (BOOL)_isPaymentAccount;
- (id)defaultFields;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_updatePassSnapshotHeader;
- (void)_createPassSnapshotFromPaymentPass:(id)a0 completion:(id /* block */)a1;
- (id)newPaymentRequirementsRequest;
- (void)preflightWithCompletion:(id /* block */)a0;
- (BOOL)isComplete;
- (void)_terminateSetupFlow;
- (void)viewWillAppear:(BOOL)a0;
- (id)newPaymentEligibilityRequest;
- (id)newPaymentProvisioningRequest;
- (void)_preflightCredentialFieldsWithCompletion:(id /* block */)a0;
- (void)_performRequirementsWithCompletion:(id /* block */)a0;
- (void)_performEligibilityWithCompletion:(id /* block */)a0;
- (void)_fetchAddRequestWithCompletion:(id /* block */)a0;
- (void)_performTermsWithCompletion:(id /* block */)a0;
- (void)_performProvisionWithCompletion:(id /* block */)a0;
- (void)_performFinishWithCompletion:(id /* block */)a0;
- (void)paymentPassUpdatedOnCredential:(id)a0;
- (void)_cleanupTransferredCredentialFromSourceDeviceWithCompletion:(id /* block */)a0;
- (id)_defaultHeaderViewSubTitleForLocalCredentialTransfer;
- (id)_defaultHeaderViewSubTitleForLocalCredential;
- (id)_remoteExistingCredentialDefaultHeaderViewSubTitle;
- (id)readonlyFieldIdentifiers;
- (id)onPresentationRemoveViewControllersAfterMarker;
- (void)addDifferentCard:(id)a0;
- (void)performNextActionForProvisioningState:(long long)a0 withCompletion:(id /* block */)a1;
- (BOOL)isProvisioningPaymentAccount;
- (void)viewDidDisappear:(BOOL)a0;

@end
