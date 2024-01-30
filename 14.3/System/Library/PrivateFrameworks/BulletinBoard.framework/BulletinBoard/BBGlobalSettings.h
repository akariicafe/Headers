@interface BBGlobalSettings : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long globalContentPreviewSetting;
@property (nonatomic) long long globalSpokenNotificationSetting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithContentPreviewSetting:(long long)a0 spokenNotificationSetting:(long long)a1;

@end
