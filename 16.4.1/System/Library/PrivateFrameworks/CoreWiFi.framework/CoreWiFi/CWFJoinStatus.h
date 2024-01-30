@class NSError, NSString, NSUUID, NSDate, CWFScanResult, CWFNetworkProfile;

@interface CWFJoinStatus : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *interfaceName;
@property (copy, nonatomic) CWFScanResult *scanResult;
@property (copy, nonatomic) CWFNetworkProfile *knownNetworkProfile;
@property (nonatomic) unsigned int EAP8021XSupplicantState;
@property (nonatomic) unsigned int EAP8021XControlMode;
@property (nonatomic) unsigned int EAP8021XControlState;
@property (nonatomic) int EAP8021XClientStatus;
@property (copy, nonatomic) NSDate *startedAt;
@property (copy, nonatomic) NSDate *endedAt;
@property (readonly) double duration;
@property (copy, nonatomic) NSDate *associationEndedAt;
@property (readonly) double durationUntilAssociationEnded;
@property (copy, nonatomic) NSDate *authenticationEndedAt;
@property (readonly) double durationUntilAuthenticationEnded;
@property (copy, nonatomic) NSDate *IPv4AssignedAt;
@property (readonly) double durationUntilIPv4Assigned;
@property (copy, nonatomic) NSDate *IPv4PrimaryAt;
@property (readonly) double durationUntilIPv4Primary;
@property (copy, nonatomic) NSDate *IPv6AssignedAt;
@property (readonly) double durationUntilIPv6Assigned;
@property (copy, nonatomic) NSDate *IPv6PrimaryAt;
@property (readonly) double durationUntilIPv6Primary;
@property (copy, nonatomic) NSError *error;
@property (nonatomic, getter=isAutoJoin) BOOL autoJoin;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)JSONCompatibleKeyValueMap;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionForEAPOLClientStatus;
- (id)descriptionForEAP8021XControlState;
- (id)descriptionForEAPOLControlMode;
- (BOOL)isEqualToJoinStatus:(id)a0;

@end
