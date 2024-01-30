@class NSDictionary, NSArray, NSString;

@interface NEAppPush : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (getter=isEnabled) BOOL enabled;
@property (copy) NSDictionary *providerConfiguration;
@property (copy) NSArray *matchSSIDs;
@property (copy) NSArray *matchPrivateLTENetworks;
@property (copy) NSString *pluginType;
@property (copy) NSString *providerBundleIdentifier;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)overlapsWithConfiguration:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValidMCC:(id)a0;
- (BOOL)isValidMNC:(id)a0;
- (BOOL)isValidTAC:(id)a0;
- (BOOL)checkPLTEArrayContainsPLTEObj:(id)a0 plteObject:(id)a1;
- (BOOL)checkPLTEArryOverLap:(id)a0 right:(id)a1;

@end
