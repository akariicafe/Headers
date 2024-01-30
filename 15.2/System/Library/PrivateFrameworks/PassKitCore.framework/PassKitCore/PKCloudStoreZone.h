@class NSString, NSSet;

@interface PKCloudStoreZone : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *containerName;
@property (copy, nonatomic) NSString *zoneName;
@property (copy, nonatomic) NSString *ownerName;
@property (nonatomic) long long scope;
@property (retain, nonatomic) NSString *zoneSubscriptionIdentifier;
@property (copy, nonatomic) NSSet *shareParticipants;

+ (void)zoneValueForZoneName:(id)a0 outZoneType:(unsigned long long *)a1 outAccountIdentifier:(id *)a2 altDSID:(id *)a3;

- (id)recordZone;
- (id)shareParticipantWithHandle:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)shareParticipantWithLookupInfo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)zoneType;
- (id)zoneSubscription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithZoneID:(id)a0 containerDatabase:(id)a1;
- (unsigned long long)hash;
- (id)initWithZoneID:(id)a0 containerName:(id)a1 scope:(long long)a2;

@end
