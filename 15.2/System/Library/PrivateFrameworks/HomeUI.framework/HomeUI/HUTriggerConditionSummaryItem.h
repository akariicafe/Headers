@class NSArray, HMHome;

@interface HUTriggerConditionSummaryItem : HFItem

@property (readonly, nonatomic) NSArray *conditions;
@property (readonly, nonatomic) HMHome *home;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)initWithConditions:(id)a0 home:(id)a1;

@end
