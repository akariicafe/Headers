@class NSString, PKCurrencyAmountSelectorOptionProvider, PKTableViewDiffableDataSource, PKCurrencyAmountSelectorCustomEntryItem;

@interface PKSpendNotificationLimitViewController : UITableViewController {
    NSString *_footerText;
    PKCurrencyAmountSelectorOptionProvider *_provider;
    PKTableViewDiffableDataSource *_dataSource;
    PKCurrencyAmountSelectorCustomEntryItem *_customEntryItem;
}

@property (copy, nonatomic) id /* block */ changeHandler;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (void)_doneButtonTapped:(id)a0;
- (void)_updateSnapshotAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_deleteOptionAtIndexPath:(id)a0;
- (void)_updateNavigationItemsIsEditing:(BOOL)a0;
- (id)initWithTitle:(id)a0 footerText:(id)a1 provider:(id)a2;

@end
