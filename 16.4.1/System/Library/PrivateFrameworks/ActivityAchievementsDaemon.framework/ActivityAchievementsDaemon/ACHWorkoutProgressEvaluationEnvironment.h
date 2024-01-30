@interface ACHWorkoutProgressEvaluationEnvironment : NSObject

@property (readonly, nonatomic) unsigned long long numberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek;
@property (readonly, nonatomic) unsigned long long numberOfFirstPartyWorkoutsOver15MinutesDuringCurrentFitnessWeek;

- (id)initWithNumberOfFirstPartyWorkoutsOver5MinutesDuringCurrentFitnessWeek:(unsigned long long)a0;
- (id)valueForUndefinedKey:(id)a0;

@end
