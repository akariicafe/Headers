@class NSString;

@interface WFNFCTrigger : WFTrigger

@property (copy, nonatomic) NSString *tagIdentifier;
@property (copy, nonatomic) NSString *name;

+ (id)localizedDisplayName;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isUserInitiated;
+ (BOOL)isSupportedOnThisDevice;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
