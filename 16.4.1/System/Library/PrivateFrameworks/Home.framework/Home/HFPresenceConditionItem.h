@class HMHome, HFPresenceCondition, NSString;

@interface HFPresenceConditionItem : HFItem <HFConditionItem>

@property (retain, nonatomic) HFPresenceCondition *condition;
@property (readonly, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
