@class UIFont, NSString, NSAttributedString, _UILegibilitySettings, NSArray, UILayoutGuide, _UILegibilityView, UILabel, UIColor;

@interface HULegibilityLabel : UIView {
    UILabel *_lookasideLabel;
    _UILegibilityView *_legibilityView;
    BOOL _isDirty;
    long long _options;
    NSArray *_legibilityConstraints;
    UILayoutGuide *_firstBaselineLayoutGuide;
    UILayoutGuide *_lastBaselineLayoutGuide;
    UIColor *_textColorOverride;
}

@property (nonatomic) double strength;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) long long numberOfLines;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (readonly, nonatomic) double firstBaselineOffsetFromBottom;
@property (readonly, nonatomic) double lastBaselineOffsetFromBottom;
@property (readonly, nonatomic) double baselineOffset;

- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (void)setNumberOfLines:(long long)a0;
- (void)setOptions:(long long)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)adjustsFontSizeToFitWidth;
- (long long)numberOfLines;
- (id)initWithSettings:(id)a0 strength:(double)a1;
- (void)_updateLabelForLegibilitySettings;
- (void)_markOurselfDirty;
- (double)minimumScaleFactor;
- (void)setMinimumScaleFactor:(double)a0;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateLegibilityView;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateForChangedSettings:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithSettings:(id)a0 strength:(double)a1 text:(id)a2 font:(id)a3 options:(long long)a4;
- (id)initWithSettings:(id)a0 strength:(double)a1 text:(id)a2 font:(id)a3;
- (double)_layoutGuideOffsetFromBottom:(id)a0;

@end
