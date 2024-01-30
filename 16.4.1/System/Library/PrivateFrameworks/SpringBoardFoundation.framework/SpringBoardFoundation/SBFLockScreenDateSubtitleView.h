@class UIFont, NSString, SBUILegibilityLabel, UIView, _UILegibilitySettings;

@interface SBFLockScreenDateSubtitleView : UIView {
    SBUILegibilityLabel *_label;
}

@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double strength;
@property (retain, nonatomic) UIFont *font;
@property (readonly, nonatomic) double baselineOffsetFromOrigin;
@property (readonly, nonatomic) double baselineOffsetFromBottom;
@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) UIView *accessoryView;

+ (id)labelFont;
+ (double)scaledFontSize:(double)a0 withMaximumFontSizeCategory:(id)a1;
+ (struct { double x0; double x1; double x2; double x3; })labelFontMetrics;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })subtitleLabelCharacterOverflowInsets;
- (id)initWithString:(id)a0 accessoryView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessoryViewFrame;
- (void)_updateForCurrentSizeCategory;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })subtitleLabelFrame;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (id)init;
- (void).cxx_destruct;
- (double)interItemSpacing;

@end
