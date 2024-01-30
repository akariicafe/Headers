@interface WFSleepTrigger : WFTrigger

@property (nonatomic) unsigned long long selection;

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (BOOL)isAllowedToRunAutomatically;
+ (id)localizedDisplayExplanation;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
