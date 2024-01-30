@interface SleepHealthAppPlugin.SleepInternalSettingsViewController : UITableViewController <HKSwitchTableViewCellDelegate, HKSHQuickScheduleManagementViewControllerDelegateInternal> {
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ onboardingManager;
}

- (void)switchCellValueChanged:(id)a0 value:(BOOL)a1;
- (void)quickScheduleManagementViewController:(id)a0 didSave:(id)a1;
- (void)quickScheduleManagementViewController:(id)a0 shouldPresent:(id)a1;
- (void)quickScheduleManagementViewControllerDidCancel:(id)a0;
- (void)quickScheduleManagementViewControllerWillSave:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
