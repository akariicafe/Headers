@class NSString, PKPaymentDocumentSubmissionController;

@interface PKPaymentDocumentSubmissionInfoViewController : PKExplanationViewController <PKPaymentDocumentSubmissionControllerDelegate, PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPaymentSetupPresentationProtocol> {
    PKPaymentDocumentSubmissionController *_controller;
    long long _context;
    long long _currentState;
    long long _currentSide;
    unsigned long long _featureIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (id)_secondaryButton;
- (void).cxx_destruct;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)onPresentationRemoveViewControllersAfterMarker;
- (id)paymentSetupMarker;
- (void)updateUIWithState:(long long)a0;
- (void)captureController:(id)a0 showLoading:(BOOL)a1;
- (void)captureController:(id)a0 didChangeStateTo:(long long)a1;
- (id)initWithController:(id)a0 context:(long long)a1 featureIdentifier:(unsigned long long)a2;
- (void)_cancelPressed;
- (void)didSelectSetupLater;

@end
