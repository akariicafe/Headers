@class NSArray;

@interface WFAppInFocusTrigger : WFTrigger

@property (copy, nonatomic) NSArray *selectedBundleIdentifiers;
@property (nonatomic) BOOL onFocus;
@property (nonatomic) BOOL onBackground;

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

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;

@end
