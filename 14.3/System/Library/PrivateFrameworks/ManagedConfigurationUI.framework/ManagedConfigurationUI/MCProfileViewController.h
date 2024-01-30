@class MCUIProfile;
@protocol MCProfileViewControllerDelegate;

@interface MCProfileViewController : MCUITableViewController

@property (nonatomic) BOOL profileOffersReenroll;
@property (nonatomic) BOOL profileRemovable;
@property (readonly, nonatomic) MCUIProfile *UIProfile;
@property (nonatomic) long long profileViewMode;
@property (nonatomic) unsigned long long installProfileSource;
@property (nonatomic) BOOL installComplete;
@property (weak, nonatomic) id<MCProfileViewControllerDelegate> profileViewControllerDelegate;

- (void)setProfile:(id)a0;
- (void)_setup;
- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0 profile:(id)a1 profileViewMode:(long long)a2;
- (void)_profileChanged:(id)a0;
- (BOOL)_showManagedPayloads;
- (BOOL)_delegateCanUpdate;
- (BOOL)_delegateCanRemove;
- (BOOL)_shouldShowUpdateButton;
- (BOOL)_shouldShowRemoveButton;
- (void)_updateProfile;
- (void)_removeProfile;

@end
