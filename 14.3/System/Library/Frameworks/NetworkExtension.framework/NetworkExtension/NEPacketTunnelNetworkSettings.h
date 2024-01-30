@class NSNumber, NEIPv6Settings, NEIPv4Settings;

@interface NEPacketTunnelNetworkSettings : NETunnelNetworkSettings

@property (copy) NEIPv4Settings *IPv4Settings;
@property (copy) NEIPv6Settings *IPv6Settings;
@property (copy) NSNumber *tunnelOverheadBytes;
@property (copy) NSNumber *MTU;

+ (BOOL)supportsSecureCoding;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)initFromLegacyDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
