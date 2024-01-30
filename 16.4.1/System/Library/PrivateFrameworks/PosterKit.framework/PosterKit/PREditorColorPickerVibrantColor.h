@class PRPosterColor, NSString;

@interface PREditorColorPickerVibrantColor : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, PREditorColorPickerColor, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PRPosterColor *color;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL isCustomColor;
@property (readonly) BOOL isVibrantColor;
@property (readonly, nonatomic) double initialVariation;
@property (readonly, copy, nonatomic) PRPosterColor *baseColor;
@property (readonly, nonatomic) PRPosterColor *leftSliderColor;
@property (readonly, nonatomic) PRPosterColor *rightSliderColor;
@property (readonly, copy, nonatomic) NSString *localizedName;

+ (BOOL)supportsBSXPCSecureCoding;
+ (double)luminanceForPosterColor:(id)a0 withAppliedVariation:(double)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithColor:(id)a0 initialVariation:(double)a1;
- (id)colorWithVariation:(double)a0;
- (id)displayColorWithVariation:(double)a0;
- (double)variationForAlpha:(double)a0;

@end
