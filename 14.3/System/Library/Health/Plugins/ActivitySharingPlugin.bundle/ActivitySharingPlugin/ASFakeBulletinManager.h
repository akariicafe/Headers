@class ASActivityDataBulletinManager, NSString, ASFakingManager, ASCompetitionBulletinManager, ASFriendInviteBulletinManager;
@protocol ASBulletinPostingManager;

@interface ASFakeBulletinManager : NSObject <ASActivitySharingManagerReadyObserver> {
    ASActivityDataBulletinManager *_activityDataBulletinManager;
    ASCompetitionBulletinManager *_competitionBulletinManager;
    ASFakingManager *_fakingManager;
    ASFriendInviteBulletinManager *_friendInviteBulletinManager;
    id<ASBulletinPostingManager> _bulletinPostingManager;
    int notifyGoalCompletionToken;
    int notifyGoalCompletionDuringCompetitionToken;
    int notifyAchievementToken;
    int notifyWorkoutToken;
    int notifyBatchToken;
    int notifyCompetitionRequestToken;
    int notifyCompetitionAcceptToken;
    int notifyCompetitionEndWinnerToken;
    int notifyCompetitionEndLoserToken;
    int notifyCompetitionScoreCapCelebrationToken;
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

- (void).cxx_destruct;
- (void)dealloc;
- (void)activitySharingManagerReady:(id)a0;
- (void)deregisterBulletins;
- (void)_showFakeWorkoutNotification;
- (void)_showFakeAchievementNotification;
- (void)_showFakeGoalCompletionNotification;
- (void)_showFakeBatchNotification;
- (void)_showFakeGoalCompletionDuringCompetitionNotification;
- (void)_showFakeCompetitionRequestNotification;
- (void)_showFakeCompetitionAcceptedNotification;
- (void)_showFakeCompetitionEndedWinnerNotification;
- (void)_showFakeCompetitionEndedLoserNotification;
- (void)_showFakeCompetitionScoreCapCelebrationNotification;
- (void)_showFakeInvitationRequest;
- (void)_showFakeInvitationResponse;
- (void)_showFakeInviteAttemptNeedsSetup;
- (void)_showFakeNeedToSignIn;
- (void)_showFakeNeedToUpgrade;
- (id)_fakeContact;
- (void)registerBulletins;

@end
