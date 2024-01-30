@class NSString, NSArray;

@interface PKPaymentCardManualEntryViewController : PKPaymentSetupProvisioningFieldsViewController <PKPaymentSetupDisambiguationViewControllerDelegate, PKPaymentSetupBrowseProductsViewControllerDelegate, PKPaymentCameraCaptureViewControllerDelegate> {
    NSArray *_pendingCameraCaptureObjects;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)defaultHeaderViewTitle;
- (void)viewWillDisappear:(BOOL)a0;
- (id)defaultHeaderViewSubTitle;
- (id)visibleFieldIdentifiers;
- (id)defaultFields;
- (BOOL)_shouldUseInlineSecondaryProvisioningFlow;
- (void)_captureFromCamera:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_cameraCaptureCancelButtonPressed:(id)a0;
- (void)_dismissCameraCaptureViewController:(id)a0;
- (void)updateFieldsModelWithCameraCaptureObjects:(id)a0;
- (void)_performSecondaryWithCompletion:(id /* block */)a0;
- (void)_performDisambiguationWithCompletion:(id /* block */)a0;
- (void)_processPendingCameraCaptureObjects;
- (void)_pushSecondaryPaymentSetupViewControllerWithCompletion:(id /* block */)a0;
- (void)_performInlineSecondaryWithCompletion:(id /* block */)a0;
- (void)fieldCellEditableTextFieldValueDidChange:(id)a0;
- (void)cameraCaptureViewControllerDidFail:(id)a0;
- (void)cameraCaptureViewController:(id)a0 didRecognizeObjects:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)newPaymentEligibilityRequest;
- (void)_performRequirementsWithCompletion:(id /* block */)a0;
- (id)readonlyFieldIdentifiers;
- (void)viewDidAppear:(BOOL)a0;
- (void)performNextActionForProvisioningState:(long long)a0 withCompletion:(id /* block */)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)disambiguationViewController:(id)a0 didSelectProduct:(id)a1;
- (void)disambiguationViewControllerSetupLater:(id)a0;
- (void)browseProductsViewController:(id)a0 didSelectProduct:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)viewDidLoad;

@end
