@interface NewsFeed.DebugFormatLayoutViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ tree;
    void /* unknown type, empty encoding */ editor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_heatmapToolbar;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)didTapOnOverlay:(id)a0;

@end
