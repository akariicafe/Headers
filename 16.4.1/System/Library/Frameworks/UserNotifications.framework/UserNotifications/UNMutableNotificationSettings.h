@interface UNMutableNotificationSettings : UNNotificationSettings

@property (nonatomic) long long authorizationStatus;
@property (nonatomic) long long soundSetting;
@property (nonatomic) long long badgeSetting;
@property (nonatomic) long long alertSetting;
@property (nonatomic) long long notificationCenterSetting;
@property (nonatomic) long long lockScreenSetting;
@property (nonatomic) long long carPlaySetting;
@property (nonatomic) long long alertStyle;
@property (nonatomic) long long showPreviewsSetting;
@property (nonatomic) long long criticalAlertSetting;
@property (nonatomic) BOOL providesAppNotificationSettings;
@property (nonatomic) long long announcementSetting;
@property (nonatomic) long long groupingSetting;
@property (nonatomic) long long timeSensitiveSetting;
@property (nonatomic) long long scheduledDeliverySetting;
@property (nonatomic) long long directMessagesSetting;

- (void)setDirectMessagesSetting:(long long)a0;
- (void)setScheduledDeliverySetting:(long long)a0;
- (void)setAuthorizationStatus:(long long)a0;
- (void)setAlertStyle:(long long)a0;
- (void)setNotificationCenterSetting:(long long)a0;
- (void)setCarPlaySetting:(long long)a0;
- (void)setGroupingSetting:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBadgeSetting:(long long)a0;
- (void)setAnnouncementSetting:(long long)a0;
- (void)setTimeSensitiveSetting:(long long)a0;
- (void)setLockScreenSetting:(long long)a0;
- (void)setSoundSetting:(long long)a0;
- (void)setCriticalAlertSetting:(long long)a0;
- (void)setShowPreviewsSetting:(long long)a0;
- (void)setProvidesAppNotificationSettings:(BOOL)a0;
- (void)setAlertSetting:(long long)a0;

@end
