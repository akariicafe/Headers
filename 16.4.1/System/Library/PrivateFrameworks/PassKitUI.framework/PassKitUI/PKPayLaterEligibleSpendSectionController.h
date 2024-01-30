@class NSDate, NSArray, PKPayLaterSetupFlowController, NSNumberFormatter, PKCurrencyAmount, PKPayLaterButtonRow, NSDateFormatter, NSDecimalNumber;

@interface PKPayLaterEligibleSpendSectionController : PKPayLaterSectionController {
    PKCurrencyAmount *_eligibleSpendAmount;
    NSDecimalNumber *_minAPR;
    NSDecimalNumber *_maxAPR;
    unsigned long long _financingOptionsProductType;
    NSDate *_expirationDate;
    NSArray *_financingOptions;
    NSNumberFormatter *_numberFormatter;
    PKPayLaterSetupFlowController *_payLaterSetupFlowController;
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_dateFormatter;
    NSNumberFormatter *_percentageFormatter;
    PKPayLaterButtonRow *_newPurchaseButtonRow;
}

+ (id)dynamicContentPageForBNPLOption:(id)a0;

- (id)identifiers;
- (void).cxx_destruct;
- (id)listLayoutConfigurationWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (void)_configureEligbleSpendSection:(id)a0;
- (void)_configureFinancingOptionsSectionWithSectionIdentifier:(id)a0 snapshot:(id)a1;
- (void)_configureNewPurchaseSection:(id)a0;
- (void)_configureTotalCostSection:(id)a0;
- (id)_firstFinancingOptionSectionIdentifier;
- (id)_lastFinancingOptionSectionIdentifier;
- (id)_paymentScheduleRowsForOption:(id)a0;
- (id)_tileDetailRowForOption:(id)a0;
- (void)_updateLocalState;
- (void)configureHeaderView:(id)a0 forSectionIdentifier:(id)a1;
- (id)footerContentForSectionIdentifier:(id)a0;
- (Class)headerViewClassForSectionIdentifier:(id)a0;
- (id)initWithPayLaterAccount:(id)a0 dynamicContentPage:(id)a1 viewControllerDelegate:(id)a2;
- (id)layoutWithLayoutEnvironment:(id)a0 sectionIdentifier:(id)a1;
- (void)setPayLaterAccount:(id)a0;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
