@class NSString, PKPaymentSetupBankAppDisambiguationController, PKPaymentSetupProduct;

@interface PKPaymentSetupBankAppDisambiguationViewController : PKPaymentSetupOptionsViewController <PKPaymentSetupBankAppDisambiguationControllerDelegate, PKPaymentSetupActivitySpinnerProtocol> {
    PKPaymentSetupBankAppDisambiguationController *_sectionController;
    PKPaymentSetupProduct *_paymentSetupProduct;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)didSelectCameraWithCompletion:(id /* block */)a0;
- (void)didSelectInAppWithCompletion:(id /* block */)a0;
- (id)initWithProvisioningController:(id)a0 context:(long long)a1 delegate:(id)a2 paymentSetupProduct:(id)a3;

@end
