@interface NewsFeed.DebugFormatMetricViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ editor;
    void /* unknown type, empty encoding */ unsortedSections;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ coverViewManager;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)onScrollToSelectedMetric;

@end
