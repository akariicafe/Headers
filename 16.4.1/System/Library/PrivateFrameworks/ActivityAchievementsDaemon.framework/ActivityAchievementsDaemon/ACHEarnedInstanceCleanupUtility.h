@class ACHAwardsKeyValueClient, HKHealthStore, ACHEarnedInstanceStore, HDProfile;

@interface ACHEarnedInstanceCleanupUtility : NSObject

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) ACHAwardsKeyValueClient *keyValueClient;
@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (retain, nonatomic) HDProfile *profile;

- (id)_cleanupNewExerciseRecordAchievements;
- (id)initWithEarnedInstanceStore:(id)a0 profile:(id)a1;
- (id)_cleanupLongestMoveStreakAchievements;
- (long long)_daemon_historicalEvaluationAdjustment;
- (void)performCleanup;
- (id)_cleanupBestWorkoutAchievements;
- (id)_cleanupFirstWorkoutAchievements;
- (id)initWithHealthStore:(id)a0 keyValueClient:(id)a1 earnedInstanceStore:(id)a2;
- (id)_cleanupLifetimeMoveGoalAchievements;
- (long long)_historicalEvaluationAdjustment;
- (void).cxx_destruct;
- (long long)_client_historicalEvaluationAdjustment;

@end
