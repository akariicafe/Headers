@class UIColor;

@interface CEKEdgeGradientView : UIView

@property (readonly, nonatomic) long long edgeGradientStyle;
@property (readonly, nonatomic) UIColor *customEdgeGradientColor;
@property (nonatomic) long long gradientDirection;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) double outerColorLength;
@property (nonatomic) double innerFadeLength;
@property (nonatomic) struct { double startFadeInset; double startFadeLength; double endFadeLength; double endFadeInset; } gradientDimensions;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isOpaque;
- (void)setEdgeGradientStyleMask;
- (void)setCustomEdgeGradientStyleWithColor:(id)a0;
- (void)setEdgeGradientStyleBlack;

@end
