@interface WFTrigger : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)localizedDisplayName;
+ (id)onLabel;
+ (BOOL)isUserInitiated;
+ (id)offIcon;
+ (BOOL)isSupportedOnThisDevice;
+ (id)onIcon;
+ (id)offLabel;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)displayGlyphName;
+ (id)displayGlyphTintColor;
+ (id)localizedDisplayExplanation;
+ (id)displayGlyph;
+ (double)displayGlyphCornerRadius;
+ (id)onIconTintColor;
+ (id)offIconTintColor;
+ (id)displayGlyphHierarchicalColors;
+ (id)triggerWithSerializedData:(id)a0;

- (id)localizedDisplayName;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)serializedData;
- (void)configureWithConfiguration:(id)a0;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;
- (BOOL)hasValidConfiguration;
- (id)displayGlyphName;
- (id)displayGlyphTintColor;
- (id)localizedDisplayExplanation;
- (id)displayGlyph;
- (double)displayGlyphCornerRadius;
- (id)displayGlyphHierarchicalColors;

@end
