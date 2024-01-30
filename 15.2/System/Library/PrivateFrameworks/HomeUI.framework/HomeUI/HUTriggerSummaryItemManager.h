@class HFItem, NSArray, HUTriggerDurationItemModule, HFTriggerBuilder, HUTriggerConditionEditorItemModule, HFStaticItemProvider, HUTriggerActionFlow, HFStaticItem, HUTriggerEventsItemModule, NSSet, HUTriggerActionSetsItemModule, HUTriggerMediaItemModule;

@interface HUTriggerSummaryItemManager : HFItemManager

@property (retain, nonatomic) HFTriggerBuilder *triggerBuilder;
@property (retain, nonatomic) HUTriggerActionFlow *currentFlow;
@property (readonly, nonatomic) NSArray *overviewItemModules;
@property (retain, nonatomic) HFItem *enableItem;
@property (retain, nonatomic) HFItem *createActionButtonItem;
@property (retain, nonatomic) HFItem *testTriggerItem;
@property (retain, nonatomic) HFItem *deleteTriggerItem;
@property (retain, nonatomic) HFStaticItem *namingRowItem;
@property (retain, nonatomic) HUTriggerEventsItemModule *eventsModule;
@property (retain, nonatomic) HUTriggerDurationItemModule *durationModule;
@property (retain, nonatomic) HUTriggerActionSetsItemModule *actionsModule;
@property (retain, nonatomic) HUTriggerMediaItemModule *mediaModule;
@property (retain, nonatomic) HUTriggerConditionEditorItemModule *conditionModule;
@property (retain, nonatomic) HFStaticItemProvider *unsupportedItemProvider;
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (copy, nonatomic) NSSet *prioritizedHomeObjects;

- (void).cxx_destruct;
- (BOOL)_isInEditMode;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_buildItemModulesForHome:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (id)initWithTriggerBuilder:(id)a0 flow:(id)a1 delegate:(id)a2;
- (id)triggerCurrentDisplayedName;
- (void)triggerBuilderDidChange;
- (long long)actionSetsSection;
- (long long)serviceActionsSection;
- (BOOL)_showTriggerSummary;
- (id)_unsupportedTriggers;
- (BOOL)_shouldShowDurationItems;
- (id)_staticItemsForHome:(id)a0;
- (BOOL)_showEnableSwitch;
- (id)_triggerServiceActionsInstructionDescription;
- (id)_triggerTestActionsInstructionDescription;
- (BOOL)_shouldShowTestItem;
- (id)_triggerDeleteInstructionItemString;
- (BOOL)_shouldShowDeleteItem;
- (long long)unsupportedItemSectionIndex;
- (id)instructionSections;
- (BOOL)_showActionSetsInstructionItem;

@end
