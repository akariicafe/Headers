@interface NewsFeed.DebugFormatAssetViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ editor;
    void /* unknown type, empty encoding */ assetManager;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ placeholderImage;
    void /* unknown type, empty encoding */ textImage;
}

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
