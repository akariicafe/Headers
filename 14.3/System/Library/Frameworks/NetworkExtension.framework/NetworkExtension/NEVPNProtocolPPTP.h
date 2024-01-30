@interface NEVPNProtocolPPTP : NEVPNProtocolPPP

@property long long encryptionLevel;

+ (BOOL)supportsSecureCoding;

- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)init;
- (id)initFromLegacyDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (struct __SCNetworkInterface { } *)createInterface;
- (void)encodeWithCoder:(id)a0;

@end
