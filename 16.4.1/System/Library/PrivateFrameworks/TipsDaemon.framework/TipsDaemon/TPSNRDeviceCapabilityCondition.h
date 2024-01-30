@class NSArray;

@interface TPSNRDeviceCapabilityCondition : TPSCondition

@property (copy, nonatomic) NSArray *values;

- (id)init;
- (id)_valuesFromValuesArray:(id)a0;
- (id)targetingValidations;

@end
