@interface HealthRecordsUI.OnboardingTileViewController : HKTableViewController {
    void /* unknown type, empty encoding */ profile;
}

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)closeButtonTapped;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)initWithUsingInsetStyling:(BOOL)a0;
- (void)tapToRadar:(id)a0;

@end
