@interface HealthExposureNotificationUI.OnboardingRegionSelectionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ flow;
    void /* unknown type, empty encoding */ selectionType;
    void /* unknown type, empty encoding */ statusView;
    void /* unknown type, empty encoding */ regionTableView;
    void /* unknown type, empty encoding */ regionsProvider;
}

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)didTapDone;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)didTapCancel;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;

@end
