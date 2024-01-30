@class NSString;
@protocol ASBulletinPostingManager;

@interface ASCompetitionBulletinManager : NSObject <ASActivitySharingManagerReadyObserver> {
    id<ASBulletinPostingManager> _bulletinPostingManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showCompetitionAcceptedNotificationForFriend:(id)a0 competition:(id)a1 withPostingStyle:(long long)a2;
- (void)activitySharingManagerReady:(id)a0;
- (void)showGizmoVersionTooLowForCompetitionRequestFrom:(id)a0;
- (void)showCompetitionEndedNotificationForFriend:(id)a0 competition:(id)a1 withPostingStyle:(long long)a2;
- (void)withdrawCompetitionRequestNotificationForFriendWithUUID:(id)a0;
- (void)showCompetitionScoreCapCelebrationForFriends:(id)a0 withPostingStyle:(long long)a1;
- (void).cxx_destruct;
- (void)showCompetitionRequestNotificationForFriend:(id)a0 competition:(id)a1 withPostingStyle:(long long)a2;

@end
