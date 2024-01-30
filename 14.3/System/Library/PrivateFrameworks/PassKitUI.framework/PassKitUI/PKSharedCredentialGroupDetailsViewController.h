@class PKSharedCredentialsGroupController, NSString, PKAvatarHeaderView, CNContact, PKSharedCredentialGroup;

@interface PKSharedCredentialGroupDetailsViewController : UITableViewController <PKSharedCredentialsGroupControllerDelegate> {
    PKAvatarHeaderView *_headerView;
    CNContact *_contact;
    PKSharedCredentialGroup *_group;
    PKSharedCredentialsGroupController *_groupController;
}

@property (nonatomic, getter=isRevokingGroup) BOOL revokingGroup;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)credentialGroupControllerDidUpdateGroups:(id)a0;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)infoButton;
- (void)updateHeaderWithGroup:(id)a0;
- (void)showActivityIndicator:(BOOL)a0 withCell:(id)a1;
- (void)presentAlertForError:(id)a0;
- (void)showContactDetailsViewController;
- (void)updateWithGroup:(id)a0;
- (id)initWithGroup:(id)a0 groupController:(id)a1 style:(long long)a2;
- (void)viewDidLoad;

@end
