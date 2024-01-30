@interface NewsFeed.DebugFormatUploadConfirmViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ editor;
    void /* unknown type, empty encoding */ uploadService;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ results;
    void /* unknown type, empty encoding */ $__lazy_storage_$_versionLabel;
}

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)doDismiss;
- (void)doUploadWithSender:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
