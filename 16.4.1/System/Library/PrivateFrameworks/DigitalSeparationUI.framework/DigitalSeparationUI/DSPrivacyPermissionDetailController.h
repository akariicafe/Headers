@class NSArray, DSSensor, NSMutableArray;
@protocol DSPrivacyPermissionsDelegate;

@interface DSPrivacyPermissionDetailController : DSTableWelcomeController

@property (retain, nonatomic) NSArray *apps;
@property (retain, nonatomic) DSSensor *permission;
@property (retain, nonatomic) NSMutableArray *selectedApps;
@property (weak, nonatomic) id<DSPrivacyPermissionsDelegate> delegate;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)_updateButton;
- (void)back;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 permission:(id)a3 apps:(id)a4;
- (void)returnFromDetailAndResetPermissionForSelectedApps;
- (void)returnFromDetailAndStopAllSharingForPermission;
- (void)stopAllPressed;

@end
