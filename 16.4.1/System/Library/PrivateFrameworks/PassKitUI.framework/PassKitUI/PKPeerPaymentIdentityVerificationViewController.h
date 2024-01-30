@class NSString, PKPeerPaymentIdentityVerificationController, NSArray;

@interface PKPeerPaymentIdentityVerificationViewController : PKPaymentSetupFieldsViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate> {
    PKPeerPaymentIdentityVerificationController *_controller;
    NSArray *_visibleFieldIdentifiers;
    unsigned long long _identityVerificaionError;
}

@property (retain, nonatomic) NSString *headerTitle;
@property (retain, nonatomic) NSString *headerSubtitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_handleCancelButtonTapped:(id)a0;
- (void)_showNavigationBarSpinner:(BOOL)a0;
- (void)_terminateFlow;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)handleNextButtonTapped:(id)a0;
- (id)initWithController:(id)a0 setupDelegate:(id)a1 visibleFieldIdentifiers:(id)a2;
- (id)initWithController:(id)a0 visibleFieldIdentifiers:(id)a1;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsDismissCurrentViewControllerAnimated:(BOOL)a1;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsPresentViewController:(id)a1 animated:(BOOL)a2;
- (id)visibleFieldIdentifiers;

@end
