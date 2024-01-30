@class NSArray, DSApp, NSMutableArray;
@protocol DSPrivacyPermissionsDelegate;

@interface DSPrivacyAppDetailController : DSTableWelcomeController

@property (retain, nonatomic) NSArray *sortedPermissions;
@property (retain, nonatomic) DSApp *app;
@property (retain, nonatomic) NSMutableArray *selectedPermissions;
@property (weak, nonatomic) id<DSPrivacyPermissionsDelegate> delegate;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)_updateButton;
- (void)back;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 app:(id)a3;
- (void)returnFromDetailAndDeleteApp;
- (void)returnFromDetailAndRevokeSelectedPermissions;

@end
