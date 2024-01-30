@class HDProfile, ACHEarnedInstanceStore;

@interface ACHEarnedInstanceCleanupUtility : NSObject

@property (retain, nonatomic) ACHEarnedInstanceStore *earnedInstanceStore;
@property (retain, nonatomic) HDProfile *profile;

- (void).cxx_destruct;
- (void)performCleanup;
- (id)_cleanupFirstWorkoutAchievements;
- (id)_cleanupBestWorkoutAchievements;
- (id)_cleanupLongestMoveStreakAchievements;
- (id)_cleanupNewExerciseRecordAchievements;
- (id)_cleanupLifetimeMoveGoalAchievements;
- (long long)_historicalEvaluationAdjustment;
- (id)initWithEarnedInstanceStore:(id)a0 profile:(id)a1;

@end
