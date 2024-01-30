@class NSArray, NSString;

@interface NEIPv4Settings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL overridePrimary;
@property long long configMethod;
@property (readonly) NSArray *addresses;
@property (readonly) NSArray *subnetMasks;
@property (copy) NSString *router;
@property (copy) NSArray *includedRoutes;
@property (copy) NSArray *excludedRoutes;

+ (id)settingsWithAutomaticAddressing;

- (id)copyLegacyDictionary;
- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initFromLegacyDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)hasDefaultRoute;
- (id)initWithAddresses:(id)a0 subnetMasks:(id)a1;
- (id)initWithConfigMethod:(long long)a0;

@end
