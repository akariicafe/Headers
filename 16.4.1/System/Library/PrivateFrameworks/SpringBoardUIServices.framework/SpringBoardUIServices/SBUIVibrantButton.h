@class _SBFVibrantSettings, NSString, UIImage, UIView, _UILegibilitySettings, UIImageView, SBUILegibilityView, UILabel, SBUILegibilityLabel;

@interface SBUIVibrantButton : UIControl <_SBFVibrantView, SBUILegibility> {
    UIView *_vibrantMaskView;
    UILabel *_vibrantMaskLabel;
    UIImageView *_vibrantMaskGlyphView;
    UIView *_vibrantGlyph;
    UIView *_vibrantGlyphBackgroundView;
    UIView *_vibrantGlyphTintView;
    UIView *_nonVibrantGlyph;
    SBUILegibilityView *_nonVibrantGlyphLegibilityView;
    SBUILegibilityLabel *_nonVibrantLegibilityLabel;
}

@property (nonatomic, getter=isVibrancyAllowed) BOOL vibrancyAllowed;
@property (retain, nonatomic) UIImage *glyphImage;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) double minimumTitleScaleFactor;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (retain, nonatomic) _SBFVibrantSettings *vibrantSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;

+ (id)_labelFont;

- (id)backgroundColor;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setBackgroundView:(id)a0;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_updateForState;
- (double)_alphaForState;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_glyphFrameForSize:(struct CGSize { double x0; double x1; })a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_labelFrameForSize:(struct CGSize { double x0; double x1; })a0 baselineOffset:(double)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)_layoutNonVibrantSubviews;
- (void)_layoutVibrantSubviews;
- (id)_lazyGlyphLegibilityView;
- (void)_setUpForCurrentVibrancy;
- (BOOL)_shouldUseVibrancy;
- (struct CGSize { double x0; double x1; })_sizeThatFitsForLabelView:(id)a0;
- (struct CGSize { double x0; double x1; })_sizeThatFitsWithVibrancy;
- (struct CGSize { double x0; double x1; })_sizeThatFitsWithoutVibrancy;
- (void)setLegibilitySettings:(id)a0 textStrength:(double)a1;

@end
