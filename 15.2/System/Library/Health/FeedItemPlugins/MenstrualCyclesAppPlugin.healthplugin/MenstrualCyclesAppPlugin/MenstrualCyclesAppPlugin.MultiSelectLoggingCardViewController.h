@interface MenstrualCyclesAppPlugin.MultiSelectLoggingCardViewController : MenstrualCyclesAppPlugin.LoggingCardViewController <UITableViewDelegatePrivate, UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ reuseIdentifier;
    void /* unknown type, empty encoding */ tableHeader;
    void /* unknown type, empty encoding */ checkedIndexPaths;
}

- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewLayoutMarginsDidChange;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
