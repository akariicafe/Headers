@class HMHome, NSString, HUMediaAccessControlEditorModuleController;

@interface HUMediaAccessControlEditorTableViewController : HUItemTableViewController <HUMediaAccessControlEditorModuleControllerDelegate>

@property (readonly, nonatomic) HUMediaAccessControlEditorModuleController *accessControlEditorModuleController;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)initWithHome:(id)a0;
- (void)_updateFooterView:(id)a0 forSection:(long long)a1;
- (void)accessControlEditorModuleController:(id)a0 didUpdateAccessControl:(id)a1;
- (id)itemModuleControllers;

@end
