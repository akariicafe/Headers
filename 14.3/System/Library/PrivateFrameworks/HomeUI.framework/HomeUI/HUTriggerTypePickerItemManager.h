@class HUInstructionsItem, HFStaticItem;

@interface HUTriggerTypePickerItemManager : HFItemManager

@property (retain, nonatomic) HUInstructionsItem *instructionsItem;
@property (retain, nonatomic) HFStaticItem *leavingLocationTriggerItem;
@property (retain, nonatomic) HFStaticItem *arrivingAtLocationTriggerItem;
@property (retain, nonatomic) HFStaticItem *timerTriggerItem;
@property (retain, nonatomic) HFStaticItem *characteristicTriggerItem;
@property (retain, nonatomic) HFStaticItem *alarmTriggerItem;

- (void).cxx_destruct;
- (unsigned long long)_numberOfSections;
- (id)_identifierForSection:(unsigned long long)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id /* block */)_comparatorForSectionIdentifier:(id)a0;
- (id)_sectionIdentifierForItem:(id)a0;
- (id)_createLocationItemForType:(unsigned long long)a0;
- (id)_createTimeItem;
- (id)_createCharacteristicItemForSource:(unsigned long long)a0;
- (BOOL)_hasMinimumRequiredTriggerableServices:(unsigned long long)a0;
- (BOOL)_hasMinimumRequiredTriggeringServices:(long long)a0;

@end
