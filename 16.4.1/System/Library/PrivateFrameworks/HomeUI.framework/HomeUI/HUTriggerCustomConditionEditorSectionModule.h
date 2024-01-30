@class HMHome, NSSet, NSString, NSMutableSet, HFTransformItemProvider, HFConditionItemProvider;

@interface HUTriggerCustomConditionEditorSectionModule : HFItemModule <HUTriggerConditionEditorSectionModule>

@property (readonly, nonatomic) HFConditionItemProvider *sourceConditionItemProvider;
@property (readonly, nonatomic) HFTransformItemProvider *itemProvider;
@property (retain, nonatomic) NSMutableSet *mutableEnabledConditions;
@property (retain, nonatomic) NSMutableSet *mutableDisabledConditions;
@property (readonly, nonatomic) NSSet *enabledConditions;
@property (readonly, nonatomic) NSSet *disabledConditions;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) unsigned long long conditionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)itemProviders;
- (void)_buildItemProviders;
- (id)buildSectionsWithDisplayedItems:(id)a0;
- (id)conditionForItem:(id)a0;
- (id)initWithItemUpdater:(id)a0;
- (id)initWithItemUpdater:(id)a0 home:(id)a1;
- (BOOL)isConditionEnabled:(id)a0;
- (id)itemForCondition:(id)a0;
- (void)setConditionEnabled:(BOOL)a0 forCondition:(id)a1;
- (void)updateEnabledConditions:(id)a0 disabledConditions:(id)a1;

@end
