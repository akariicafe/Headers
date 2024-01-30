@class PKPayLaterInstallment, NSNumberFormatter, PKPayLaterFinancingPlan;

@interface PKPayLaterFinancingPlanInstallmentCell : PKPayLaterIconCell {
    PKPayLaterFinancingPlan *_financingPlan;
    PKPayLaterInstallment *_installment;
    NSNumberFormatter *_numberFormatter;
}

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)setFinancingPlan:(id)a0 installment:(id)a1 rowIndex:(long long)a2 paymentIntentController:(id)a3 presentingViewController:(id)a4;

@end
