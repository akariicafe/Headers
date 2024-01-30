@class NSString, PKApplyRequiredFieldsPage, PKApplyController, UIBarButtonItem;

@interface PKApplyFieldsViewController : PKPaymentSetupFieldsViewController <PKPaymentSetupPresentationProtocol, PKApplyFlowControllerProtocol> {
    PKApplyController *_controller;
    UIBarButtonItem *_cancelButton;
    PKApplyRequiredFieldsPage *_applyPage;
    BOOL _isLoading;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)defaultHeaderViewTitle;
- (id)defaultHeaderViewSubTitle;
- (void)handleNextButtonTapped:(id)a0;
- (void)_cancelPressed;
- (void)_featureApplicationUpdated;
- (void)_showSubmissionSpinner:(BOOL)a0;
- (void)_handleNextViewController:(id)a0 displayableError:(id)a1 terminationHandler:(id /* block */)a2;
- (void)_terminateFlow;
- (void)_withdrawApplicationTapped;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 applyPage:(id)a2;
- (void)_completeInWalletLater;
- (BOOL)shouldAppearWithFirstEmptyFieldAsFirstResponder;
- (id)currentPage;
- (void)viewDidAppear:(BOOL)a0;
- (id)onPresentationRemoveViewControllersAfterMarker;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_handleNextStep;
- (void)viewDidLoad;

@end
