@class PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController : PKExplanationViewController {
    PKAccountAutomaticPaymentsController *_controller;
    unsigned long long _featureIdentifier;
}

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_confirmButton;
- (id)initWithController:(id)a0;
- (void)_confirmPressed:(id)a0;

@end
