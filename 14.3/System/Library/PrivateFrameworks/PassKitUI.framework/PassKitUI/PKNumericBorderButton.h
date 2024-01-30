@class UIColor, UIView;

@interface PKNumericBorderButton : UIButton {
    UIView *_bottomBorder;
    UIView *_topBorder;
    UIView *_trailingBorder;
    UIView *_leadingBorder;
}

@property (copy, nonatomic) UIColor *normalBackgroundColor;
@property (copy, nonatomic) UIColor *highlightedBackgroundColor;

- (id)init;
- (void).cxx_destruct;
- (void)pk_applyAppearance:(id)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBorder:(unsigned long long)a0;
- (void)setHighlighted:(BOOL)a0;

@end
