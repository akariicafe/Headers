@class NSString, SKUIClientContext, NSMapTable, SKUISettingsObjectStore, SKUISettingsContext;
@protocol SKUISettingsGroupsDescriptionDelegate;

@interface SKUISettingsGroupsDescription : NSObject <SKUISettingsGroupControllerDelegate> {
    NSMapTable *_controllers;
    SKUISettingsObjectStore *_groupDescriptions;
    SKUISettingsContext *_settingsContext;
}

@property (weak, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUISettingsGroupsDescriptionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (void)recycle;
- (void)_presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)numberOfGroups;
- (void)_dismissViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dispatchUpdate:(id)a0;
- (void)_updatedEditsValid;
- (void)deleteSettingsGroupDescription:(id)a0;
- (void)hideSettingsGroupDescription:(id)a0;
- (unsigned long long)indexOfSettingsGroupDescription:(id)a0;
- (void)revealSettingsGroupDescription:(id)a0;
- (BOOL)hasEditableSettingDescriptions;
- (void)requestLayoutForWidth:(double)a0 context:(id)a1;
- (id)owningViewControllerForSettingsGroupController:(id)a0;
- (id)settingDescriptionAtIndexPath:(id)a0;
- (unsigned long long)numberOfSettingsInGroupAtIndex:(unsigned long long)a0;
- (id)footerDescriptionForGroupAtIndex:(unsigned long long)a0;
- (BOOL)shouldShowHeaderForGroupAtIndex:(unsigned long long)a0;
- (id)headerDescriptionForGroupAtIndex:(unsigned long long)a0;
- (BOOL)shouldShowFooterForGroupAtIndex:(unsigned long long)a0;
- (id)createEditTransaction;
- (id)initWithDelegate:(id)a0 settingsContext:(id)a1;
- (void)addSettingsGroupWithViewElement:(id)a0;
- (void)settingsGroupController:(id)a0 reloadSettingDescription:(id)a1;
- (id)settingsGroupController:(id)a0 viewForSettingDescription:(id)a1;
- (void)_addSettingsGroupWithViewElement:(id)a0 controller:(id)a1;
- (id)_gatherEditableSettings;
- (void)_dispatchUpdateForSettingsGroupDescription:(id)a0 atIndex:(unsigned long long)a1 withUpdateType:(long long)a2;
- (id)_controllerForGroupElement:(id)a0;
- (void)deleteSettingAtIndexPath:(id)a0;
- (id)viewElementForSettingAtIndexPath:(id)a0;

@end
