@class UIColor;

@interface PKPassColorProfile : NSObject {
    double _backgroundLightness;
    double _foregroundLightness;
    double _labelLightness;
    PKPassColorProfile *_stripProfile;
}

@property (readonly, nonatomic) UIColor *backgroundColor;
@property (readonly, nonatomic) UIColor *foregroundColor;
@property (readonly, nonatomic) UIColor *labelColor;
@property (readonly, nonatomic) UIColor *highlightColor;
@property (readonly, nonatomic) BOOL isLight;
@property (readonly, nonatomic) double overlayDarkeningAlpha;
@property (readonly, nonatomic) double regularDarkeningAlpha;
@property (readonly, nonatomic) double overlayLighteningAlpha;
@property (readonly, nonatomic) double regularLighteningAlpha;

+ (id)profileForDisplayProfile:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)labelColorOverStrip:(BOOL)a0;
- (id)foregroundColorOverStrip:(BOOL)a0;
- (id)labelImageForGlyph:(id)a0;
- (id)_initWithBackgroundColor:(id)a0 foregroundColor:(id)a1 labelColor:(id)a2;
- (id)_imageForGlyph:(id)a0 color:(id)a1;
- (void)_calculateColorsWithBackgroundColor:(id)a0 foregroundColor:(id)a1 labelColor:(id)a2;
- (id)foregroundImageForGlyph:(id)a0;
- (id)foregroundAttributesForFont:(id)a0;
- (id)labelAttributesForFont:(id)a0;

@end
