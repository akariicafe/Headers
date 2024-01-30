@class NSString, WFColor;

@interface WFUserFocusActivityTrigger : WFTrigger

@property (retain, nonatomic) NSString *activityName;
@property (retain, nonatomic) NSString *activityUniqueIdentifier;
@property (retain, nonatomic) NSString *activitySemanticIdentifier;
@property (retain, nonatomic) NSString *activityGlyphName;
@property (retain, nonatomic) WFColor *activityTintColor;
@property (nonatomic) BOOL onEnable;
@property (nonatomic) BOOL onDisable;

+ (id)localizedDisplayName;
+ (BOOL)supportsSecureCoding;
+ (id)tintColor;
+ (id)onLabel;
+ (BOOL)isUserInitiated;
+ (id)offIcon;
+ (id)onIcon;
+ (id)offLabel;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (id)localizedDisplayExplanation;
+ (id)onIconTintColor;
+ (id)offIconTintColor;

- (id)localizedDisplayName;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithActivity:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;
- (id)displayGlyphName;
- (id)displayGlyphTintColor;
- (id)localizedDisplayExplanation;
- (id)displayGlyph;

@end
