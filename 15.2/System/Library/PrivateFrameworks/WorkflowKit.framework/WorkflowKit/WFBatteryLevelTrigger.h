@interface WFBatteryLevelTrigger : WFTrigger

@property (nonatomic) unsigned long long level;
@property (nonatomic) unsigned long long selection;

+ (id)localizedDisplayName;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;
+ (id)displayGlyphHierarchicalColors;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
