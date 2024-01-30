@class NSString, PKPeerPaymentSetupFlowController;

@interface PKPeerPaymentAddAssociatedAccountIdentityVerificationExplanationViewController : PKExplanationViewController <PKExplanationViewControllerDelegate, PKExplanationViewDelegate> {
    PKPeerPaymentSetupFlowController *_controller;
}

@property (copy, nonatomic) id /* block */ cancelHandler;
@property (copy, nonatomic) id /* block */ continueHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithPeerPaymentSetupFlowController:(id)a0;

@end
