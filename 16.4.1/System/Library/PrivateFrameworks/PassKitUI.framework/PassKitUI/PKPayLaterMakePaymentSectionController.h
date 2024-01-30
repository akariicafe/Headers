@class NSDateFormatter, NSNumberFormatter, PKPayLaterFinancingPlan, PKAccountWebServiceFinancingPlanPaymentIntentResponse;
@protocol PKPayLaterMakePaymentSectionControllerDelegate;

@interface PKPayLaterMakePaymentSectionController : PKPayLaterSectionController {
    PKPayLaterFinancingPlan *_financingPlan;
    NSNumberFormatter *_numberFormatter;
    NSDateFormatter *_mediumDateFormatter;
    unsigned long long _selectedItem;
    PKAccountWebServiceFinancingPlanPaymentIntentResponse *_intentDetails;
    id<PKPayLaterMakePaymentSectionControllerDelegate> _delegate;
}

- (id)_titleFont;
- (id)identifiers;
- (void).cxx_destruct;
- (id)_detailFont;
- (void)_configurePastDueAmountSection:(id)a0;
- (id)_amountForItemType:(unsigned long long)a0;
- (void)_configureNextPaymentSection:(id)a0;
- (void)_configureTotalPaymentSection:(id)a0;
- (id)_detailTextColor;
- (BOOL)_isItemAvailableToSelect:(unsigned long long)a0;
- (void)_updateSelectedItem:(unsigned long long)a0;
- (void)configureCellForRegistration:(id)a0 item:(id)a1;
- (id)currentSelectedAmount;
- (id)footerContentForSectionIdentifier:(id)a0;
- (id)initWithFinancingPlan:(id)a0 payLaterAccount:(id)a1 intentDetails:(id)a2 dynamicContentPage:(id)a3 delegate:(id)a4;
- (id)snapshotWithPreviousSnapshot:(id)a0 forSectionIdentifier:(id)a1;

@end
