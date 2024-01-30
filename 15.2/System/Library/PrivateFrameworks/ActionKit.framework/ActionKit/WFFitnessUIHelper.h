@interface WFFitnessUIHelper : NSObject

+ (BOOL)isWheelchairUser;
+ (id)timeUnits;
+ (id)allActivityTypes;
+ (id)allActivityTypesIncludingWheelchairWorkouts:(BOOL)a0 includingSwimmingWorkouts:(BOOL)a1;
+ (id)activityTypeForLocalizedActivityName:(id)a0;
+ (void)preferredUnitsForActivityType:(unsigned long long)a0 completion:(id /* block */)a1;
+ (id)quantityTypesForActivityType:(unsigned long long)a0;

@end
