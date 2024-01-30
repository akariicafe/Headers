@class NSString, PKPayLaterPaymentIntentController, PKPayLaterFinancingPlan, NSDateFormatter, PKPayLaterMakePaymentSectionController, PKAccountWebServiceFinancingPlanPaymentIntentResponse;

@interface PKPayLaterMakePaymentViewController : PKPayLaterViewController <PKPayLaterMakePaymentSectionControllerDelegate> {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterPaymentIntentController *_paymentIntentController;
    PKPayLaterMakePaymentSectionController *_sectionController;
    NSDateFormatter *_dateFormatter;
    NSDateFormatter *_timeFormatter;
    PKAccountWebServiceFinancingPlanPaymentIntentResponse *_intentDetails;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)_createDockView;
- (id)pageTag;
- (void)_cancelButtonTapped;
- (void)_didSelectCustomAmount;
- (void)_didSelectPayNextPaymentAmount;
- (id)additionalAnalyticsDictionary;
- (id)initWithFinancingPlan:(id)a0 paymentIntentController:(id)a1;
- (void)sectionController:(id)a0 didUpdateCurrentSelectedAmount:(id)a1;

@end
