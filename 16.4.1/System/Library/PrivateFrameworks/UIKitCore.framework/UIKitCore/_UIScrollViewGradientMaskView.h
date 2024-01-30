@interface _UIScrollViewGradientMaskView : UIView

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } gradientStartInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } gradientEndInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } gradientIntensities;
@property (nonatomic) long long gradientDirection;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)gradientLayer;
- (void)updateWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 gradientStartInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 gradientEndInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 gradientIntensities:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3;

@end
