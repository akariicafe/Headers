@interface SleepHealthAppPlugin.SleepOnboardingFlowTableViewController : SleepHealthAppPlugin.SleepTableWelcomeController <UITableViewDelegate, HKSPSleepStoreObserver> {
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataSourceAdaptor;
    void /* unknown type, empty encoding */ dataSource;
}

- (void)sleepStore:(id)a0 sleepScheduleDidChange:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)sleepStore:(id)a0 sleepSettingsDidChange:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)dealloc;

@end
