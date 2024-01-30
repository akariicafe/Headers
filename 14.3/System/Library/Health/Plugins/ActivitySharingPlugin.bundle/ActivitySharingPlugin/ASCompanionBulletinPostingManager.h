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

- (void)postNotificationRequest:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)handleNotificationResponse:(id)a0 completion:(id /* block */)a1;
- (void)userNotificationCenter:(id)a0 didReceiveNotificationResponse:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)removeNotificationWithIdentifier:(id)a0;
- (void)activitySharingManagerReady:(id)a0;
- (void)enqueueBulletins:(id)a0 withPostingSyle:(long long)a1;
- (void)removeCompetitionNotificationsForFriendUUID:(id)a0;
- (void)_withdrawNotificationRequestsWithIdentifiers:(id)a0;
- (void)registerNotificationCategories:(id)a0;
- (void)postFakeBulletins:(id)a0;

@end
