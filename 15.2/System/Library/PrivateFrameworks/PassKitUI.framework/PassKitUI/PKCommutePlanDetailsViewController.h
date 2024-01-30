@class NSString, NSArray, PKPaymentPassAction, PKPaymentWebService, NSDateComponentsFormatter, PKTransitBalanceModel, PKPaymentPass, PKTransitCommutePlan;
@protocol PKPaymentDataProvider;

@interface PKCommutePlanDetailsViewController : PKSectionTableViewController <PKPerformActionViewControllerDelegate, PKPaymentDataProviderDelegate> {
    long long _style;
    NSArray *_fields;
    PKPaymentPass *_pass;
    id<PKPaymentDataProvider> _paymentDataProvider;
    PKPaymentWebService *_webService;
    NSArray *_reminderIntervals;
    unsigned long long _selectedReminderIntervalsIndex;
    BOOL _shouldLoadReminderInterval;
    PKPaymentPassAction *_action;
    NSDateComponentsFormatter *_timeIntervalFormatter;
    BOOL _canShowReminders;
    PKTransitBalanceModel *_balanceModel;
    PKTransitCommutePlan *_commutePlan;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceivePlanUpdate:(id)a1;
- (void)viewWillLayoutSubviews;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didReceiveBalanceUpdate:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)paymentPassWithUniqueIdentifier:(id)a0 didUpdateWithTransitPassProperties:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)shouldMapSection:(unsigned long long)a0;
- (void)performActionViewControllerDidCancel:(id)a0;
- (void)performActionViewControllerDidPerformAction:(id)a0;
- (id)_commutePlanBalanceIdentifiers;
- (void)_updateSelectedBalanceReminderWithBalanceReminder:(id)a0;
- (void)_updateSelectedReminderIntervalsIndexWithReminder:(id)a0;
- (void)_reloadBalance;
- (void)_reloadChangedIndexPathsWithOldIndex:(unsigned long long)a0 newIndex:(unsigned long long)a1 inSection:(unsigned long long)a2;
- (long long)_numberOfCommutePlanDetailsRowsEnabledForRowType:(unsigned long long)a0;
- (long long)_numberOfCommutePlanDetailsRowsEnabled;
- (unsigned long long)_commutePlanDetailsRowTypeForRowIndex:(long long)a0;
- (void)_handleActionSelected;
- (void)_handleReminderIntervalChanged:(long long)a0;
- (id)initWithCommutePlan:(id)a0 associatedAction:(id)a1 forPass:(id)a2 paymentDataProvider:(id)a3 webService:(id)a4 style:(long long)a5;

@end
