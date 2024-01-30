@class NSString, PKPeerPaymentSetupFlowController;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentAddDebitCardViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPaymentSetupDelegate, PKPeerPaymentSetupFlowControllerDataSource> {
    PKPeerPaymentSetupFlowController *_peerPaymentSetupFlowController;
    id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
}

@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *bodyText;
@property (nonatomic) BOOL showDebitCardHeroView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPeerPaymentSetupFlowController:(id)a0;
- (BOOL)shouldPushTerms;
- (void).cxx_destruct;
- (void)_presentPaymentSetupController;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)a0;
- (void)_handleProvisioningError:(id)a0;
- (void)_setupLater;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)_terminateSetupFlow;
- (void)_handleNextStep;
- (void)paymentSetupDidFinish:(id)a0;
- (void)viewDidLoad;

@end
