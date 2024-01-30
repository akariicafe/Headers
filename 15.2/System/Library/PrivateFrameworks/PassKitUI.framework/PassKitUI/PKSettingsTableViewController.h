@class PKSettingsRowDiffableDataSource;

@interface PKSettingsTableViewController : UITableViewController {
    PKSettingsRowDiffableDataSource *_dataSource;
}

- (void)viewDidLoad;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)sections;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)applyConfiguration:(id)a0 animated:(BOOL)a1;
- (long long)indexOfSectionWithIdentifier:(id)a0;

@end
