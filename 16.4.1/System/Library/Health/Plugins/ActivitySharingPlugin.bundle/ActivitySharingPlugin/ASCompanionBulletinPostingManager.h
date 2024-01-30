@class NSString, UNUserNotificationCenter;
@protocol ASBulletinPostingManagerDelegate;

@interface ASCompanionBulletinPostingManager : NSObject <UNUserNotificationCenterDelegate, ASBulletinPostingManager, ASActivitySharingManagerReadyObserver> {
    UNUserNotificationCenter *_userNotificationCenter;
}

@property (weak, nonatomic) id<ASBulletinPostingManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)registerNotificationCategories:(id)a0;
- (void)handleNotificationResponse:(id)a0 completion:(id /* block */)a1;
- (void)_handleActivityDataNotificationResponse:(id)a0;
- (id)topicIdentifiers;
- (void)removeNotificationWithIdentifier:(id)a0;
- (id)_notificationRequestForCodableBulletin:(id)a0;
- (void)activitySharingManagerReady:(id)a0;
- (void)postFakeBulletins:(id)a0;
- (id)_subtitleBodyPairForWorkoutCodableBulletin:(id)a0;
- (void)enqueueBulletins:(id)a0 withPostingSyle:(long long)a1;
- (id)_achievementForAchievementData:(id)a0;
- (void)postNotificationRequest:(id)a0;
- (id)_subtitleBodyPairForAchievementCodableBulletin:(id)a0;
- (id)_activityDataNotificationCategories;
- (id)_activitySnapshotForSnapshotData:(id)a0;
- (void)_withdrawNotificationRequestsWithIdentifiers:(id)a0;
- (id)_activitySharingWorkoutForWorkoutData:(id)a0;
- (id)init;
- (void)removeCompetitionNotificationsForFriendUUID:(id)a0;
- (id)_subtitleBodyPairForCodableBulletin:(id)a0;
- (id)_activitySharingAchievementForAchievementData:(id)a0;
- (BOOL)_isPostingAllowed;
- (void).cxx_destruct;

@end
