@class NSUUID, HMDDeviceAddress, HMDDevice;

@interface HMDBulletinNotificationRegistrationSource : HMFObject <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *userUUID;
@property (readonly, copy) HMDDeviceAddress *deviceAddress;
@property (readonly, copy) HMDDevice *device;

+ (id)type;
+ (BOOL)doesTypeMatch:(id)a0 against:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)initWithUserUUID:(id)a0 deviceAddress:(id)a1;
- (id)serializedRegistrationForRemoteMessage;

@end
