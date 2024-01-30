@interface MenstrualCyclesAppPlugin.MenstrualCyclesOnboardingFertilityTrackingViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, HKSwitchTableViewCellDelegate> {
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ tableViewHeight;
    void /* unknown type, empty encoding */ $__lazy_storage_$_heightAnchor;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)switchCellValueChanged:(id)a0 value:(BOOL)a1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)cancelButtonTapped:(id)a0;
- (void)dealloc;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 adoptTableViewScrollView:(BOOL)a3;
- (void)nextButtonTapped:(id)a0;

@end
