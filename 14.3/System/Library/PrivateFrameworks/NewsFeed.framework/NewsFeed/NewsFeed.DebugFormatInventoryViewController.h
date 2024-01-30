@interface NewsFeed.DebugFormatInventoryViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UISearchResultsUpdating> {
    void /* unknown type, empty encoding */ packages;
    void /* unknown type, empty encoding */ columnOptions;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ groupViewController;
    void /* unknown type, empty encoding */ versionLabel;
    void /* unknown type, empty encoding */ coverViewManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_uploadBarButtonItem;
    void /* unknown type, empty encoding */ $__lazy_storage_$_updatedLabel;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ editor;
}

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)doDismiss;
- (void)doCompileUpload;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
