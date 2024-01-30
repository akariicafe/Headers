@class PKPass, NSString, PKPaymentPassAction, PKSelectedItemActionItem, PKPerformActionSelectItemExpiresHeader, UITableView, UITextField, NSDateFormatter;
@protocol PKPerformActionViewDelegate;

@interface PKPerformActionSelectItemView : UIView <UITableViewDelegate, UITableViewDataSource, PKPerformActionView> {
    PKPass *_pass;
    PKPaymentPassAction *_action;
    NSDateFormatter *_dateFormatter;
    PKSelectedItemActionItem *_selectedItem;
    UITableView *_tableView;
    PKPerformActionSelectItemExpiresHeader *_expiresHeader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPerformActionViewDelegate> delegate;
@property (readonly, nonatomic) UITextField *amountTextField;

- (id)pass;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)serviceProviderData;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)layoutSubviews;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)_showsExpirationSection;
- (id)_optionsSectionHeaderText;
- (id)_optionsSectionFooterText;
- (void)_addSubviews;
- (id)transactionCurrency;
- (void)saveLastInputValues;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithPass:(id)a0 action:(id)a1 paymentDataProvider:(id)a2;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)transactionAmount;

@end
