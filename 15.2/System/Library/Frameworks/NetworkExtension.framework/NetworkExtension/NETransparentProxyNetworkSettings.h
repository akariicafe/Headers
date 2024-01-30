@class NSArray;

@interface NETransparentProxyNetworkSettings : NETunnelNetworkSettings

@property BOOL isFullyTransparent;
@property (copy) NSArray *includedNetworkRules;
@property (copy) NSArray *excludedNetworkRules;

+ (BOOL)supportsSecureCoding;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)validateNetworkRule:(id)a0 collectErrors:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
