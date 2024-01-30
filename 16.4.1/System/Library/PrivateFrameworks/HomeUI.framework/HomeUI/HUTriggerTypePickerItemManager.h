@class HFItemModule, HUInstructionsItem, HFStaticItem;

@interface HUTriggerTypePickerItemManager : HFItemManager

@property (retain, nonatomic) HUInstructionsItem *eventsInstructionsItem;
@property (retain, nonatomic) HFStaticItem *leavingLocationTriggerItem;
@property (retain, nonatomic) HFStaticItem *arrivingAtLocationTriggerItem;
@property (retain, nonatomic) HFStaticItem *timerTriggerItem;
@property (retain, nonatomic) HFStaticItem *characteristicTriggerItem;
@property (retain, nonatomic) HFStaticItem *alarmTriggerItem;
@property (retain, nonatomic) HFStaticItem *customAutomationItem;
@property (retain, nonatomic) HUInstructionsItem *suggestionsInstructionsItem;
@property (retain, nonatomic) HFItemModule *suggestedAutomationsModule;
@property (nonatomic) BOOL showSuggestedAutomations;

- (void).cxx_destruct;
- (id)_createTimeItem;
- (id)_buildItemModulesForHome:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_createCharacteristicItemForSource:(unsigned long long)a0;
- (id)_createCustomItem;
- (id)_createLocationItemForType:(unsigned long long)a0;
- (BOOL)_hasMinimumRequiredTriggerableServices:(unsigned long long)a0;
- (BOOL)_hasMinimumRequiredTriggeringServices:(long long)a0;
- (id)_itemsToHideInSet:(id)a0;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;

@end
