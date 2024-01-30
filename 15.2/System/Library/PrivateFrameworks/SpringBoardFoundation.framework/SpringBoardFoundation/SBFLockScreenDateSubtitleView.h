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

- (void)layoutSubviews;
- (void)_updateForCurrentSizeCategory;
- (double)interItemSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })subtitleLabelCharacterOverflowInsets;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithString:(id)a0 accessoryView:(id)a1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })subtitleLabelFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessoryViewFrame;

@end
