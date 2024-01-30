@class CNContactStore, NSArray, UIViewController, UITableView, NSString, NSIndexPath, HMHome;
@protocol HUUserListManagerTableDelegate;

@interface HUUserListTableManager : NSObject <HUAddPeopleViewControllerDelegate, HMHomeDelegatePrivate, UITableViewDataSource, UITableViewDelegate>

@property (nonatomic) BOOL allowsEditing;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (weak, nonatomic) id<HUUserListManagerTableDelegate> delegate;
@property (retain, nonatomic) NSArray *users;
@property (retain, nonatomic) NSArray *invitations;
@property (retain, nonatomic) HMHome *home;
@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) BOOL editing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)home:(id)a0 didAddUser:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)home:(id)a0 didUpdateStateForOutgoingInvitations:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)home:(id)a0 didRemoveUser:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)sortedUsers;
- (id)sortedInvitations;
- (void)_stopSharingWithCompletion:(id /* block */)a0;
- (void)_removeUser:(id)a0 completion:(id /* block */)a1;
- (void)_removeInvitation:(id)a0 completion:(id /* block */)a1;
- (void)_didRemoveUser:(id)a0;
- (void)_didAddUser:(id)a0;
- (void)_didRemoveInvitation:(id)a0;
- (void)_didInsertAtIndex:(unsigned long long)a0;
- (void)_didRemoveAtIndex:(unsigned long long)a0;
- (long long)sectionForPeople;
- (id)_contactForUser:(id)a0;
- (void)_configurePersonViewController:(id)a0 invitation:(id)a1 isRemovable:(BOOL)a2;
- (void)_reinvite;
- (void)_stopSharing;
- (void)_didReloadAtIndex:(unsigned long long)a0;
- (long long)numberOfDataRows;
- (BOOL)_indexPathIsInviteUser:(id)a0;
- (id)_stringForInvitationState:(long long)a0;
- (id)_displayNameForUser:(id)a0;
- (id)_personViewControllerForUser:(id)a0 invitation:(id)a1;
- (void)updateEditingRows;
- (void)addPeopleViewControllerDidCancel:(id)a0;
- (void)addPeopleViewController:(id)a0 didSendInvitations:(id)a1;
- (id)initWithTableView:(id)a0 viewController:(id)a1;
- (id)_monogramForUser:(id)a0;

@end
