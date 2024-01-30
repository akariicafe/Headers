@interface ASDemoData : NSObject

+ (id)_achievementsForFriendTwoWithFriendUUID:(id)a0;
+ (id)_achievementsForFriendWithIndex:(long long)a0 friendUUID:(id)a1;
+ (id)_activitySnapshotForFitnessJrFriendWithFriendUUID:(id)a0 sourceUUID:(id)a1;
+ (id)_activitySnapshotForFriendOneWithFriendUUID:(id)a0 sourceUUID:(id)a1;
+ (id)_activitySnapshotForFriendThreeWithFriendUUID:(id)a0 sourceUUID:(id)a1;
+ (id)_activitySnapshotForFriendTwoWithFriendUUID:(id)a0 sourceUUID:(id)a1;
+ (id)_activitySnapshotForFriendWithIndex:(long long)a0 friendUUID:(id)a1 sourceUUID:(id)a2;
+ (id)_appleWatchSourceRevision;
+ (id)_fakeAchievementDuringDayStartingAtDate:(id)a0 personUUID:(id)a1;
+ (id)_fakeFriendListWithDemoFileName:(id)a0;
+ (id)_fakeWorkoutDuringDayStartingAtDate:(id)a0 personUUID:(id)a1;
+ (id)_fakeWorkoutsForIndex:(long long)a0 personUUID:(id)a1;
+ (id)_fakeWorkoutsForLastWeekWithPersonUUID:(id)a0 dailySnapshotProbability:(double)a1;
+ (id)_workoutsForFitnessJrFriendTwoWithFriendUUID:(id)a0;
+ (id)_workoutsForFriendOneWithFriendUUID:(id)a0;
+ (id)_workoutsForFriendTwoWithFriendUUID:(id)a0;
+ (id)_workoutsForFriendWithIndex:(long long)a0 friendUUID:(id)a1;
+ (id)createMeWithModel:(id)a0;
+ (id)fakeAppFriendListForMarketing;
+ (id)fakeFirstGlanceFriendListForMarketing;

@end
