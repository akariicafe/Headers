@class PKPaymentProvisioningController, PKPaymentSetupProduct, UIImage, NSString, PKDynamicProvisioningPageContent;
@protocol PKSetupFlowControllerProtocol, PKPaymentSetupViewControllerDelegate;

@interface PKOnBoardingViewController : PKExplanationViewController <PKPaymentSetupPresentationProtocol, PKExplanationViewControllerDelegate, PKViewControllerPreflightable, UIAdaptivePresentationControllerDelegate>

@property (weak, nonatomic) id<PKSetupFlowControllerProtocol> parentFlowController;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (retain, nonatomic) PKPaymentSetupProduct *paymentSetupProduct;
@property (retain, nonatomic) PKDynamicProvisioningPageContent *currentPage;
@property (retain, nonatomic) UIImage *heroImage;
@property (readonly, nonatomic) BOOL preflightCalled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)presentationControllerDidAttemptToDismiss:(id)a0;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)explanationViewDidSelectBodyButton:(id)a0;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (void)explanationViewControllerDidSelectDone:(id)a0;
- (id)paymentSetupMarker;
- (id)initWithParentFlowController:(id)a0 setupDelegate:(id)a1 context:(long long)a2 provisioningController:(id)a3 paymentSetupProduct:(id)a4 currentPage:(id)a5;
- (void)terminateSetupFlow;
- (void)updateForHeroImage;
- (void)handleSetupLater;
- (void)handleProductAvailable;
- (id)nextOnboardingViewControllerWithPage:(id)a0 product:(id)a1;
- (void)handleNotifyRequested;

@end
