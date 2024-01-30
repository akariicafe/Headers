@class NSUUID, NSString, NSData, NSDate;

@interface CWFRoamStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *interfaceName;
@property (copy, nonatomic) NSDate *startedAt;
@property (copy, nonatomic) NSDate *endedAt;
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

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)networkName;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToRoamStatus:(id)a0;

@end
