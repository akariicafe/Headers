@class NSString, NSArray;

@interface PKPaymentCardManualEntryViewController : PKPaymentSetupProvisioningFieldsViewController <PKPaymentSetupDisambiguationViewControllerDelegate, PKPaymentCameraCaptureViewControllerDelegate> {
    NSArray *_pendingCameraCaptureObjects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_cameraCaptureCancelButtonPressed:(id)a0;
- (void)_dismissCameraCaptureViewController:(id)a0;
- (void)_performDisambiguationWithCompletion:(id /* block */)a0;
- (void)_performInlineSecondaryWithCompletion:(id /* block */)a0;
- (void)_performRequirementsWithCompletion:(id /* block */)a0;
- (void)_performSecondaryWithCompletion:(id /* block */)a0;
- (void)_processPendingCameraCaptureObjects;
- (void)_pushSecondaryPaymentSetupViewControllerWithCompletion:(id /* block */)a0;
- (BOOL)_shouldUseInlineSecondaryProvisioningFlow;
- (void)cameraCaptureViewController:(id)a0 didRecognizeObjects:(id)a1;
- (void)cameraCaptureViewControllerDidFail:(id)a0;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)disambiguationViewController:(id)a0 didSelectProduct:(id)a1;
- (void)disambiguationViewControllerSetupLater:(id)a0;
- (void)fieldCellEditableTextFieldValueDidChange:(id)a0;
- (void)handleNextButtonTapped:(id)a0;
- (id)newPaymentEligibilityRequest;
- (void)performNextActionForProvisioningState:(long long)a0 withCompletion:(id /* block */)a1;
- (id)readonlyFieldIdentifiers;
- (BOOL)shouldDisplayFooterField;
- (void)updateFieldsModelWithCameraCaptureObjects:(id)a0;
- (id)visibleFieldIdentifiers;

@end
