@class NSArray;

@interface UNMutableNotificationSystemSettings : UNNotificationSystemSettings

@property (nonatomic) long long showPreviewsSetting;
@property (nonatomic) long long announcementSetting;
@property (nonatomic) long long announcementHeadphonesSetting;
@property (nonatomic) long long announcementCarPlaySetting;
@property (nonatomic) long long scheduledDeliverySetting;
@property (copy, nonatomic) NSArray *scheduledDeliveryTimes;
@property (nonatomic) long long scheduledDeliveryShowNextSummarySetting;
@property (nonatomic) long long notificationListDisplayStyleSetting;
@property (nonatomic) long long spokenNotificationSetting;

- (void)setScheduledDeliverySetting:(long long)a0;
- (void)setAnnouncementCarPlaySetting:(long long)a0;
- (void)setNotificationListDisplayStyleSetting:(long long)a0;
- (void)setSpokenNotificationSetting:(long long)a0;
- (void)setAnnouncementHeadphonesSetting:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setScheduledDeliveryShowNextSummarySetting:(long long)a0;
- (void)setAnnouncementSetting:(long long)a0;
- (void)setShowPreviewsSetting:(long long)a0;
- (void)setScheduledDeliveryTimes:(id)a0;

@end
