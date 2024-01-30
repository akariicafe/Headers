@interface HKManualEntryValidationController : NSObject

- (id)supportedQuantityTypes;
- (unsigned long long)validateMaximumAllowedDuration:(double)a0 ofType:(id)a1;
- (unsigned long long)validateMinimumAllowedDuration:(double)a0 ofType:(id)a1;
- (unsigned long long)validateQuantity:(id)a0 ofType:(id)a1;
- (unsigned long long)validateWorkoutDistance:(id)a0;
- (unsigned long long)validateWorkoutEnergyBurned:(id)a0;
- (unsigned long long)_validateQuantity:(id)a0 withAbsoluteRange:(id)a1 confirmRange:(id)a2;

@end
