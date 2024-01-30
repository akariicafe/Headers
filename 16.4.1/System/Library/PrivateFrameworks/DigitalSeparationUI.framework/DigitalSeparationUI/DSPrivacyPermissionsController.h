@class NSArray, DSTableView, NSMutableSet, NSString, DSAppSharing;
@protocol DSNavigationDelegate;

@interface DSPrivacyPermissionsController : DSTableWelcomeController <DSPrivacyPermissionsDelegate, DSController>

@property (retain, nonatomic) DSAppSharing *appSharing;
@property (retain, nonatomic) NSArray *apps;
@property (retain, nonatomic) NSArray *filteredApps;
@property (nonatomic) BOOL isFiltered;
@property (retain, nonatomic) NSMutableSet *selectedApps;
@property (nonatomic) unsigned long long scope;
@property (retain, nonatomic) NSArray *sensors;
@property (retain, nonatomic) NSMutableSet *selectedSensors;
@property (retain, nonatomic) NSArray *filteredSensors;
@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (retain, nonatomic) DSTableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateTitle;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateSearchResultsForSearchController:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)reloadData;
- (void)viewDidLoad;
- (id)init;
- (void)searchBar:(id)a0 selectedScopeButtonIndexDidChange:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)_updateButton;
- (void)addUnsharedPermissions:(id)a0 andApps:(id)a1;
- (void)handleResetErrors:(id)a0 pushNextPane:(BOOL)a1;
- (void)_addLinkButton;
- (void)_pushNextPane;
- (void)collectPermissionsByType;
- (void)filterContentForSearchText:(id)a0 category:(long long)a1;
- (void)resetAllPermissions;
- (void)resetSelectedPermissions;
- (void)returnFromDetailAndDeleteApp:(id)a0;
- (void)returnFromDetailAndResetPermissionForSelectedApps:(id)a0 permission:(id)a1;
- (void)returnFromDetailAndResetSelectedPermissions:(id)a0 forApp:(id)a1;
- (void)returnFromDetailAndStopAllSharingForPermission:(id)a0;

@end
