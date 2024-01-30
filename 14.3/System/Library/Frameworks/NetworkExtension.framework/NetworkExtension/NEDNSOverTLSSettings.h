@class NSString;

@interface NEDNSOverTLSSettings : NEDNSSettings

@property (copy) NSString *serverName;

+ (BOOL)supportsSecureCoding;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initFromLegacyDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (long long)dnsProtocol;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
