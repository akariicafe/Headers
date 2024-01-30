@class NSArray;

@interface WFWorkoutTrigger : WFTrigger

@property (nonatomic) unsigned long long selection;
@property (copy, nonatomic) NSArray *selectedWorkoutTypes;
@property (nonatomic) BOOL onStart;
@property (nonatomic) BOOL onEnd;

+ (BOOL)isUserInitiated;
+ (BOOL)supportsSecureCoding;
+ (id)localizedDisplayName;
+ (BOOL)isSupportedOnThisDevice;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)onLabel;
+ (id)offIcon;
+ (id)displayGlyphHierarchicalColors;
+ (id)displayGlyphName;
+ (id)localizedDisplayExplanation;
+ (id)offLabel;
+ (id)onIcon;
+ (id)stopColor;
+ (id)workoutColors;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
