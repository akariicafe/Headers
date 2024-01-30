@interface UNNotificationSystemSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long showPreviewsSetting;
@property (readonly, nonatomic) long long announcementSetting;
@property (readonly, nonatomic) long long spokenNotificationSetting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithShowPreviewsSetting:(long long)a0 announcementSetting:(long long)a1;

@end
