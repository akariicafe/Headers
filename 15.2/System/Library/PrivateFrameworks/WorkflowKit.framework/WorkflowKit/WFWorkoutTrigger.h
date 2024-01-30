@class NSArray;

@interface WFWorkoutTrigger : WFTrigger

@property (nonatomic) unsigned long long selection;
@property (copy, nonatomic) NSArray *selectedWorkoutTypes;
@property (nonatomic) BOOL onStart;
@property (nonatomic) BOOL onEnd;

+ (id)localizedDisplayName;
+ (BOOL)supportsSecureCoding;
+ (id)onLabel;
+ (BOOL)isUserInitiated;
+ (id)offIcon;
+ (BOOL)isSupportedOnThisDevice;
+ (id)onIcon;
+ (id)offLabel;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;
+ (id)displayGlyphHierarchicalColors;
+ (id)workoutColors;
+ (id)stopColor;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
