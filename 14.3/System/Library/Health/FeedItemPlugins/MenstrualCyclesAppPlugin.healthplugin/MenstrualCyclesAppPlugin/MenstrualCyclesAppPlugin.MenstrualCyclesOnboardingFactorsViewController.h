@interface MenstrualCyclesAppPlugin.MenstrualCyclesOnboardingFactorsViewController : MenstrualCyclesOnboardingTableWelcomeController <UITableViewDelegate> {
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ onboardingVersion;
    void /* unknown type, empty encoding */ nextButton;
    void /* unknown type, empty encoding */ scaleFactorConfiguration;
    void /* unknown type, empty encoding */ contentSizeKeyPath;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataSourceAdaptor;
    void /* unknown type, empty encoding */ mutableDataSource;
    void /* unknown type, empty encoding */ tableViewHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_heightAnchor;
}

- (id)initWithTitle:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)cancelButtonTapped:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
