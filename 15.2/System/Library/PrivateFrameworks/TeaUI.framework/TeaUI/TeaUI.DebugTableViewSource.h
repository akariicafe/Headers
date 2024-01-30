@interface TeaUI.DebugTableViewSource : NSObject <UITableViewDataSource, UITableViewDelegate> {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ controller;
}

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
