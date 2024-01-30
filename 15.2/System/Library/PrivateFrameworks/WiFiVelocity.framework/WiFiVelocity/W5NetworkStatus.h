@class NSString, NSArray;

@interface W5NetworkStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *primaryIPv4InterfaceName;
@property (copy, nonatomic) NSString *primaryIPv4ServiceName;
@property (copy, nonatomic) NSString *primaryIPv6InterfaceName;
@property (copy, nonatomic) NSString *primaryIPv6ServiceName;
@property (copy, nonatomic) NSString *primaryIPv4ServiceID;
@property (copy, nonatomic) NSString *primaryIPv6ServiceID;
@property (copy, nonatomic) NSArray *primaryIPv4Addresses;
@property (copy, nonatomic) NSArray *primaryIPv6Addresses;
@property (copy, nonatomic) NSString *primaryIPv4Router;
@property (copy, nonatomic) NSString *primaryIPv6Router;
@property (copy, nonatomic) NSArray *primaryDNSAddresses;
@property (nonatomic) unsigned int isAppleReachable;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)isEqualToNetworkStatus:(id)a0;

@end
