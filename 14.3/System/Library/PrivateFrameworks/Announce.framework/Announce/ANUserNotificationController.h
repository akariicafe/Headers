@class UNUserNotificationCenter;
@protocol ANUserNotificationControllerDelegate;

@interface ANUserNotificationController : NSObject

@property (readonly, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (nonatomic) BOOL suspendNotificationExpiration;
@property (weak, nonatomic) id<ANUserNotificationControllerDelegate> delegate;

+ (id)sharedController;
+ (id)_createNotificationContent:(id)a0 homeName:(id)a1 withSilence:(BOOL)a2 userInfo:(id)a3 actionUrl:(id)a4 expirationDate:(id)a5 andThreadIdentifier:(id)a6;
+ (void)_bestDeviceToAlert:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)cleanForExit;
- (void)postSendFailureNotificationForAnnouncement:(id)a0;
- (void)_replaceContentForRequestWithGroupID:(id)a0 replacementContent:(id)a1 completionHandler:(id /* block */)a2;
- (void)_postNotificationWithContent:(id)a0 withGroupID:(id)a1;
- (void)_contentForAnnouncements:(id)a0 inHome:(id)a1 withGroupID:(id)a2 replacement:(BOOL)a3 completion:(id /* block */)a4;
- (void)_setContentExpirationDate:(id)a0 forNotificationsWithGroupIDs:(id)a1;
- (id)_contentForSendFailureForAnnouncement:(id)a0 homeName:(id)a1;
- (id)_contentBodyForAnnouncements:(id)a0 inHome:(id)a1;
- (id)_userInfoForAnnouncements:(id)a0;
- (id)_userInfoForFailedDeliveryForAnnouncement:(id)a0;
- (void)postNotificationForAnnouncements:(id)a0 inHome:(id)a1 withGroupID:(id)a2;
- (void)updateNotificationForAnnouncements:(id)a0 inHome:(id)a1 withGroupID:(id)a2;
- (void)removeNotificationWithGroupID:(id)a0;
- (void)pauseExpirationForNotificationsWithGroupIDs:(id)a0;
- (void)resumeExpirationForNotificationsWithGroupIDs:(id)a0;
- (BOOL)hasDeliveredNotificationsWithGroupID:(id)a0;

@end
