@class NSString;
@protocol ASBulletinPostingManager;

@interface ASCompetitionBulletinManager : NSObject <ASActivitySharingManagerReadyObserver> {
    id<ASBulletinPostingManager> _bulletinPostingManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)activitySharingManagerReady:(id)a0;
- (void)showCompetitionRequestNotificationForFriend:(id)a0 competition:(id)a1 withPostingStyle:(long long)a2;
- (void)showCompetitionAcceptedNotificationForFriend:(id)a0 competition:(id)a1 withPostingStyle:(long long)a2;
- (void)showCompetitionEndedNotificationForFriend:(id)a0 competition:(id)a1 withPostingStyle:(long long)a2;
- (void)showCompetitionScoreCapCelebrationForFriends:(id)a0 withPostingStyle:(long long)a1;
- (void)showGizmoVersionTooLowForCompetitionRequestFrom:(id)a0;
- (void)withdrawCompetitionRequestNotificationForFriendWithUUID:(id)a0;

@end
