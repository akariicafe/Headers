@class ASActivityDataBulletinManager, NSString, ASFakingManager, ASCompetitionBulletinManager, ASFriendInviteBulletinManager;
@protocol ASBulletinPostingManager;

@interface ASFakeBulletinManager : NSObject <ASActivitySharingManagerReadyObserver> {
    ASActivityDataBulletinManager *_activityDataBulletinManager;
    ASCompetitionBulletinManager *_competitionBulletinManager;
    ASFakingManager *_fakingManager;
    ASFriendInviteBulletinManager *_friendInviteBulletinManager;
    id<ASBulletinPostingManager> _bulletinPostingManager;
    int notifyGoalCompletionDuringCompetitionToken;
    int notifyCompetitionRequestToken;
    int notifyCompetitionAcceptToken;
    int notifyCompetitionEndWinnerToken;
    int notifyCompetitionEndLoserToken;
    int notifyCompetitionEndTieToken;
    int notifyCompetitionScoreCapCelebrationToken;
    int notifyGoalCompletionToken;
    int notifyAchievementToken;
    int notifyWorkoutToken;
    int notifyVideoWorkoutToken;
    int notifyGuidedRunWorkoutToken;
    int notifyGuidedWalkWorkoutToken;
    int notifyBatchToken;
    int notifyInviteRequestToken;
    int notifyInviteResponseToken;
    int notifyOfFakeInviteNeedsSetupToken;
    int notifyOfFakeSignInToken;
    int notifyOfFakeUpgradeToken;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_showFakeBatchNotification;
- (void)_showFakeWorkoutNotification;
- (void)activitySharingManagerReady:(id)a0;
- (void)_showFakeCompetitionRequestNotification;
- (void)_showFakeCompetitionEndedTieNotification;
- (void)_showFakeCompetitionAcceptedNotification;
- (void)_showFakeNeedToSignIn;
- (void)_showFakeCompetitionEndedLoserNotification;
- (void)_showFakeAchievementNotification;
- (void)_showFakeCompetitionEndedWinnerNotification;
- (void)_showFakeWorkoutNotificationWithWorkout:(id)a0;
- (void)_showFakeInvitationRequest;
- (void)_showFakeNeedToUpgrade;
- (void)_showFakeInviteAttemptNeedsSetup;
- (void)_showFakeGoalCompletionDuringCompetitionNotification;
- (void)dealloc;
- (void)_showFakeVideoWorkoutNotification;
- (void)registerBulletins;
- (void)_showFakeInvitationResponse;
- (void)deregisterBulletins;
- (void)_showFakeGuidedWalkWorkoutNotification;
- (void)_showFakeGuidedRunWorkoutNotification;
- (id)_fakeContact;
- (void)_showFakeCompetitionScoreCapCelebrationNotification;
- (void).cxx_destruct;
- (void)_showFakeGoalCompletionNotification;

@end
