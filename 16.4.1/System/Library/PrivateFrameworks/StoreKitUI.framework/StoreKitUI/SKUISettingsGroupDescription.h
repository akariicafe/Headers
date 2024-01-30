@class SKUISettingsGroupController, SKUISettingsObjectStore, SKUISettingsGroupsDescription, SKUIClientContext, SKUIGroupViewElement, SKUISettingsContext, NSMutableSet, SKUISettingsHeaderFooterDescription;

@interface SKUISettingsGroupDescription : NSObject {
    NSMutableSet *_editableSettings;
    SKUISettingsHeaderFooterDescription *_footerDescription;
    SKUISettingsHeaderFooterDescription *_headerDescription;
    SKUISettingsObjectStore *_settingDescriptions;
    SKUISettingsContext *_settingsContext;
}

@property (readonly, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) SKUISettingsGroupController *controller;
@property (weak, nonatomic) SKUISettingsGroupsDescription *parent;
@property (retain, nonatomic) SKUIGroupViewElement *viewElement;

- (BOOL)isEmpty;
- (BOOL)hasHeader;
- (void)reloadData;
- (unsigned long long)index;
- (void)recycle;
- (id)description;
- (void).cxx_destruct;
- (void)_presentViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)dispatchUpdate:(id)a0;
- (id)indexPathForSettingDescription:(id)a0;
- (id)initWithParent:(id)a0 settingsContext:(id)a1;
- (void)_dismissViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_dispatchUpdateForSettingDescription:(id)a0 updateType:(long long)a1;
- (void)_updatedEditsValid;
- (void)addSettingDescription:(id)a0;
- (void)addSettingViewElement:(id)a0;
- (void)addSibling:(id)a0;
- (void)deleteSettingDescription:(id)a0;
- (void)deleteSettingsGroup;
- (id)editableSettingDescriptions;
- (id)footerDescription;
- (BOOL)hasEditableSettingDescriptions;
- (BOOL)hasFooter;
- (BOOL)hasNoVisibleSettings;
- (id)headerDescription;
- (void)hideSettingDescription:(id)a0;
- (void)hideSettingsGroup;
- (BOOL)isSettingDescriptionHidden:(id)a0;
- (id)newSiblingWithClass:(Class)a0;
- (unsigned long long)numberOfSettings;
- (void)reloadSettingDescription:(id)a0;
- (void)requestLayoutForWidth:(double)a0 context:(id)a1;
- (void)revealSettingDescription:(id)a0;
- (void)revealSettingsGroup;
- (void)setFooterDescription:(id)a0;
- (void)setFooterViewElement:(id)a0;
- (void)setHeaderDescription:(id)a0;
- (void)setHeaderViewElement:(id)a0;
- (id)settingDescriptionAtIndex:(unsigned long long)a0;
- (id)viewElementForSettingAtIndex:(unsigned long long)a0;

@end
