@interface UNMutableNotificationSystemSettings : UNNotificationSystemSettings

@property (nonatomic) long long showPreviewsSetting;
@property (nonatomic) long long announcementSetting;
@property (nonatomic) long long spokenNotificationSetting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setShowPreviewsSetting:(long long)a0;
- (void)setSpokenNotificationSetting:(long long)a0;
- (void)setAnnouncementSetting:(long long)a0;

@end
