@class ASActivityDataManager, ASContactsManager, NSString, ASFriend, ACHAchievementStore, _HKFitnessFriendActivitySnapshot, _HKFitnessFriendWorkout, ACHAchievement, HDProfile, _HKFitnessFriendAchievement, ASCompetitionManager, ASCloudKitManager;

@interface ASFakingManager : NSObject <ASActivitySharingManagerReadyObserver> {
    ACHAchievementStore *_achievementStore;
}

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ASActivityDataManager *activityDataManager;
@property (weak, nonatomic) ASCloudKitManager *cloudKitManager;
@property (weak, nonatomic) ASCompetitionManager *competitionManager;
@property (weak, nonatomic) ASContactsManager *contactsManager;
@property (readonly, nonatomic) ASFriend *fakeFriend;
@property (readonly, nonatomic) _HKFitnessFriendWorkout *fakeWorkout;
@property (readonly, nonatomic) _HKFitnessFriendWorkout *fakeVideoWorkout;
@property (readonly, nonatomic) _HKFitnessFriendWorkout *fakeGuidedRunWorkout;
@property (readonly, nonatomic) _HKFitnessFriendWorkout *fakeGuidedWalkWorkout;
@property (readonly, nonatomic) ACHAchievement *fakeAchievement;
@property (readonly, nonatomic) _HKFitnessFriendAchievement *fakeFriendAchievement;
@property (readonly, nonatomic) _HKFitnessFriendActivitySnapshot *fakeSnapshot;
@property (readonly, nonatomic) _HKFitnessFriendActivitySnapshot *fakeCompleteSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)fakeCompetitionWithStartDate:(id)a0 winningParticipant:(long long)a1;
- (void)activitySharingManagerReady:(id)a0;
- (id)_fakeSnapshotWithCompleteRings:(BOOL)a0;
- (id)_contactWithFakeCompetitionStatus:(long long)a0;
- (id)_fakeCompetitionWithStartDate:(id)a0 opponentScores:(id)a1 scores:(id)a2;
- (id)fakeFriendWithCompetitionStatus:(long long)a0 competition:(id)a1;
- (id)fakeTiedCompetitionWithStartDate:(id)a0;
- (void).cxx_destruct;
- (void)pushFakeActivityDataToAllFriendsWithCompletion:(id /* block */)a0;
- (id)_fakeCompetitionHistory;
- (id)fakeWorkoutWithSeymourCatalogWorkoutIdentifier:(id)a0 seymourMediaType:(id)a1;

@end
