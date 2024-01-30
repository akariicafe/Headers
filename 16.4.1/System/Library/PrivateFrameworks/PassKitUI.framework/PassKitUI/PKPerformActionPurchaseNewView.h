@class PKPaymentPassAction, NSString, UITextField, UITableView, PKPurchaseNewActionItem, PKPass;
@protocol PKPerformActionViewDelegate;

@interface PKPerformActionPurchaseNewView : UIView <UITableViewDelegate, UITableViewDataSource, PKPerformActionView> {
    PKPass *_pass;
    PKPaymentPassAction *_action;
    PKPurchaseNewActionItem *_purchaseNewItem;
    long long _textAlignment;
    UITableView *_tableView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKPerformActionViewDelegate> delegate;
@property (readonly, nonatomic) UITextField *amountTextField;

- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)pass;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)layoutSubviews;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)transactionAmount;
- (id)transactionCurrency;
- (void)_addSubviews;
- (id)_optionsSectionFooterText;
- (id)_optionsSectionHeaderText;
- (void)fetchServiceProviderDataWithCompletion:(id /* block */)a0;
- (id)initWithPass:(id)a0 action:(id)a1 paymentDataProvider:(id)a2;
- (void)saveLastInputValues;

@end
