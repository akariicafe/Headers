@class HFItem, HUTriggerBuilderItem, HUShortcutItem, HFTriggerBuilder, NSSet, HFStaticItemProvider, HUTriggerActionFlow, HFStaticItem, HFTriggerDurationSummaryItem;

@interface HUTriggerSummaryItemManager : HFItemManager

@property (retain, nonatomic) HFTriggerBuilder *triggerBuilder;
@property (retain, nonatomic) HUTriggerActionFlow *currentFlow;
@property (retain, nonatomic) HUTriggerBuilderItem *triggerBuilderItem;
@property (retain, nonatomic) HFItem *triggersInstructionItem;
@property (retain, nonatomic) HFItem *actionSetsInstructionItem;
@property (retain, nonatomic) HFItem *shortcutsInstructionItem;
@property (retain, nonatomic) HUShortcutItem *shortcutItem;
@property (retain, nonatomic) HFItem *serviceActionsInstructionItem;
@property (retain, nonatomic) HFItem *prioritizedServiceActionsInstructionItem;
@property (retain, nonatomic) HFItem *enableItem;
@property (retain, nonatomic) HFItem *mediaRowItem;
@property (retain, nonatomic) HFItem *mediaInstructionsItem;
@property (retain, nonatomic) HFItem *testTriggerItem;
@property (retain, nonatomic) HFItem *addActionItem;
@property (retain, nonatomic) HFItem *deleteTriggerItem;
@property (retain, nonatomic) HFStaticItem *actionSetsGridItem;
@property (retain, nonatomic) HFStaticItem *serviceActionsGridItem;
@property (retain, nonatomic) HFStaticItem *prioritizedServiceActionsGridItem;
@property (retain, nonatomic) HFTriggerDurationSummaryItem *durationSummaryItem;
@property (retain, nonatomic) HFItem *durationPickerItem;
@property (retain, nonatomic) HFItem *durationFooterItem;
@property (retain, nonatomic) HFStaticItemProvider *unsupportedItemProvider;
@property (retain, nonatomic) HFStaticItemProvider *staticItemProvider;
@property (readonly, nonatomic) BOOL shouldShowPrioritizedActions;
@property (copy, nonatomic) NSSet *prioritizedHomeObjects;
@property (nonatomic) BOOL durationPickerShown;

- (void).cxx_destruct;
- (unsigned long long)_numberOfSections;
- (id)_identifierForSection:(unsigned long long)a0;
- (BOOL)_isInEditMode;
- (id)_buildItemProvidersForHome:(id)a0;
- (id /* block */)_comparatorForSectionIdentifier:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (id)_titleForSectionWithIdentifier:(id)a0;
- (id)_sectionIdentifierForItem:(id)a0;
- (id)initWithTriggerBuilder:(id)a0 flow:(id)a1 delegate:(id)a2;
- (void)triggerBuilderDidChange;
- (id)instructionSections;
- (long long)serviceActionsSection;
- (long long)actionSetsSection;
- (BOOL)prioritizedHomeObjectsContainsServices:(id)a0;
- (BOOL)prioritizedHomeObjectsContainsMediaProfiles:(id)a0;
- (id)_currentSectionIdentifiers;
- (BOOL)_showTriggerSummary;
- (id)_unsupportedTriggers;
- (id)_buildShortcutOwnedTriggerItemProvidersForHome:(id)a0;
- (id)_buildStandardTriggerItemProvidersForHome:(id)a0;
- (BOOL)_showEnableSwitch;
- (BOOL)_showActionSetsInstructionItem;
- (BOOL)_shouldShowTestItem;
- (BOOL)_shouldShowDeleteItem;
- (id)_triggerTestActionsInstructionDescription;
- (id)_triggerServiceActionsInstructionDescription;
- (id)_triggerDeleteInstructionItemString;
- (BOOL)_shouldShowDurationItems;
- (id)_itemsToHideForStandardTriggerInSet:(id)a0;
- (id)_currentSectionIdentifiersForShortcutOwnedTriggers;
- (id)_currentSectionIdentifiersForStandardTriggers;
- (long long)unsupportedItemSectionIndex;

@end
