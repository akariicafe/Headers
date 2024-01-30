@class NSError, NSUUID, NSString, NSDate, CWFScanResult, CWFNetworkProfile;

@interface CWFJoinStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

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
@property (copy, nonatomic) NSDate *associationEndedAt;
@property (copy, nonatomic) NSDate *authenticationEndedAt;
@property (copy, nonatomic) NSDate *IPv4AssignedAt;
@property (copy, nonatomic) NSDate *IPv6AssignedAt;
@property (copy, nonatomic) NSError *error;
@property (nonatomic, getter=isAutoJoin) BOOL autoJoin;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToJoinStatus:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
