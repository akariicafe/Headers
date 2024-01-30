@class NSNumberFormatter, NSDate, NSDecimalNumber, PKAccountBillPaymentCheckmarkRingView, NSDateFormatter, PKAccount, NSString, PKPaymentPass, PKPaymentService, NSArray, UIListContentView, PKCreditAccountSummary, PKBillPaymentSuggestedAmountList;
@protocol PKAccountBillPaymentConfirmationViewControllerDelegate;

@interface PKAccountBillPaymentConfirmationViewController : PKExplanationViewController <PKBillPaymentRingViewDelegate, PKBillPaymentRingViewDataSource> {
    PKAccount *_account;
    PKCreditAccountSummary *_previousAccountSummary;
    PKPaymentPass *_paymentPass;
    NSArray *_payments;
    PKBillPaymentSuggestedAmountList *_suggestionList;
    id<PKAccountBillPaymentConfirmationViewControllerDelegate> _delegate;
    PKPaymentService *_paymentService;
    NSDecimalNumber *_totalPaymentAmount;
    BOOL _isScheduledPayment;
    NSDate *_scheduledDate;
    NSDecimalNumber *_pendingPaymentsTotal;
    NSNumberFormatter *_amountFormatter;
    NSDateFormatter *_monthDayFormatter;
    NSDateFormatter *_fullDateFormatter;
    NSDateFormatter *_monthFormatter;
    UIListContentView *_bodyContentView;
    PKAccountBillPaymentCheckmarkRingView *_checkmarkRingView;
    BOOL _hasPerformedCategoryAnimation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)_shouldDisplayInterestSummary;
- (id)_trailingInterestMonthMidpoint;
- (void)_updateBodyContentViewMessage;
- (id)billPaymentRingView:(id)a0 bottomCurvedTextForSuggestedAmount:(id)a1;
- (id)billPaymentRingView:(id)a0 interestTextForAmount:(id)a1;
- (void)billPaymentRingView:(id)a0 selectedSuggestedAmount:(id)a1 selectedSuggestedAmountIsTarget:(BOOL)a2 userInitiatedChange:(BOOL)a3;
- (id)billPaymentRingView:(id)a0 topCurvedTextForSuggestedAmount:(id)a1;
- (id)billPaymentRingViewZeroInterestText:(id)a0;
- (id)disabledBottomCurvedTextForBillPaymentRingView:(id)a0;
- (id)disabledTopCurvedTextForBillPaymentRingView:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (id)initWithAccount:(id)a0 previousAccountSummary:(id)a1 paymentPass:(id)a2 payments:(id)a3 suggestionList:(id)a4 delegate:(id)a5;

@end
