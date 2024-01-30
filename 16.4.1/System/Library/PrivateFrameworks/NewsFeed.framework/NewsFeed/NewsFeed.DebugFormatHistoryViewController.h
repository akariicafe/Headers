@interface NewsFeed.DebugFormatHistoryViewController : UIViewController <UITableViewDataSource> {
    void /* unknown type, empty encoding */ editor;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ tableView;
}

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;

@end
