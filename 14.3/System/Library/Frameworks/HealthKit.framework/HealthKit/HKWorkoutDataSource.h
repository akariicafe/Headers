@interface HKWorkoutDataSource : NSObject

+ (id)observedTypesForActivityType:(unsigned long long)a0 isIndoor:(BOOL)a1 connectedToFitnessMachine:(BOOL)a2 activityMode:(long long)a3;
+ (id)_distanceTypeForActivityType:(unsigned long long)a0 isIndoor:(BOOL)a1;
+ (id)observedTypesForActivityType:(unsigned long long)a0 isIndoor:(BOOL)a1 connectedToFitnessMachine:(BOOL)a2;

@end
