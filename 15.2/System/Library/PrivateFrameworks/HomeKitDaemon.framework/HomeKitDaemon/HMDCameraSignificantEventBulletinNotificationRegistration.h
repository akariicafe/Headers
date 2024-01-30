@class NSUUID;

@interface HMDCameraSignificantEventBulletinNotificationRegistration : HMDBulletinNotificationRegistration <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *cameraIdentifier;
@property (readonly) unsigned long long notificationModes;
@property (readonly) unsigned long long significantEventTypes;
@property (readonly) unsigned long long personFamiliarityOptions;

+ (id)type;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (id)predicate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)serializedRegistrationForRemoteMessage;
- (id)initWithCameraIdentifier:(id)a0 remoteDeviceIdentifier:(id)a1 conditions:(id)a2 notificationModes:(unsigned long long)a3 significantEventTypes:(unsigned long long)a4 personFamiliarityOptions:(unsigned long long)a5;

@end
