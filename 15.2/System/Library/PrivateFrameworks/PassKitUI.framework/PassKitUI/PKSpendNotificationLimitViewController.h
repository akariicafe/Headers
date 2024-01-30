@class NSString, PKCurrencyAmountSelectorOptionProvider, PKTableViewDiffableDataSource, PKCurrencyAmountSelectorCustomEntryItem;

@interface PKSpendNotificationLimitViewController : UITableViewController {
    NSString *_footerText;
    PKCurrencyAmountSelectorOptionProvider *_provider;
    PKTableViewDiffableDataSource *_dataSource;
    PKCurrencyAmountSelectorCustomEntryItem *_customEntryItem;
}

@property (copy, nonatomic) id /* block */ changeHandler;

- (void)viewDidLoad;
- (void)_doneButtonTapped:(id)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (void)_updateSnapshotAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_updateNavigationItemsIsEditing:(BOOL)a0;
- (void)_deleteOptionAtIndexPath:(id)a0;
- (id)initWithTitle:(id)a0 footerText:(id)a1 provider:(id)a2;

@end
