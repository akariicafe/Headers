@class CALayer, UIImageView, UIView;

@interface SBPageManagementCheckbox : UIButton {
    CALayer *_deselectedMask;
}

@property (readonly, nonatomic) double checkboxDiameter;
@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIView *highlightView;
@property (readonly, nonatomic) CALayer *deselectedMask;
@property (readonly, nonatomic) UIImageView *customImageView;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 checkboxDiameter:(double)a1 backgroundView:(id)a2;
- (double)effectiveHighlightAlpha;
- (void)updateDeselectedMaskState;
- (double)effectiveImageAlpha;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
