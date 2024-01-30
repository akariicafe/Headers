@class NEIPv6Settings, NEIPv4Settings;

@interface NEVPNProtocolPPP : NEVPNProtocol

@property long long authenticationMethod;
@property BOOL verboseLoggingEnabled;
@property (copy) NEIPv4Settings *IPv4Settings;
@property (copy) NEIPv6Settings *IPv6Settings;

+ (BOOL)supportsSecureCoding;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)initFromLegacyDictionary:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)setServiceProtocolsInService:(struct __SCNetworkService { } *)a0;
- (BOOL)updateWithServiceProtocolsFromService:(struct __SCNetworkService { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(long long)a0;
- (id)copyLegacyDictionary;

@end
