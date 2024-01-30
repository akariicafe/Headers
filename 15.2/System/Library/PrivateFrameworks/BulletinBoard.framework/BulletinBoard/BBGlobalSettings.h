@class NSArray;

@interface BBGlobalSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long globalContentPreviewSetting;
@property (nonatomic) long long globalAnnounceSetting;
@property (nonatomic) long long globalAnnounceHeadphonesSetting;
@property (nonatomic) long long globalAnnounceCarPlaySetting;
@property (nonatomic) long long globalScheduledDeliverySetting;
@property (copy, nonatomic) NSArray *globalScheduledDeliveryTimes;
@property (nonatomic) long long globalScheduledDeliveryShowNextSummarySetting;
@property (readonly, nonatomic) long long globalSpokenNotificationSetting;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithContentPreviewSetting:(long long)a0 announceSetting:(long long)a1 announceHeadphonesSetting:(long long)a2 announceCarPlaySetting:(long long)a3 scheduledDeliverySetting:(long long)a4 scheduledDeliveryTimes:(id)a5 scheduledDeliveryShowNextSummarySetting:(long long)a6;

@end
