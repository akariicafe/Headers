@interface WFPredictedLocationTransitionTrigger : WFTrigger

@property (nonatomic) unsigned long long destinationType;
@property (nonatomic) unsigned long long minutesBefore;

+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (id)localizedDisplayExplanation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
