@class PKPaymentPass, NSString, PKPaymentWebService, PKPaymentBalance, NSArray, PKPaymentPassAction;
@protocol PKBalanceDetailsViewControllerDelegate, PKPaymentDataProvider;

@interface PKBalanceDetailsViewController : PKSectionTableViewController <PKPerformActionViewControllerDelegate, PKPaymentDataProviderDelegate> {
    PKPaymentBalance *_balance;
    PKPaymentPass *_pass;
    PKPaymentPassAction *_action;
    id<PKPaymentDataProvider> _paymentDataProvider;
    PKPaymentWebService *_webService;
    long long _style;
    NSString *_currentBalance;
    NSString *_currencyCode;
    NSArray *_reminderAmounts;
    unsigned long long _selectedReminderAmountIndex;
}

@property (weak, nonatomic) id<PKBalanceDetailsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceiveBalanceUpdate:(id)a1;
- (void)_handleActionSelected;
- (BOOL)shouldMapSection:(unsigned long long)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didUpdateWithTransitPassProperties:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_initializeReminderAmounts:(id)a0;
- (id)initWithBalance:(id)a0 forPass:(id)a1 balanceReminder:(id)a2 balanceName:(id)a3 currencyCode:(id)a4 associatedAction:(id)a5 paymentDataProvider:(id)a6 webService:(id)a7 style:(long long)a8;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (long long)_numberOfBalanceDetailsRowsEnabledForRowType:(unsigned long long)a0;
- (long long)_numberOfBalanceDetailsRowsEnabled;
- (unsigned long long)_balanceDetailsRowTypeForRowIndex:(long long)a0;
- (void)_handleReminderAmountChanged:(id)a0;
- (id)initWithTransitPassProperties:(id)a0 forPass:(id)a1 balanceReminder:(id)a2 associatedAction:(id)a3 paymentDataProvider:(id)a4 webService:(id)a5 style:(long long)a6;
- (id)initWithBalance:(id)a0 forPass:(id)a1 balanceReminder:(id)a2 associatedAction:(id)a3 paymentDataProvider:(id)a4 webService:(id)a5 style:(long long)a6;
- (void)performActionViewControllerDidCancel:(id)a0;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didUpdateBalanceReminder:(id)a1 forBalanceWithIdentifier:(id)a2;
- (void)performActionViewControllerDidPerformAction:(id)a0;
- (void)viewWillLayoutSubviews;

@end
