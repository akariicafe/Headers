@interface MenstrualCyclesAppPlugin.MenstrualCyclesOnboardingPeriodTrackingViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, HKSwitchTableViewCellDelegate> {
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ tableViewHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_heightAnchor;
}

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)switchCellValueChanged:(id)a0 value:(BOOL)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)nextButtonTapped:(id)a0;
- (void)cancelButtonTapped:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)viewDidLoad;

@end
