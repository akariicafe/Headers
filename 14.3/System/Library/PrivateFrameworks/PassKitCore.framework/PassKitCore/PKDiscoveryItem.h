@class NSURL, NSArray;

@interface PKDiscoveryItem : PKDiscoveryObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSURL *layoutBundleURL;
@property (retain, nonatomic) NSArray *supportedLocalizations;
@property (nonatomic) BOOL shouldBadge;
@property (nonatomic) long long priority;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateForRuleResult:(BOOL)a0;
- (void)updateWithDiscoveryItem:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
