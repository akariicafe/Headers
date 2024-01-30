@class NSString, NEDNSSettings, NEProxySettings;

@interface NETunnelNetworkSettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *tunnelRemoteAddress;
@property (copy) NEDNSSettings *DNSSettings;
@property (copy) NEProxySettings *proxySettings;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)initFromLegacyDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTunnelRemoteAddress:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
