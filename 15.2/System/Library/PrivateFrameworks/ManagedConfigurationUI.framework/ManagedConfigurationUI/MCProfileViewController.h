@class NSArray, RMConfigurationsSpecifierProvider, MCUIProfile;
@protocol MCProfileViewControllerDelegate;

@interface MCProfileViewController : MCUITableViewController

@property (nonatomic) BOOL profileOffersReenroll;
@property (nonatomic) BOOL profileRemovable;
@property (retain, nonatomic) RMConfigurationsSpecifierProvider *rmSpecifierProvider;
@property (retain, nonatomic) NSArray *rmTableCells;
@property (readonly, nonatomic) MCUIProfile *UIProfile;
@property (nonatomic) long long profileViewMode;
@property (nonatomic) unsigned long long installProfileSource;
@property (nonatomic) BOOL installComplete;
@property (weak, nonatomic) id<MCProfileViewControllerDelegate> profileViewControllerDelegate;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_setup;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)_poll;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 estimatedHeightForFooterInSection:(long long)a1;
- (void)setProfile:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithStyle:(long long)a0 profile:(id)a1 profileViewMode:(long long)a2;
- (id)initWithProfile:(id)a0 viewMode:(long long)a1;
- (BOOL)_showManagedPayloads;
- (void)_rmConfigsChanged:(id)a0;
- (void)_tableChanged:(id)a0;
- (BOOL)_delegateCanUpdate;
- (BOOL)_delegateCanRemove;
- (BOOL)_delegateDisplayPoll;
- (BOOL)_delegateCanPoll;
- (BOOL)_isSectionPopulated:(long long)a0;
- (id)_tableView:(id)a0 profileCellForRowAtIndexPath:(id)a1;
- (id)_tableView:(id)a0 elevatedPayloadCellForRowAtIndexPath:(id)a1;
- (id)_tableView:(id)a0 buttonForRowAtIndexPath:(id)a1 text:(id)a2 color:(id)a3;
- (id)_tableView:(id)a0 removeButtonForRowAtIndexPath:(id)a1;
- (int)_profileDetailsModeForElevatedPayloadAtIndexPath:(id)a0;
- (void)_updateProfile;
- (void)_removeProfile;
- (double)_heightForHeaderFooterInSection:(long long)a0;
- (id)_emptyViewForHeaderFooter;
- (BOOL)_shouldShowUpdateButton;
- (BOOL)_shouldShowPollButton;
- (BOOL)_shouldShowRemoveButton;
- (id)_tableView:(id)a0 profileMoreDetailsCellForRowAtIndexPath:(id)a1;
- (id)initWithMDMProfileForRMAccount;

@end
