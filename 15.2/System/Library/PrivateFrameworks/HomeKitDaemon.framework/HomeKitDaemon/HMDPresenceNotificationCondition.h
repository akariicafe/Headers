@class NSSet, NSUUID;

@interface HMDPresenceNotificationCondition : HMDNotificationCondition <HMDBulletinNotificationRegistrationRemoteCoding>

@property (readonly) unsigned long long presenceEventType;
@property (readonly) unsigned long long presenceEventUserType;
@property (readonly, copy) NSSet *userUUIDs;
@property (readonly, copy) NSUUID *eventUUID;

+ (BOOL)supportsSecureCoding;
+ (id)type;

- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)serializedRegistrationForRemoteMessage;
- (id)initWithPresenceEventType:(unsigned long long)a0 presenceEventUserType:(unsigned long long)a1 userUUIDs:(id)a2 eventUUID:(id)a3;

@end
