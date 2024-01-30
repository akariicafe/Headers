@class NSString, NSUUID, NSData, NSDate;

@interface CWFRoamStatus : NSObject <CWFJSONEncodable, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *interfaceName;
@property (copy, nonatomic) NSDate *startedAt;
@property (copy, nonatomic) NSDate *endedAt;
@property (readonly) double duration;
@property (copy, nonatomic) NSData *SSID;
@property (readonly, copy, nonatomic) NSString *networkName;
@property (copy, nonatomic) NSString *originOUI;
@property (copy, nonatomic) NSString *targetOUI;
@property (copy, nonatomic) NSString *fromBSSID;
@property (copy, nonatomic) NSString *toBSSID;
@property (nonatomic) unsigned long long fromChannel;
@property (nonatomic) unsigned long long toChannel;
@property (nonatomic) long long fromRSSI;
@property (nonatomic) long long toRSSI;
@property (nonatomic) int reason;
@property (nonatomic) long long status;

- (id)networkName;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)JSONCompatibleKeyValueMap;
- (id)init;
- (void).cxx_destruct;
- (id)descriptionForRoamReason;
- (BOOL)isEqualToRoamStatus:(id)a0;

@end
