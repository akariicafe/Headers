@class PKPaymentProvisioningController, NSString, PKPaymentSetupHeroView, NSArray, PKPaymentWebService, PKPaymentHeroImageController, UIViewController, PKPaymentSetupProduct, ACAccountStore;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupHeroViewController : PKExplanationViewController <PKExplanationViewDelegate, PKPaymentSetupHideSetupLaterButtonProtocol> {
    ACAccountStore *_accountStore;
    BOOL _nextButtonPushed;
    PKPaymentSetupHeroView *_splashView;
    BOOL _hasFelicaSecureElement;
    BOOL _preflightComplete;
    PKPaymentSetupProduct *_product;
    NSArray *_featuredImages;
    NSString *_deviceRegion;
}

@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;
@property (readonly, nonatomic) PKPaymentWebService *webService;
@property (readonly, nonatomic) PKPaymentHeroImageController *heroImageController;
@property (nonatomic) BOOL allowsManualEntry;
@property (nonatomic) long long paymentSetupMode;
@property (retain, nonatomic) UIViewController *deferredNextViewController;
@property (nonatomic) BOOL checkSecurity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)_bodyText;
- (void)_next:(id)a0;
- (void)_preflightWithCompletion:(id /* block */)a0;
- (void)_presentNextViewController:(id)a0;
- (void)_setUserInteractionEnabled:(BOOL)a0;
- (void)_terminateSetupFlow;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 delegate:(id)a2 product:(id)a3;
- (void)setFeaturedHeroImages:(id)a0;
- (void)setHideSetupLaterButton:(BOOL)a0;

@end
