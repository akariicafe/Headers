@class NSUUID;

@interface HMDCameraAccessModeBulletinNotificationRegistration : HMDBulletinNotificationRegistration <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *accessoryUUID;

+ (id)type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithAccessoryUUID:(id)a0 conditions:(id)a1;
- (id)serializedRegistrationForRemoteMessage;

@end
