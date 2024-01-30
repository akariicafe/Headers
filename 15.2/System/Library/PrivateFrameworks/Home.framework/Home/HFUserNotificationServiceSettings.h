@class NSPredicate;

@interface HFUserNotificationServiceSettings : NSObject <NSCopying, NSMutableCopying>

@property (nonatomic, getter=areNotificationsEnabled) BOOL notificationsEnabled;
@property (nonatomic, getter=areDoorbellNotificationsEnabled) BOOL doorbellNotificationsEnabled;
@property (nonatomic, getter=areMotionNotificationsEnabled) BOOL motionNotificationsEnabled;
@property (nonatomic, getter=areSmartDetectionNotificationsEnabled) BOOL smartDetectionNotificationsEnabled;
@property (retain, nonatomic) NSPredicate *notificationCondition;
@property (retain, nonatomic) NSPredicate *smartCameraNotificationCondition;

+ (id)combinedConditionForBulletinBoardNotifications:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)applySettingsToBulletinBoardNotifications:(id)a0;
- (id)initWithNotificationsEnabled:(BOOL)a0 condition:(id)a1 smartCameraNotificationCondition:(id)a2;
- (id)initWithBulletinBoardNotifications:(id)a0;

@end
