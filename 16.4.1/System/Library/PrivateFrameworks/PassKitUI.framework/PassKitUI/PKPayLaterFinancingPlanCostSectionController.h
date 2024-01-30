@class PKPaymentPass, NSDateFormatter, PKPayLaterTitleDetailRow, PKPayLaterFinancingPlan, PKPayLaterButtonRow;

@interface PKPayLaterFinancingPlanCostSectionController : PKPayLaterSectionController {
    NSDateFormatter *_transactionDateFormatter;
    PKPayLaterButtonRow *_loanAgreementButton;
    PKPaymentPass *_payLaterPass;
    PKPayLaterTitleDetailRow *_loanIdentifierRow;
}

@property (retain, nonatomic) PKPayLaterFinancingPlan *financingPlan;

- (id)identifiers;
- (void).cxx_destruct;
- (void)_configureLoanAgreementSection:(id)a0;
- (void)_configureCostSummarySection:(id)a0;
- (void)_configureIssuerBrandSection:(id)a0;
- (void)configureHeaderView:(id)a0 forSectionIdentifier:(id)a1;
- (id)contextMenuForPayLaterItem:(id)a0;
- (id)footerContentForSectionIdentifier:(id)a0;
- (Class)headerViewClassForSectionIdentifier:(id)a0;
- (id)initWithFinancingPlan:(id)a0 payLaterAccount:(id)a1 delegate:(id)a2;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
