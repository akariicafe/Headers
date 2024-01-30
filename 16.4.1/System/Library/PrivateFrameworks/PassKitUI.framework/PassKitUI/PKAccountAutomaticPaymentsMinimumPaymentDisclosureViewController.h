@class PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsMinimumPaymentDisclosureViewController : PKExplanationViewController {
    PKAccountAutomaticPaymentsController *_controller;
    unsigned long long _featureIdentifier;
}

- (id)initWithController:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)explanationViewDidSelectContinue:(id)a0;

@end
