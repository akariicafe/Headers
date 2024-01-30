@class NSArray;

@interface TPSInclusivityCondition : TPSCondition

@property (copy, nonatomic) NSArray *values;

- (id)_valuesFromValueTypeArray:(id)a0;
- (id)_valuesFromValuesArray:(id)a0;

@end
