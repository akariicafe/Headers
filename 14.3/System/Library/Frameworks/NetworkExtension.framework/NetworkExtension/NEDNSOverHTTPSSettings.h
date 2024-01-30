@class NSURL;

@interface NEDNSOverHTTPSSettings : NEDNSSettings

@property (copy) NSURL *serverURL;

+ (BOOL)supportsSecureCoding;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)initFromLegacyDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (long long)dnsProtocol;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
