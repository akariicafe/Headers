@class HFStaticItem, HFEventTriggerBuilder, HFItem;

@interface HUEventTypePickerItemManager : HFItemManager

@property (retain, nonatomic) HFItem *instructionsItem;
@property (retain, nonatomic) HFStaticItem *leavingLocationEventItem;
@property (retain, nonatomic) HFStaticItem *arrivingAtLocationEventItem;
@property (retain, nonatomic) HFStaticItem *timerEventItem;
@property (retain, nonatomic) HFStaticItem *characteristicEventItem;
@property (retain, nonatomic) HFStaticItem *alarmEventItem;
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder;

- (void).cxx_destruct;
- (id)_createTimeItem;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)_createCharacteristicItemForSource:(unsigned long long)a0;
- (id)_createLocationItemForType:(unsigned long long)a0;
- (BOOL)_hasMinimumRequiredTriggerableServices:(unsigned long long)a0;
- (BOOL)_hasMinimumRequiredTriggeringServices:(long long)a0;
- (id)initWithTriggerBuilder:(id)a0 delegate:(id)a1;

@end
