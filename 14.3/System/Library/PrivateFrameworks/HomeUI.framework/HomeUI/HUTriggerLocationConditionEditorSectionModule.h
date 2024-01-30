@class HFTransformItem, NSString, HFItem;

@interface HUTriggerLocationConditionEditorSectionModule : HUTriggerConditionEditorExpandingSectionModule <HFLocationManagerObserver>

@property (retain, nonatomic) HFItem *anyLocationOptionItem;
@property (retain, nonatomic) HFTransformItem *anyUserAtHomeOptionItem;
@property (retain, nonatomic) HFTransformItem *currentUserAtHomeOptionItem;
@property (retain, nonatomic) HFTransformItem *noUserAtHomeOptionItem;
@property (retain, nonatomic) HFTransformItem *currentUserNotAtHomeOptionItem;
@property (retain, nonatomic) HFTransformItem *customOptionItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)conditionTitle;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;
- (id)initWithItemUpdater:(id)a0 conditionType:(unsigned long long)a1 home:(id)a2;
- (id)noConditionSummaryTitle;
- (BOOL)conditionIsDisabled;
- (id)buildConditionOptionItems;
- (id)conditionForOptionItem:(id)a0;
- (id)selectOptionItemForCondition:(id)a0;
- (id)preferredConditionFromConditions:(id)a0;
- (id)_conditionItemForPresenceEvent:(id)a0;
- (id)_createConditionItemForPresenceEventType:(unsigned long long)a0 userType:(unsigned long long)a1;

@end
