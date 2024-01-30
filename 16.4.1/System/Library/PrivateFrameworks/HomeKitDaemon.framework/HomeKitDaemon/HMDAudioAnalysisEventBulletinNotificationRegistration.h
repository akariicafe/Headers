@class NSUUID;

@interface HMDAudioAnalysisEventBulletinNotificationRegistration : HMDBulletinNotificationRegistration <NSCopying, NSSecureCoding, HMDBulletinNotificationRegistrationRemoteCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long audioAnalysisClassifierOptions;
@property (readonly, copy) NSUUID *accessoryUUID;

+ (id)type;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)attributeDescriptions;
- (void).cxx_destruct;
- (id)predicate;
- (id)initWithConditions:(id)a0 audioAnalysisClassifierOptions:(unsigned long long)a1 accessoryUUID:(id)a2;
- (id)initWithLocalBulletinAudioAnalysisRegistration:(id)a0;
- (id)initWithPredicate:(id)a0 accessoryUUID:(id)a1;
- (id)serializedRegistrationForRemoteMessage;

@end
