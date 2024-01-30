@class ACHWorkoutEvaluationWorkoutProperties;

@interface ACHWorkoutEvaluationEnvironment : NSObject

@property (readonly, nonatomic) ACHWorkoutEvaluationWorkoutProperties *workout;
@property (readonly, nonatomic) unsigned long long numberOfFirstPartyWorkoutsOver5MinutesWithType;
@property (readonly, nonatomic) unsigned long long numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;
@property (readonly, nonatomic) double bestKilocaloriesForType;
@property (readonly, nonatomic) unsigned long long experienceType;

- (void).cxx_destruct;
- (id)valueForUndefinedKey:(id)a0;
- (id)initWithWorkout:(id)a0 numberOfFirstPartyWorkoutsOver5MinutesWithType:(unsigned long long)a1 numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek:(unsigned long long)a2 bestKilocaloriesForType:(double)a3 experienceType:(unsigned long long)a4;

@end
