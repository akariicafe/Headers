@class NSString, NSArray;

@interface NEIPv6Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property long long configMethod;
@property (copy) NSString *router;
@property (readonly) NSArray *addresses;
@property (readonly) NSArray *networkPrefixLengths;
@property (copy) NSArray *includedRoutes;
@property (copy) NSArray *excludedRoutes;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)initFromLegacyDictionary:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)hasDefaultRoute;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAddresses:(id)a0 networkPrefixLengths:(id)a1;
- (id)copyLegacyDictionary;

@end
