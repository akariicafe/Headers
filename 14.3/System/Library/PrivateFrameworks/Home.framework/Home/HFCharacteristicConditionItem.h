@class NSString, HFCharacteristicCondition;

@interface HFCharacteristicConditionItem : HFItem <HFConditionItem>

@property (readonly, nonatomic) HFCharacteristicCondition *condition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
