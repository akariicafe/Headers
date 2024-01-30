@interface HKMedicalIDEmergencyAccessLearnMoreTableViewController : UITableViewController

- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)_titleForHeaderInSection:(long long)a0;
- (double)tableView:(id)a0 estimatedHeightForHeaderInSection:(long long)a1;
- (void)didTapDone:(id)a0;
- (id)_bodyTextForIndexPath:(id)a0;

@end
