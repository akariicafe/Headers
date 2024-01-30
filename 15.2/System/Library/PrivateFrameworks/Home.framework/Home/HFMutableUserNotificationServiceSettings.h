@class NSPredicate;

@interface HFMutableUserNotificationServiceSettings : HFUserNotificationServiceSettings

@property (nonatomic, getter=areNotificationsEnabled) BOOL notificationsEnabled;
@property (nonatomic, getter=areMotionNotificationsEnabled) BOOL motionNotificationsEnabled;
@property (nonatomic, getter=areDoorbellNotificationsEnabled) BOOL doorbellNotificationsEnabled;
@property (nonatomic, getter=areSmartDetectionNotificationsEnabled) BOOL smartDetectionNotificationsEnabled;
@property (retain, nonatomic) NSPredicate *notificationCondition;
@property (retain, nonatomic) NSPredicate *smartCameraNotificationCondition;


@end
