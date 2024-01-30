@interface ASActivityDataValidator : NSObject

+ (id)_copyAchievement:(id)a0;
+ (id)_removeInvalidWorkouts:(id)a0;
+ (id)_shiftedAchievements:(id)a0 friendTimeZones:(id)a1 friendListManager:(id)a2;
+ (id)_unhiddenSamplesInFilterableSamples:(id)a0 friendTimeZones:(id)a1 friendListManager:(id)a2;
+ (id)validatedSamplesFromAchievements:(id)a0 workouts:(id)a1 activitySnapshots:(id)a2 friendListManager:(id)a3;

@end
