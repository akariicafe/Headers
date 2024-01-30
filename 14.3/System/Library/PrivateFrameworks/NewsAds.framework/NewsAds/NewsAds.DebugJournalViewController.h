@interface NewsAds.DebugJournalViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ commandCenter;
    void /* unknown type, empty encoding */ journal;
    void /* unknown type, empty encoding */ presentationOptions;
    void /* unknown type, empty encoding */ tableView;
}

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)handleDone;

@end
