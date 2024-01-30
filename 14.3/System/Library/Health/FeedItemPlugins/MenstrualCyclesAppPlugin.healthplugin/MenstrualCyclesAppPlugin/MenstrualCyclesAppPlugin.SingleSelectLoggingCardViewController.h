@interface MenstrualCyclesAppPlugin.SingleSelectLoggingCardViewController : MenstrualCyclesAppPlugin.LoggingCardViewController <UITableViewDelegatePrivate, UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ checkedIndex;
    void /* unknown type, empty encoding */ dataSource;
}

- (BOOL)tableView:(id)a0 shouldDrawTopSeparatorForSection:(long long)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end
