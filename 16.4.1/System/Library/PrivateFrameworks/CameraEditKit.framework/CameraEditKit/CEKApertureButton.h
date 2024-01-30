@class UIImageView, UILabel, NSNumberFormatter;
@protocol CEKApertureButtonDelegate;

@interface CEKApertureButton : UIButton

@property (readonly, nonatomic) UIImageView *_circleOutlineView;
@property (readonly, nonatomic) UILabel *_symbolLabel;
@property (readonly, nonatomic) UILabel *_valueLabel;
@property (retain, nonatomic) UIImageView *_circleBackgroundView;
@property (readonly, nonatomic) NSNumberFormatter *_decimalFormatter;
@property (readonly, nonatomic) NSNumberFormatter *_wholeNumberFormatter;
@property (readonly, nonatomic, getter=_isRightToLeftFormatting) BOOL _rightToLeftFormatting;
@property (readonly, nonatomic) double _cachedSpaceWidth;
@property (readonly, nonatomic) double _cachedSymbolLabelWidth;
@property (nonatomic, setter=_setCachedValueLabelWidth:) double _cachedValueLabelWidth;
@property (weak, nonatomic) id<CEKApertureButtonDelegate> delegate;
@property (nonatomic) double apertureValue;
@property (nonatomic) BOOL shouldShowApertureValue;
@property (nonatomic) long long expansionDirection;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL wantsBackground;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } tappableEdgeInsets;
@property (nonatomic) long long orientation;

- (void)setOrientation:(long long)a0 animated:(BOOL)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)_updateBackgroundView;
- (void).cxx_destruct;
- (void)setActive:(BOOL)a0 animated:(BOOL)a1;
- (void)setShouldShowApertureValue:(BOOL)a0 animated:(BOOL)a1;
- (void)_updateValueLabel;
- (void)_setLayer:(id)a0 highlighted:(BOOL)a1 animated:(BOOL)a2;
- (id)_circleImageWithColor:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_expansionInsets;
- (void)_rotateView:(id)a0 withInterfaceOrientation:(long long)a1 animated:(BOOL)a2;
- (void)_setCenterAndBoundsForView:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_updateColorsAnimated:(BOOL)a0;
- (void)_updateSymbolLabelOrientationAnimated:(BOOL)a0;

@end
