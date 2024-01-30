@class NSUUID, NSNumber;

@interface HMDAccessoryBulletinNotificationRegistration : HMDBulletinNotificationRegistration <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *accessoryUUID;
@property (readonly, copy) NSNumber *serviceInstanceID;
@property (readonly, copy) NSNumber *characteristicInstanceID;

+ (id)type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithAccessoryUUID:(id)a0 serviceInstanceID:(id)a1 characteristicInstanceID:(id)a2 conditions:(id)a3;
- (id)serializedRegistrationForRemoteMessage;

@end
