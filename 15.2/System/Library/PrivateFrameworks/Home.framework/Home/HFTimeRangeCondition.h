@class HFTimeCondition;
@protocol HFPrimitiveTimeCondition;

@interface HFTimeRangeCondition : HFTimeCondition

@property (readonly, nonatomic) HFTimeCondition<HFPrimitiveTimeCondition> *startCondition;
@property (readonly, nonatomic) HFTimeCondition<HFPrimitiveTimeCondition> *endCondition;

+ (id)_primitiveTimePredicateClasses;

- (id)initWithPredicate:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)timeConditionType;
- (id)initWithStartCondition:(id)a0 endCondition:(id)a1;

@end
