@interface SleepHealthAppPlugin.SleepInternalSettingsViewController : UITableViewController <HKSwitchTableViewCellDelegate> {
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ onboardingStore;
}

- (void)switchCellValueChanged:(id)a0 value:(BOOL)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
