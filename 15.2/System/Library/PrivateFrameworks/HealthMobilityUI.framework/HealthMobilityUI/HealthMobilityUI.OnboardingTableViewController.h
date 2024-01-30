@interface HealthMobilityUI.OnboardingTableViewController : OBTableWelcomeController <UITableViewDelegate> {
    void /* unknown type, empty encoding */ dataSourceAdaptor;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ observerContext;
    void /* unknown type, empty encoding */ contentSizeKeyPath;
    void /* unknown type, empty encoding */ heightConstraint;
    void /* unknown type, empty encoding */ contentSizeDidChangeBlock;
}

- (void)viewDidLayoutSubviews;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)traitCollectionDidChange:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)dealloc;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
