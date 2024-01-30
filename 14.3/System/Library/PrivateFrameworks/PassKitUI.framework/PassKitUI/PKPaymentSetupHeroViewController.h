@class PKPaymentProvisioningController, NSString, PKPaymentSetupHeroView, NSArray, PKPaymentWebService, PKPaymentHeroImageController, UIViewController, ACAccountStore;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKPaymentSetupHeroViewController : PKExplanationViewController <PKExplanationViewDelegate> {
    ACAccountStore *_accountStore;
    BOOL _nextButtonPushed;
    PKPaymentSetupHeroView *_splashView;
    BOOL _hideSetupLater;
    BOOL _hasFelicaSecureElement;
    BOOL _preflightComplete;
    NSArray *_featuredImages;
}

@property (readonly, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> delegate;
@property (readonly, nonatomic) PKPaymentWebService *webService;
@property (readonly, nonatomic) PKPaymentHeroImageController *heroImageController;
@property (nonatomic) BOOL allowsManualEntry;
@property (nonatomic) long long paymentSetupMode;
@property (retain, nonatomic) UIViewController *deferredNextViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_next:(id)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 delegate:(id)a2;
- (void)loadView;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (void)_terminateSetupFlow;
- (id)_bodyText;
- (void)_preflightWithCompletion:(id /* block */)a0;
- (void)setFeaturedHeroImages:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
