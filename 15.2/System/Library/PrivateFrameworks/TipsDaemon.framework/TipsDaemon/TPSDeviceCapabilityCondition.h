@class NSArray;

@interface TPSDeviceCapabilityCondition : TPSCondition

@property (copy, nonatomic) NSArray *values;

- (id)init;
- (id)targetingValidations;
- (id)_valuesFromValuesArray:(id)a0;

@end
