@interface HealthExperienceUI.SectionedTableViewAdaptor : NSObject <UITableViewDataSource> {
    void /* unknown type, empty encoding */ dataProvider;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ tableView;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
