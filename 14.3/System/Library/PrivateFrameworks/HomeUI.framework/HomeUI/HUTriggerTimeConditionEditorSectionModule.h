@class HFTransformItem, NSArray, HFItem;

@interface HUTriggerTimeConditionEditorSectionModule : HUTriggerConditionEditorExpandingSectionModule

@property (retain, nonatomic) HFItem *anyTimeOptionItem;
@property (retain, nonatomic) HFTransformItem *onlyDayOptionItem;
@property (retain, nonatomic) HFTransformItem *onlyNightOptionItem;
@property (retain, nonatomic) HFTransformItem *specificTimesOptionItem;
@property (retain, nonatomic) HFTransformItem *customOptionItem;
@property (readonly, nonatomic) NSArray *optionItems;

- (void).cxx_destruct;
- (id)conditionTitle;
- (id)noConditionSummaryTitle;
- (BOOL)conditionIsDisabled;
- (id)buildConditionOptionItems;
- (id)conditionForOptionItem:(id)a0;
- (id)selectOptionItemForCondition:(id)a0;
- (BOOL)doesOptionItemRequireInitialUserConfiguration:(id)a0;
- (id)preferredConditionFromConditions:(id)a0;
- (id)_conditionItemForType:(unsigned long long)a0;
- (id)_createConditionItemForType:(unsigned long long)a0;

@end
