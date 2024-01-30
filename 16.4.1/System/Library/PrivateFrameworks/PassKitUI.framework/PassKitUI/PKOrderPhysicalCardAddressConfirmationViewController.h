@class NSString, PKOrderPhysicalCardController, PKPhysicalCardArtworkOption, CNPostalAddress, CLInUseAssertion, PKBusinessChatController, PKOrderPhysicalCardHeroView, PKPaymentAuthorizationCoordinator;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKOrderPhysicalCardAddressConfirmationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKPaymentAuthorizationCoordinatorDelegate, PKPaymentAuthorizationCoordinatorPrivateDelegate, PKViewControllerPreflightable> {
    PKOrderPhysicalCardController *_controller;
    unsigned long long _featureIdentifier;
    CNPostalAddress *_shippingAddress;
    PKPhysicalCardArtworkOption *_artworkOption;
    PKOrderPhysicalCardHeroView *_physicalCardHeroView;
    CLInUseAssertion *_inUseAssertion;
    BOOL _authorized;
    PKPaymentAuthorizationCoordinator *_paymentAuthorizationCoordinator;
    PKBusinessChatController *_businessChatController;
}

@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizeApplePayTrustSignature:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinator:(id)a0 didAuthorizePayment:(id)a1 handler:(id /* block */)a2;
- (void)paymentAuthorizationCoordinatorDidFinish:(id)a0;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)_addressBodyStringWithPostalAddress:(id)a0;
- (void)_presentNextViewControllerOrTerminate;
- (void)_presentViewController:(id)a0;
- (void)_showDisplayableError:(id)a0;
- (void)_showSpinner:(BOOL)a0;
- (void)_terminateFlow;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithOrderPhysicalCardController:(id)a0;

@end
