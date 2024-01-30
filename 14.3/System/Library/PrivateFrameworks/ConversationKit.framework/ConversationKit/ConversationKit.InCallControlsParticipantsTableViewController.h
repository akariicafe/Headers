@interface ConversationKit.InCallControlsParticipantsTableViewController : UITableViewController {
    void /* unknown type, empty encoding */ capabilitiesChecker;
    void /* unknown type, empty encoding */ participants;
    void /* unknown type, empty encoding */ isLegacy;
    void /* unknown type, empty encoding */ groupName;
    void /* unknown type, empty encoding */ mode;
    void /* unknown type, empty encoding */ participantsViewControllerDelegate;
    void /* unknown type, empty encoding */ inCallControlsParticipantsTableViewControllerDelegate;
}

- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)handleContentSizeCategoryDidChange:(id)a0;

@end
