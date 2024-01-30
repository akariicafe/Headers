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

- (void)loadView;
- (id)_bodyText;
- (void).cxx_destruct;
- (void)_cancel;
- (id)_titleText;
- (struct CGSize { double x0; double x1; })_snapshotSize;
- (void)_processNextViewController;
- (void)_terminateFlow;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsPresentViewController:(id)a1 animated:(BOOL)a2;
- (void)peerPaymentAccountResolutionController:(id)a0 requestsDismissCurrentViewControllerAnimated:(BOOL)a1;
- (id)initWithContext:(long long)a0 setupDelegate:(id)a1 identityVerificationController:(id)a2;

@end
