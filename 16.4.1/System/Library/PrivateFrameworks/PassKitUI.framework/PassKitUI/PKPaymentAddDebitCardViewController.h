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

- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)shouldPushTerms;
- (void)_handleNextStep;
- (void)_handleProvisioningError:(id)a0;
- (id)_paymentSetupNavigationControllerForProvisioningController:(id)a0;
- (void)_presentPaymentSetupController;
- (void)_setupLater;
- (void)_terminateSetupFlow;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithPeerPaymentSetupFlowController:(id)a0;
- (void)paymentSetupDidFinish:(id)a0;

@end
