@class HMHome, NSSet, HUTriggerConditionEditorExpandingSectionModule, HUTriggerCustomConditionEditorSectionModule, HFConditionCollection;

@interface HUTriggerConditionEditorItemModule : HFItemModule

@property (retain, nonatomic) HUTriggerConditionEditorExpandingSectionModule *timeConditionModule;
@property (retain, nonatomic) HUTriggerConditionEditorExpandingSectionModule *locationConditionModule;
@property (retain, nonatomic) HUTriggerCustomConditionEditorSectionModule *customConditionsModule;
@property (retain, nonatomic) NSSet *itemProviders;
@property (readonly, nonatomic) HFConditionCollection *conditionCollection;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSSet *disallowedConditionTypes;

- (void).cxx_destruct;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (void)_buildItemProviders;
- (id)initWithItemUpdater:(id)a0 home:(id)a1 conditionCollection:(id)a2 disallowedConditionTypes:(id)a3;
- (id)conditionForOptionItem:(id)a0;
- (id)_allSectionModules;
- (id)_moduleForConditionOptionItem:(id)a0;
- (id)_sectionModuleForItem:(id)a0;
- (void)_reloadConditionsFromConditionCollection;
- (id)_expandingSectionModuleForConditionType:(unsigned long long)a0;
- (id)_expandingSectionModules;
- (BOOL)_isConditionOptionItem:(id)a0 ofType:(unsigned long long)a1;
- (void)_reloadConditionForExpandingSectionModule:(id)a0 remainingConditions:(id)a1;
- (BOOL)isConditionOptionItem:(id)a0;
- (BOOL)doesConditionOptionItemRequireInitialConfiguration:(id)a0;
- (void)updateCondition:(id)a0 forOptionItem:(id)a1;
- (unsigned long long)conditionTypeForItem:(id)a0;
- (void)conditionCollectionDidChange;
- (BOOL)shouldShowConditionOptionsForType:(unsigned long long)a0;
- (void)setShowConditionOptions:(BOOL)a0 forType:(unsigned long long)a1;
- (void)setSelectedConditionOptionItem:(id)a0 forType:(unsigned long long)a1;
- (BOOL)isShowConditionOptionsItem:(id)a0;
- (void)setCustomConditionEnabled:(BOOL)a0 forItem:(id)a1;
- (BOOL)isCustomConditionSwitchItem:(id)a0;

@end
