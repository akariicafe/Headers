@class NSString, NSData;

@interface NEDNSOverTLSSettings : NEDNSSettings

@property (copy) NSString *serverName;
@property (copy) NSData *identityReference;

+ (BOOL)supportsSecureCoding;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initFromLegacyDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)dnsProtocol;

@end
