@class PKPayLaterPaymentIntentController, PKAccountWebServiceFinancingPlanPaymentIntentResponse, PKPayLaterFinancingPlan;

@interface PKPayLaterEnterAmountPaymentViewController : PKPayLaterEnterAmountViewController {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterPaymentIntentController *_paymentIntentController;
    PKAccountWebServiceFinancingPlanPaymentIntentResponse *_intentDetails;
}

- (id)headerTitle;
- (id)headerSubtitle;
- (void).cxx_destruct;
- (id)initWithPayLaterAccount:(id)a0 financingPlan:(id)a1 intentDetails:(id)a2 paymentIntentController:(id)a3;
- (id)keypadSuggestions;
- (void)nextButtonTapped;

@end
