@class HFTimeRangeCondition, HFItem;

@interface HUTriggerTimeConditionDetailEditorItemManager : HFItemManager

@property (retain, nonatomic) HFItem *startConditionPickerItem;
@property (retain, nonatomic) HFItem *endConditionPickerItem;
@property (retain, nonatomic) HFTimeRangeCondition *rangeCondition;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (id)initWithDelegate:(id)a0 rangeCondition:(id)a1;
- (id)primitiveConditionForPickerItem:(id)a0;
- (void)setPrimitiveCondition:(id)a0 forPickerItem:(id)a1;

@end
