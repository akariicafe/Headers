@class HFTimeCondition;
@protocol HFPrimitiveTimeCondition;

@interface HFTimeRangeCondition : HFTimeCondition

@property (readonly, nonatomic) HFTimeCondition<HFPrimitiveTimeCondition> *startCondition;
@property (readonly, nonatomic) HFTimeCondition<HFPrimitiveTimeCondition> *endCondition;

+ (id)_primitiveTimePredicateClasses;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)timeConditionType;
- (id)initWithPredicate:(id)a0;
- (id)initWithStartCondition:(id)a0 endCondition:(id)a1;

@end
