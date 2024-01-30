@interface UNNotificationSettings : NSObject <NSMutableCopying, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long groupingSetting;
@property (readonly, nonatomic) long long authorizationStatus;
@property (readonly, nonatomic) long long soundSetting;
@property (readonly, nonatomic) long long badgeSetting;
@property (readonly, nonatomic) long long alertSetting;
@property (readonly, nonatomic) long long notificationCenterSetting;
@property (readonly, nonatomic) long long lockScreenSetting;
@property (readonly, nonatomic) long long carPlaySetting;
@property (readonly, nonatomic) long long alertStyle;
@property (readonly, nonatomic) long long showPreviewsSetting;
@property (readonly, nonatomic) long long criticalAlertSetting;
@property (readonly, nonatomic) BOOL providesAppNotificationSettings;
@property (readonly, nonatomic) long long announcementSetting;
@property (readonly, nonatomic) long long timeSensitiveSetting;
@property (readonly, nonatomic) long long scheduledDeliverySetting;
@property (readonly, nonatomic) long long directMessagesSetting;

+ (id)emptySettings;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 announcementSetting:(long long)a7 criticalAlertSetting:(long long)a8 alertStyle:(long long)a9 showPreviewsSetting:(long long)a10 groupingSetting:(long long)a11 providesAppNotificationSettings:(BOOL)a12;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 announcementSetting:(long long)a7 criticalAlertSetting:(long long)a8 timeSensitiveSetting:(long long)a9 scheduledDeliverySetting:(long long)a10 directMessagesSetting:(long long)a11 alertStyle:(long long)a12 showPreviewsSetting:(long long)a13 groupingSetting:(long long)a14 providesAppNotificationSettings:(BOOL)a15;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 announcementSetting:(long long)a7 criticalAlertSetting:(long long)a8 timeSensitiveSetting:(long long)a9 alertStyle:(long long)a10 showPreviewsSetting:(long long)a11 groupingSetting:(long long)a12 providesAppNotificationSettings:(BOOL)a13;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 announcementSetting:(long long)a7 criticalAlertSetting:(long long)a8 timeSensitiveSetting:(long long)a9 scheduledDeliverySetting:(long long)a10 alertStyle:(long long)a11 showPreviewsSetting:(long long)a12 groupingSetting:(long long)a13 providesAppNotificationSettings:(BOOL)a14;
+ (id)settingsWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 spokenSetting:(long long)a7 criticalAlertSetting:(long long)a8 alertStyle:(long long)a9 showPreviewsSetting:(long long)a10 providesAppNotificationSettings:(BOOL)a11;

- (void)encodeWithCoder:(id)a0;
- (id)initWithAuthorizationStatus:(long long)a0 soundSetting:(long long)a1 badgeSetting:(long long)a2 alertSetting:(long long)a3 notificationCenterSetting:(long long)a4 lockScreenSetting:(long long)a5 carPlaySetting:(long long)a6 announcementSetting:(long long)a7 criticalAlertSetting:(long long)a8 timeSensitiveSetting:(long long)a9 scheduledDeliverySetting:(long long)a10 directMessagesSetting:(long long)a11 alertStyle:(long long)a12 showPreviewsSetting:(long long)a13 groupingSetting:(long long)a14 providesAppNotificationSettings:(BOOL)a15;
- (BOOL)hasEnabledAlertSettings;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)hasEnabledSettings;

@end
