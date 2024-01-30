@class NSString, PKPaymentProvisioningController;

@interface PKServicePaymentSetupViewController : UIViewController <PKServicePaymentSetupViewControllerProtocol, PKPaymentSetupDelegate> {
    PKPaymentProvisioningController *_provisioningController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)_handleError:(id)a0 completion:(id /* block */)a1;
- (void)configureWithPaymentSetupRequest:(id)a0 completion:(id /* block */)a1;
- (void)paymentSetupDidFinish:(id)a0;
- (void)paymentSetupDidFinish:(id)a0 withError:(id)a1;
- (void)paymentSetupDidShowError:(id)a0;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
