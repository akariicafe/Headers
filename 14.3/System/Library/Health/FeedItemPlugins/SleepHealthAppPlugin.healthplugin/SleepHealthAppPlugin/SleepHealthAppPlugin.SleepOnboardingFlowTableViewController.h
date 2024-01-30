@interface SleepHealthAppPlugin.SleepOnboardingFlowTableViewController : OBTableWelcomeController <UITableViewDelegate, HKSPSleepStoreObserver> {
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataSourceAdaptor;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ observerContext;
    void /* unknown type, empty encoding */ contentSizeKeyPath;
    void /* unknown type, empty encoding */ heightConstraint;
}

- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)sleepStore:(id)a0 sleepSettingsDidChange:(id)a1;
- (void)sleepStore:(id)a0 sleepScheduleDidChange:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)traitCollectionDidChange:(id)a0;

@end
