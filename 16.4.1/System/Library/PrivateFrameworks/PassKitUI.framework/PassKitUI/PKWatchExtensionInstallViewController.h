@class PKPaymentPass, PKPaymentProvisioningController, NSString, PKWatchDeviceAppCarouselView, ASCLockupView, PKPaymentWebService;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKWatchExtensionInstallViewController : PKExplanationViewController <ASCLockupViewDelegate> {
    PKWatchDeviceAppCarouselView *_deviceImageView;
    ASCLockupView *_appStoreView;
}

@property (retain, nonatomic) PKPaymentPass *paymentPass;
@property (retain, nonatomic) PKPaymentWebService *webservice;
@property (retain, nonatomic) PKPaymentProvisioningController *provisioningController;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowWatchExtensionInstallViewControllerForPaymentPass:(id)a0 webService:(id)a1;

- (void).cxx_destruct;
- (void)loadView;
- (void)lockupViewDidFinishRequest:(id)a0;
- (id)presentingViewControllerForLockupView:(id)a0;
- (void)_installNowPressed;
- (void)_proceedToNextScreen;
- (void)explanationViewDidSelectSetupLater:(id)a0;
- (id)initWithPaymentPass:(id)a0 provisioningController:(id)a1 webService:(id)a2 context:(long long)a3 setupDelegate:(id)a4;

@end
