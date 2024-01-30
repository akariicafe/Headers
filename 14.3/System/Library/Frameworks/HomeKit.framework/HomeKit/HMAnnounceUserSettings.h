@interface HMAnnounceUserSettings : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long deviceNotificationMode;

+ (id)shortDescription;

- (id)shortDescription;
- (id)attributeDescriptions;
- (id)initWithDeviceNotificationMode:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)privateDescription;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
