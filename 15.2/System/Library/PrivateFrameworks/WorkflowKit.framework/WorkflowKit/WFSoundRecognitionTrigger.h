@class NSSet;

@interface WFSoundRecognitionTrigger : WFTrigger

@property (copy, nonatomic) NSSet *soundDetectionTypes;

+ (id)localizedDisplayName;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isAllowedToRunAutomatically;
+ (long long)triggerBacking;
+ (id)localizedDisplayExplanation;
+ (id)displayGlyph;
+ (double)displayGlyphCornerRadius;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasValidConfiguration;

@end
