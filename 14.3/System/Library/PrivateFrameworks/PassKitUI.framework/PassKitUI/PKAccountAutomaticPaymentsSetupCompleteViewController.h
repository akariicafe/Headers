@class PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsSetupCompleteViewController : PKExplanationViewController {
    PKAccountAutomaticPaymentsController *_controller;
    unsigned long long _featureIdentifier;
}

- (id)_doneButton;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithController:(id)a0;
- (id)bodyString;
- (id)_paymentDateString;
- (long long)_paymentDay;
- (id)_paymentDayString;
- (id)_paymentDayNameString;
- (void)_donePressed;
- (void)viewDidLoad;

@end
