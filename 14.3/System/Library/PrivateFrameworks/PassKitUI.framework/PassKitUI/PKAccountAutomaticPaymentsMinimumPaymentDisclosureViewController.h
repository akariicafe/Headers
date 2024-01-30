@class PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController : PKExplanationViewController {
    PKAccountAutomaticPaymentsController *_controller;
    unsigned long long _featureIdentifier;
}

- (void).cxx_destruct;
- (id)_confirmButton;
- (void)_confirmPressed:(id)a0;
- (id)initWithController:(id)a0;
- (void)viewDidLoad;

@end
