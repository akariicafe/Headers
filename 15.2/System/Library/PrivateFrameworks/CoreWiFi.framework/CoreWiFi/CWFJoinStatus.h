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

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToJoinStatus:(id)a0;

@end
