@class NSString;

@interface NEIPv4Route : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *destinationAddress;
@property (readonly) NSString *destinationSubnetMask;
@property (copy) NSString *gatewayAddress;

+ (void)initGlobals;
+ (id)defaultRoute;

- (id)copyLegacyDictionary;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)initFromLegacyDictionary:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isDefaultRoute;
- (id)initWithCoder:(id)a0;
- (id)initWithDestinationAddress:(id)a0 subnetMask:(id)a1;
- (void)encodeWithCoder:(id)a0;

@end
