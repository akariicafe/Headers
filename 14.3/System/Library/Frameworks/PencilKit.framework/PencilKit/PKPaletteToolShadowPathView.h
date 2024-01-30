@class UIBezierPath, CALayer;

@interface PKPaletteToolShadowPathView : UIView {
    CALayer *_largeShadow;
    CALayer *_smallShadow;
}

@property (readonly, nonatomic) UIBezierPath *toolShadowPath;
@property (readonly, nonatomic) UIBezierPath *toolAndTipShadowPath;

+ (id)createPaletteToolShadowPathViewWithIdentifier:(id)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
