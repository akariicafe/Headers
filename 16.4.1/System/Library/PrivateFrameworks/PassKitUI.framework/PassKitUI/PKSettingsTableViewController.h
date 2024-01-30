@class PKSettingsTableViewConfiguration, PKTableViewDiffableDataSource;

@interface PKSettingsTableViewController : UITableViewController {
    PKTableViewDiffableDataSource *_dataSource;
    PKSettingsTableViewConfiguration *_currentConfiguration;
}

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (id)sections;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)applyConfiguration:(id)a0 animated:(BOOL)a1;
- (long long)indexOfSectionWithIdentifier:(id)a0;

@end
