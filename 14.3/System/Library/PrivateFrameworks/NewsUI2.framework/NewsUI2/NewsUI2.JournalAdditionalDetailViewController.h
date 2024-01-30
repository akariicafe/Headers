@interface NewsUI2.JournalAdditionalDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ headline;
}

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)doDismiss;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
