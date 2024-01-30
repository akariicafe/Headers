@class NSString;

@interface PKBarcodePaymentPrivacyViewController : PKExplanationViewController {
    unsigned long long _displayContext;
    NSString *_issuerName;
}

- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)_dismiss;
- (void).cxx_destruct;
- (void)_closeButtonPressed:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithIssuerName:(id)a0 displayContext:(unsigned long long)a1 paymentSetupContext:(long long)a2;

@end
