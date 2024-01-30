@interface TPSLocalNotificationController : NSObject

@property (readonly, nonatomic, getter=isNotificationSettingValid) BOOL notificationSettingValid;

- (id)initWithBundleIdentifier:(id)a0;
- (void)removeAllNotifications;
- (void)removeNotificationWithIdentifier:(id)a0;
- (void)sendNotificationWithIdentifier:(id)a0 collectionID:(id)a1 correlationID:(id)a2 title:(id)a3 text:(id)a4 attachmentURL:(id)a5 extensionPayload:(id)a6;
- (void)showNotificationForNotificationCache:(id)a0 attachmentURL:(id)a1;
- (void)notificationCompletedForIdentifier:(id)a0 collectionID:(id)a1 correlationID:(id)a2 error:(id)a3;

@end
