@class NSArray, NSURL;

@interface NEEvaluateConnectionRule : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long action;
@property (readonly) NSArray *matchDomains;
@property (copy) NSArray *useDNSServers;
@property (copy) NSURL *probeURL;

- (BOOL)checkValidityAndCollectErrors:(id)a0;
- (id)initFromLegacyDictionary:(id)a0;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithMatchDomains:(id)a0 andAction:(long long)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyLegacyDictionary;

@end
