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

- (void)viewDidLoad;
- (id)currentPage;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (void)_terminateFlow;
- (void)_handleNextStep;
- (id)defaultHeaderViewTitle;
- (id)defaultHeaderViewSubTitle;
- (void)handleNextButtonTapped:(id)a0;
- (id)onPresentationRemoveViewControllersAfterMarker;
- (void)_cancelPressed;
- (void)_featureApplicationUpdated;
- (void)_showSubmissionSpinner:(BOOL)a0;
- (void)_handleNextViewController:(id)a0 displayableError:(id)a1 terminationHandler:(id /* block */)a2;
- (void)fieldCellDidTapButton:(id)a0;
- (void)_analyticsReportRowTapForFieldCell:(id)a0;
- (BOOL)fieldCellEditableTextFieldShouldBeginEditing:(id)a0;
- (void)_withdrawApplicationTapped;
- (void)_analyticsReportError:(id)a0;
- (id)_analyticsErrorTextForError:(long long)a0;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 applyPage:(id)a2;
- (void)_completeInWalletLater;
- (BOOL)shouldAppearWithFirstEmptyFieldAsFirstResponder;

@end
