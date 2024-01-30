@class NSString;

@interface NEDNSOverTLSSettings : NEDNSSettings

@property (copy) NSString *serverName;

+ (BOOL)supportsSecureCoding;

- (id)initFromLegacyDictionary:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (long long)dnsProtocol;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
