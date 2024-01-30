@class NSUUID, NSSet, NSPredicate;

@interface HMDBulletinNotificationRegistration : HMFObject <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSUUID *remoteDeviceIdentifier;
@property (readonly, copy) NSSet *conditions;
@property (readonly, copy) NSPredicate *predicate;

+ (id)type;
+ (BOOL)doesTypeMatch:(id)a0 against:(id)a1;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)serializedRegistrationForRemoteMessage;
- (id)initWithRemoteDeviceIdentifier:(id)a0 conditions:(id)a1;

@end
