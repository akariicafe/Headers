@class UIFont;
@protocol PKPayLaterFinancingPlanPaymentScheduleComposerDataSource, PKPayLaterFinancingPlanPaymentScheduleComposerDelegate;

@interface PKPayLaterFinancingPlanPaymentScheduleComposer : NSObject {
    double _minimumCellHeight;
    UIFont *_font;
    id<PKPayLaterFinancingPlanPaymentScheduleComposerDelegate> _delegate;
    id<PKPayLaterFinancingPlanPaymentScheduleComposerDataSource> _dataSource;
}

+ (id)numberFormatter;
+ (id)_detailTextForPaymentWithCreditRevokedType:(id)a0 financingPlan:(id)a1;
+ (id)_detailTextForPaymentWithDisputeCreditType:(id)a0 financingPlan:(id)a1;
+ (id)_detailTextForPaymentWithPaymentType:(id)a0 financingPlan:(id)a1;
+ (id)_detailTextForPaymentWithRefundRevokedType:(id)a0 financingPlan:(id)a1;
+ (id)_detailTextForPaymentWithRefundType:(id)a0 financingPlan:(id)a1;
+ (id)_detailTextForPaymentWithTemporaryCreditType:(id)a0 financingPlan:(id)a1;
+ (unsigned long long)_scheduleComposerDetailTypeForPayment:(id)a0 financingPlan:(id)a1;
+ (id)attributedStringWithText:(id)a0 strikethrough:(BOOL)a1;
+ (id)detailTextForPayment:(id)a0 financingPlan:(id)a1;
+ (id)mediumDateFormatter;
+ (id)shortDateFormatter;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0 dataSource:(id)a1;
- (id)_commonRowWithRowIndex:(long long)a0;
- (id)_formRowsWithList:(id)a0 financingPlan:(id)a1 payLaterAccount:(id)a2;
- (id)_paymentForItem:(id)a0;
- (id /* block */)_selectionBlockForPayment:(id)a0 financingPlan:(id)a1 payLaterAccount:(id)a2;
- (void)_updateRowConnectorsForRows:(id)a0;
- (id)composeFinancingPlanPaymentScheduleLineItemsForPlan:(id)a0 payLaterAccount:(id)a1;

@end
