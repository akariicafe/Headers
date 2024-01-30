@class PKAccountAutomaticPaymentsController;

@interface PKAccountAutomaticPaymentsSetupCompleteViewController : PKExplanationViewController {
    PKAccountAutomaticPaymentsController *_controller;
    unsigned long long _featureIdentifier;
}

- (id)_doneButton;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithController:(id)a0;
- (void)_donePressed;
- (id)bodyString;
- (id)_paymentDateString;
- (long long)_paymentDay;
- (id)_paymentDayString;
- (id)_paymentDayNameString;

@end
