@class NSDate, PKAccountPayment, NSNumberFormatter, PKPaymentWebService, NSDictionary, PKFooterHyperlinkView, NSDateFormatter, PKAccount;
@protocol PKCreditAccountPaymentDetailsViewControllerDelegate;

@interface PKCreditAccountPaymentDetailsViewController : PKSectionTableViewController {
    PKAccount *_account;
    NSDate *_paymentDueDate;
    unsigned long long _featureIdentifier;
    PKAccountPayment *_payment;
    PKPaymentWebService *_paymentWebService;
    unsigned long long _viewStyle;
    NSDictionary *_recurringDetailsRowMap;
    NSNumberFormatter *_currencyFormatter;
    NSNumberFormatter *_localizedDayNumberFormatter;
    NSDateFormatter *_productDateFormatter;
    NSDateFormatter *_productDayFormatter;
    NSDateFormatter *_localTimeFormatter;
    NSDateFormatter *_localCancellationDateFormatter;
    NSDateFormatter *_productPaymentMonthFormatter;
    NSDateFormatter *_productPaymentDateFormatter;
    BOOL _cancellingPayment;
    BOOL _showStatusSection;
    BOOL _showUpcomingPaymentSection;
    BOOL _paymentAmountPending;
    BOOL _isFailedRecurringPayment;
    PKFooterHyperlinkView *_hyperlinkFooterView;
}

@property (weak, nonatomic) id<PKCreditAccountPaymentDetailsViewControllerDelegate> delegate;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)_cancelPayment:(unsigned long long)a0;
- (id)_modifyPaymentCellForTableView:(id)a0;
- (void)_reportEventForPassIfNecessary:(id)a0;
- (id)_cancelPaymentCellForTableView:(id)a0;
- (void)_applyDetailViewStylingToCell:(id)a0;
- (void)_cancelButtonPressed:(id)a0;
- (void)_cancelPaymentSelected:(unsigned long long)a0;
- (id)_cancellationDateForPayment;
- (void)_computeRecurringDetailsRowMap;
- (void)_configureDeletePaymentCell:(id)a0;
- (void)_configureDismissCell:(id)a0;
- (void)_configureLinkCell:(id)a0;
- (id)_hyperlinkFooterView;
- (void)_modifyPaymentSelected;
- (long long)_numberOfRecurringPaymentDetailsRows;
- (id)_paymentAmountToDisplay;
- (long long)_recurringPaymentDetailsRowTypeForRowAtIndex:(long long)a0;
- (id)_reuseIdentifierForSection:(unsigned long long)a0;
- (BOOL)_showRecurringDay;
- (BOOL)_showRecurringDetailsAmount;
- (id)_stringForPaymentFrequency;
- (id)_stringForPaymentPreset;
- (id)_tableView:(id)a0 paymentDetailsCellForPaymentDetailsRowAtIndexPath:(id)a1;
- (id)_tableView:(id)a0 recurringPaymentDetailsCellForPaymentDetailsRowAtIndexPath:(id)a1;
- (id)_tableView:(id)a0 recurringPaymentStatusCellForRowAtIndexPath:(id)a1;
- (id)_tableView:(id)a0 recurringPaymentUpcomingPaymentCellForPaymentDetailsRowAtIndexPath:(id)a1;
- (id)initWithAccount:(id)a0 payment:(id)a1 paymentWebService:(id)a2 detailViewStyle:(long long)a3;
- (id)initWithAccount:(id)a0 payment:(id)a1 paymentWebService:(id)a2 overrideViewStyle:(unsigned long long)a3;
- (BOOL)shouldMapSection:(unsigned long long)a0;

@end
