@class PKDiscoveryRelevantDateRange, NSString, NSArray, PKOSVersionRequirementRange, PKHardwareVersionRange;

@interface PKDiscoveryObject : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *ruleIdentifier;
@property (retain, nonatomic) NSArray *triggers;
@property (retain, nonatomic) PKOSVersionRequirementRange *osVersionRange;
@property (retain, nonatomic) PKHardwareVersionRange *hardwareVersionRange;
@property (retain, nonatomic) PKDiscoveryRelevantDateRange *relevantDateRange;
@property (nonatomic) long long maxViewCount;
@property (nonatomic) long long status;
@property (nonatomic) long long viewCount;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)incrementViewCount;
- (BOOL)updateWithDiscoveryObject:(id)a0;
- (BOOL)isTerminalStatus;
- (void)updateForRuleResult:(BOOL)a0;
- (BOOL)hasTriggers;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isValidForTime:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)updatedStatusForAction:(long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
