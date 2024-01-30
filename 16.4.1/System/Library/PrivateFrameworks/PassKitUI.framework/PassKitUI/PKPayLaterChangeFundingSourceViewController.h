@class PKPaymentPass, NSString, PKPayLaterPaymentIntentController, PKPayLaterFinancingPlan, PKPayLaterPaymentSource, PKPayLaterChangeFundingSourceSectionController, PKAccountWebServiceFinancingPlanPaymentIntentResponse;

@interface PKPayLaterChangeFundingSourceViewController : PKPayLaterViewController <PKPayLaterChangeFundingSourceSectionControllerDelegate> {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPaymentPass *_payLaterPass;
    PKPayLaterPaymentIntentController *_paymentIntentController;
    PKPayLaterChangeFundingSourceSectionController *_sectionController;
    PKAccountWebServiceFinancingPlanPaymentIntentResponse *_intentDetails;
    PKPayLaterPaymentSource *_selectedPaymentSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)preflightWithCompletion:(id /* block */)a0;
- (id)pageTag;
- (BOOL)_canChangeFundingSource;
- (void)_presentChangeFundingSourceFlowWithPrimaryPaymentSource:(id)a0 completion:(id /* block */)a1;
- (void)_presentUnableToChangeFundingSourceAlert;
- (void)_turnOffAutoPaymentWithCompletion:(id /* block */)a0;
- (void)_updateSectionControllerAnimated:(BOOL)a0;
- (id)additionalAnalyticsDictionary;
- (void)didSelectFundingSource:(id)a0;
- (void)didUpdateAutoPayment:(BOOL)a0 completion:(id /* block */)a1;
- (void)didUpdateFinancingPlan:(id)a0;
- (id)initWithFinancingPlan:(id)a0 payLaterPass:(id)a1 paymentIntentController:(id)a2;

@end
