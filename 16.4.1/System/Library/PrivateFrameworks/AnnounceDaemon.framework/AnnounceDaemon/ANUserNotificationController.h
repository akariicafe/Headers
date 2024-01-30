@class UNUserNotificationCenter;
@protocol ANUserNotificationControllerDelegate;

@interface ANUserNotificationController : NSObject

@property (readonly, nonatomic) UNUserNotificationCenter *notificationCenter;
@property (nonatomic) BOOL suspendNotificationExpiration;
@property (weak, nonatomic) id<ANUserNotificationControllerDelegate> delegate;

+ (id)sharedController;
+ (void)_bestDeviceToAlert:(id /* block */)a0;
+ (id)_createNotificationContent:(id)a0 homeName:(id)a1 withSilence:(BOOL)a2 userInfo:(id)a3 actionUrl:(id)a4 expirationDate:(id)a5 andThreadIdentifier:(id)a6;

- (void)cleanForExit;
- (id)init;
- (void).cxx_destruct;
- (id)_contentBodyForAnnouncements:(id)a0 inHome:(id)a1;
- (void)_contentForAnnouncement:(id)a0 groupAnnouncements:(id)a1 inHome:(id)a2 threadID:(id)a3 replacement:(BOOL)a4 completion:(id /* block */)a5;
- (id)_contentForSendFailureForAnnouncement:(id)a0 homeName:(id)a1;
- (void)_postNotificationWithContent:(id)a0 requestID:(id)a1;
- (void)_replaceContentForRequestWithRequestID:(id)a0 replacementContent:(id)a1 completionHandler:(id /* block */)a2;
- (void)_replaceContentForRequestsWithThreadID:(id)a0 replacementContent:(id)a1;
- (void)_setContentExpirationDate:(id)a0 forNotificationsWithThreadIDs:(id)a1;
- (id)_userInfoForAnnouncement:(id)a0 groupAnnouncements:(id)a1;
- (id)_userInfoForFailedDeliveryForAnnouncement:(id)a0;
- (BOOL)hasDeliveredNotificationsWithGroupID:(id)a0;
- (void)pauseExpirationForNotificationsWithGroupIDs:(id)a0;
- (void)postNotificationForAnnouncement:(id)a0 groupAnnouncements:(id)a1 home:(id)a2 groupID:(id)a3;
- (void)postSendFailureNotificationForAnnouncement:(id)a0;
- (void)removeNotificationWithGroupID:(id)a0;
- (void)resumeExpirationForNotificationsWithGroupIDs:(id)a0;
- (void)updateNotificationForAnnouncements:(id)a0 inHome:(id)a1 withGroupID:(id)a2;

@end
