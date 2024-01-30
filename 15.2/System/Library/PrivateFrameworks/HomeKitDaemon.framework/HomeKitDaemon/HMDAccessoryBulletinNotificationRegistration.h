@class NSUUID, NSNumber;

@interface HMDAccessoryBulletinNotificationRegistration : HMDBulletinNotificationRegistration <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly, copy) NSNumber *characteristicInstanceID;

+ (id)type;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)serializedRegistrationForRemoteMessage;
- (id)initWithAccessoryUUID:(id)a0 characteristicInstanceID:(id)a1 remoteDeviceIdentifier:(id)a2 conditions:(id)a3;

@end
