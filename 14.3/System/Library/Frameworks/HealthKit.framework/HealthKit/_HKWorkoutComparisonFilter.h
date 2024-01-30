@interface _HKWorkoutComparisonFilter : _HKComparisonFilter

+ (BOOL)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (BOOL)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
+ (BOOL)isValidValue:(id)a0 forKeyPath:(id)a1 operatorType:(unsigned long long)a2 dataTypes:(id)a3 error:(id *)a4;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (BOOL)isSupportedKeyPath:(id)a0;

- (BOOL)_acceptsWorkoutWithDuration:(double)a0;
- (BOOL)_acceptsWorkoutWithTotalDistance:(id)a0;
- (BOOL)_acceptsWorkoutWithTotalEnergyBurned:(id)a0;
- (BOOL)_acceptsWorkoutWithTotalFlightsClimbed:(id)a0;
- (BOOL)_acceptsWorkoutWithTotalSwimmingStrokeCount:(id)a0;
- (BOOL)_acceptsWorkoutWithGoal:(id)a0;
- (BOOL)_acceptsWorkoutWithActivityType:(unsigned long long)a0;
- (BOOL)_acceptsWorkoutWithGoalType:(unsigned long long)a0;
- (BOOL)acceptsDataObject:(id)a0;

@end
