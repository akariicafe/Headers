@class UIColor, NSString, UIFont, _UILegibilityView, UILabel, NSAttributedString, _UILegibilitySettings;

@interface SBUILegibilityLabel : UIView <SBUILegibility> {
    UILabel *_lookasideLabel;
    _UILegibilityView *_legibilityView;
    BOOL _isDirty;
    long long _options;
    double _scale;
    UIColor *_textColorOverride;
    BOOL _isWaitingToMoveToWindow;
}

@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) long long textAlignment;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) float hyphenationFactor;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } characterOverflowInsets;
@property (readonly, nonatomic) double firstBaselineOffsetFromBottom;
@property (readonly, nonatomic) double lastBaselineOffsetFromBottom;
@property (readonly, nonatomic) double baselineOffset;
@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)viewForFirstBaselineLayout;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (float)hyphenationFactor;
- (void)setHyphenationFactor:(float)a0;
- (void)_intrinsicContentSizeInvalidatedForChildView:(id)a0;
- (long long)lineBreakMode;
- (void)setTextAlignment:(long long)a0;
- (void)setNumberOfLines:(long long)a0;
- (id)initWithSettings:(id)a0 strength:(double)a1 string:(id)a2 font:(id)a3;
- (id)initWithSettings:(id)a0 strength:(double)a1;
- (id)initWithSettings:(id)a0 strength:(double)a1 string:(id)a2 font:(id)a3 options:(long long)a4;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)minimumScaleFactor;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)adjustsFontSizeToFitWidth;
- (void)setLineBreakMode:(long long)a0;
- (void)_updateLabelForLegibilitySettings;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)a0;
- (void)_updateLegibilityView;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)_needsColorImage;
- (long long)numberOfLines;
- (void)setMinimumScaleFactor:(double)a0;
- (void)didMoveToWindow;
- (void)setOptions:(long long)a0;
- (void)_markOurselfDirty;
- (long long)textAlignment;

@end
