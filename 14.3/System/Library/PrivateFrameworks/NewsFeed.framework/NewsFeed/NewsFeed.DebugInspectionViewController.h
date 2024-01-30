@interface NewsFeed.DebugInspectionViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ inspector;
    void /* unknown type, empty encoding */ feedItem;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ sections;
}

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)doDismiss;
- (void)doTapToRadar;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
