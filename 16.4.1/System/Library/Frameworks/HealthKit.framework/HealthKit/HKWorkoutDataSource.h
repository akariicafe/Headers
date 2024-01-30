@interface HKWorkoutDataSource : NSObject

+ (id)_distanceTypeForActivityType:(unsigned long long)a0 isIndoor:(BOOL)a1;
+ (id)defaultConfigurationWithWorkoutConfiguration:(id)a0 activityMoveMode:(long long)a1;
+ (id)observedTypesForActivityType:(unsigned long long)a0 isIndoor:(BOOL)a1 connectedToFitnessMachine:(BOOL)a2;
+ (id)observedTypesForActivityType:(unsigned long long)a0 isIndoor:(BOOL)a1 connectedToFitnessMachine:(BOOL)a2 activityMode:(long long)a3;
+ (BOOL)shouldObserveRunningMetricsForActivityMode:(long long)a0 isIndoor:(BOOL)a1 isGymKit:(BOOL)a2;

@end
