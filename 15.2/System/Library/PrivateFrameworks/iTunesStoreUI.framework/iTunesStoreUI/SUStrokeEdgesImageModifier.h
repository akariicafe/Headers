@class UIColor;

@interface SUStrokeEdgesImageModifier : SUImageModifier

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsets;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) BOOL fitToImage;
@property (nonatomic) BOOL strokeCurrentPath;

- (BOOL)isEqual:(id)a0;
- (void)dealloc;
- (void)drawAfterImageForContext:(struct CGContext { } *)a0 imageFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 finalSize:(struct CGSize { double x0; double x1; })a2;

@end
