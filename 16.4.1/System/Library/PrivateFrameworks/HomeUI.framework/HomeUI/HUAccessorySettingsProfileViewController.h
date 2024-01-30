@class NSString, HUAccessorySettingsProfileModule, HFAccessorySettingGroupItem, HUAccessorySettingsProfileModuleController;

@interface HUAccessorySettingsProfileViewController : HUItemTableViewController <HUAccessorySettingsProfileModuleControllerDelegate, HUAccessorySettingsProfileModuleDelegate, HUAccessorySettingsDetailsViewControllerProtocol>

@property (retain, nonatomic) HUAccessorySettingsProfileModule *profileModule;
@property (retain, nonatomic) HUAccessorySettingsProfileModuleController *profileModuleController;
@property (readonly, copy, nonatomic) HFAccessorySettingGroupItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)accessorySettingsProfileModuleController:(id)a0 needsNavigationToController:(id)a1;
- (id)hu_preloadContent;
- (id)initWithAccessoryGroupItem:(id)a0;
- (id)itemModuleControllers;
- (id)settingsProfileModule:(id)a0 wantsProfileItemDeleted:(id)a1;

@end
