@class NSString, CWFChannel, NSData, NSDate, CLLocation, NSDictionary;

@interface CWFBSS : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *BSSID;
@property (copy, nonatomic) CWFChannel *channel;
@property (copy, nonatomic) NSDate *lastAssociatedAt;
@property (copy, nonatomic) CLLocation *location;
@property (copy, nonatomic) NSDate *AWDLRealTimeModeTimestamp;
@property (copy, nonatomic) NSData *DHCPServerID;
@property (copy, nonatomic) NSData *DHCPv6ServerID;
@property (copy, nonatomic) NSString *IPv4NetworkSignature;
@property (copy, nonatomic) NSString *IPv6NetworkSignature;
@property (copy, nonatomic) CWFChannel *colocated2GHzRNRChannel;
@property (copy, nonatomic) CWFChannel *colocated5GHzRNRChannel;
@property (copy, nonatomic) NSDictionary *OSSpecificAttributes;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToBSS:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)__updateWithExternalForm:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)setCoreWiFiSpecificAttributes:(id)a0;
- (unsigned long long)hash;
- (id)externalForm;
- (id)__coreWiFiSpecificKeys;
- (id)description;
- (void).cxx_destruct;
- (id)initWithExternalForm:(id)a0;
- (id)coreWiFiSpecificAttributes;

@end
