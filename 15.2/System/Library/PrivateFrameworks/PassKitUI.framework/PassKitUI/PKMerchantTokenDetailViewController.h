@class PKMerchantToken;

@interface PKMerchantTokenDetailViewController : PKSectionTableViewController {
    PKMerchantToken *_merchantToken;
}

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)shouldMapSection:(unsigned long long)a0;
- (id)_headerCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)_managePaymentMethodCellForTableView:(id)a0 atIndexPath:(id)a1;
- (id)initWithMerchantToken:(id)a0;

@end
