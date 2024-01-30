@class UIColor, UIVisualEffectView, UIView, CABasicAnimation;

@interface VKImageAnalysisButton : UIButton

@property (readonly, nonatomic) UIView *_backgroundView;
@property (readonly, nonatomic) UIView *_selectedBackgroundView;
@property (retain, nonatomic) UIView *_selectedBackgroundColorView;
@property (retain, nonatomic) UIVisualEffectView *_selectedBackgroundVisualEffectView;
@property (retain, nonatomic) UIVisualEffectView *_backgroundVisualEffectView;
@property (nonatomic) double _highlightedGlyphScaleFactor;
@property (retain, nonatomic) CABasicAnimation *_highlightedGlyphAnimation;
@property (nonatomic) BOOL didManuallySetBackgroundDiameter;
@property (nonatomic) double backgroundDiameter;
@property (nonatomic) double glyphRotation;
@property (retain, nonatomic) UIColor *cameraModeBackgroundColor;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long glyphConfiguration;
@property (nonatomic) unsigned long long function;
@property (nonatomic) BOOL prefersDarkGlyphWhenSelected;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectedIndicatorBounds;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (double)_selectedIndicatorAlpha;
- (id)_selectedIndicatorViewWithImage:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_updateGlyph;
- (void)tintColorDidChange;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)setHighlightedGlyphScaleFactor:(double)a0 animation:(id)a1;
- (void)_updateBackgroundColors;
- (void)_commonVKImageAnalysisButtonInitialization;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_glyphTransformForRotation:(double)a0 highlighted:(BOOL)a1;
- (void)setupForFunction:(unsigned long long)a0;

@end
