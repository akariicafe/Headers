@class NSArray, HFCondition;

@interface _HFCompoundConditionMatch : NSObject

@property (retain, nonatomic) HFCondition *matchedCondition;
@property (retain, nonatomic) NSArray *matchedPredicates;

+ (id)matchWithCondition:(id)a0 matchedPredicates:(id)a1;

- (void).cxx_destruct;

@end
