@class HDSQLitePredicate, HDProfile, HDDatabaseTransactionContext;

@interface ACHWorkoutUtility : NSObject

@property (weak, nonatomic) HDProfile *profile;
@property (retain, nonatomic) HDSQLitePredicate *firstPartyPredicate;
@property (copy, nonatomic) HDDatabaseTransactionContext *databaseContext;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (id)workoutsInDateInterval:(id)a0;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)a0 containedInInterval:(id)a1;
- (unsigned long long)numberOfFirstPartyWorkoutsWithDuration:(double)a0 withType:(unsigned long long)a1 endingOnOrBeforeDate:(id)a2;
- (id)bestEnergyBurnedForFirstPartyWorkoutsWithType:(unsigned long long)a0 endingBeforeDate:(id)a1;
- (unsigned long long)numberOfWorkoutsWithDuration:(double)a0 containedInInterval:(id)a1;
- (id)workoutsWithDuration:(double)a0 withType:(id)a1 startingAtOrAfterDate:(id)a2 endingOnOrBeforeDate:(id)a3 firstPartyOnly:(BOOL)a4;
- (id)_predicateWithDuration:(double)a0 withType:(id)a1 startingAtOrAfterDate:(id)a2 endingOnOrBeforeDate:(id)a3 firstPartyOnly:(BOOL)a4;
- (unsigned long long)_countOfSamplesWithPredicate:(id)a0;

@end
