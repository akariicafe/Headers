@class NSArray;

@interface NEPathController : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSArray *payloadAppRules;
@property (getter=isEnabled) BOOL enabled;
@property BOOL ignoreRouteRules;
@property BOOL ignoreFallback;
@property long long cellularFallbackFlags;
@property (copy) NSArray *pathRules;
@property (readonly, nonatomic) BOOL hasNonDefaultRules;

+ (id)copyAggregatePathRules;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)copyPathRuleBySigningIdentifier:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)copyPathRuleSigningIdentifiers;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)removePathRuleBySigningIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
