@class UIColor;

@interface CKTextKitShadower : NSObject {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _calculatedShadowPadding;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } shadowOffset;
@property (readonly, nonatomic) UIColor *shadowColor;
@property (readonly, nonatomic) double shadowOpacity;
@property (readonly, nonatomic) double shadowRadius;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })shadowPadding;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })offsetRectWithInternalRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })offsetPointWithExternalPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setShadowInContext:(struct CGContext { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })insetRectWithConstrainedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })outsetSizeWithInsetSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })insetSizeWithConstrainedSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithShadowOffset:(struct CGSize { double x0; double x1; })a0 shadowColor:(id)a1 shadowOpacity:(double)a2 shadowRadius:(double)a3;
- (BOOL)_shouldDrawShadow;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })outsetRectWithInsetRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGPoint { double x0; double x1; })offsetPointWithInternalPoint:(struct CGPoint { double x0; double x1; })a0;

@end
