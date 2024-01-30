@class NSString, PKPeerPaymentIdentityVerificationController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKIdentityVerificationExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPeerPaymentAccountResolutionControllerDelegate> {
    PKPeerPaymentIdentityVerificationController *_controller;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
    unsigned long long _identityVerificaionError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_titleText;
- (void)loadView;
- (void)_processNextViewController;
- (void)_terminateFlow;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsPresentViewController:(id)a1 animated:(BOOL)a2;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsDismissCurrentViewControllerAnimated:(BOOL)a1;
- (id)initWithContext:(long long)a0 setupDelegate:(id)a1 identityVerificationController:(id)a2;
- (id)_bodyText;
- (struct CGSize { double x0; double x1; })_snapshotSize;
- (void)_cancel;

@end
