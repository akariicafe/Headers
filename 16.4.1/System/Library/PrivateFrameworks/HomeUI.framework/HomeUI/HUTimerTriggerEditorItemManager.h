@class NSSet, NSMutableDictionary, HUInstructionsItem, HUTriggerConditionEditorItemModule, NSDateComponents, HFStaticItem, HFTimerTriggerBuilder;

@interface HUTimerTriggerEditorItemManager : HFItemManager

@property (retain, nonatomic) HUInstructionsItem *instructionsItem;
@property (retain, nonatomic) HFStaticItem *sunriseOptionItem;
@property (retain, nonatomic) HFStaticItem *sunsetOptionItem;
@property (retain, nonatomic) HFStaticItem *timeOptionItem;
@property (retain, nonatomic) HFStaticItem *datePickerItem;
@property (retain, nonatomic) HUInstructionsItem *recurrencesInstructionsItem;
@property (retain, nonatomic) HFStaticItem *recurrencesItem;
@property (retain, nonatomic) HUTriggerConditionEditorItemModule *conditionModule;
@property (readonly, nonatomic) NSMutableDictionary *significantEventToDefaultOffsetMap;
@property (retain, nonatomic) NSDateComponents *defaultFireTimeComponents;
@property (readonly, nonatomic) HFTimerTriggerBuilder *timerTriggerBuilder;
@property (nonatomic) BOOL datePickerShown;
@property (readonly, nonatomic) NSSet *dateOptionsItems;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_itemsToHideInSet:(id)a0;
- (id)defaultOffsetForSignificantEvent:(id)a0;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (id)initWithTimerTriggerBuilder:(id)a0 delegate:(id)a1;
- (void)setDefaultOffset:(id)a0 forSignificantEvent:(id)a1;
- (void)updateForSignificantEventOffsetChange;

@end
