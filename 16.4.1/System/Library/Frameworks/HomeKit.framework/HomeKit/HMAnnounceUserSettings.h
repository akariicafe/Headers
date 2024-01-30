@interface HMAnnounceUserSettings : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long deviceNotificationMode;

+ (id)shortDescription;

- (void)encodeWithCoder:(id)a0;
- (id)privateDescription;
- (id)initWithCoder:(id)a0;
- (id)shortDescription;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)attributeDescriptions;
- (id)initWithDeviceNotificationMode:(unsigned long long)a0;

@end
