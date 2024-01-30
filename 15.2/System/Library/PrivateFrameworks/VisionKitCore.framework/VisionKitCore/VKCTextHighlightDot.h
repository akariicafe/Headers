@class CALayer, UIColor;

@interface VKCTextHighlightDot : UIView

@property (retain, nonatomic) CALayer *pulsingLayer;
@property (retain, nonatomic) CALayer *circleLayer;
@property (retain, nonatomic) UIColor *highlightColor;
@property (nonatomic) BOOL pulsing;
@property (nonatomic) struct VKQuadSideLength { double left; double right; double top; double bottom; } quadSideLength;
@property (weak, nonatomic) CALayer *textHighlightLayer;

- (void)layoutSubviews;
- (void)_updateLayout;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (id)initWithColor:(id)a0;
- (void)updateIndicatorDotForState;
- (double)opacityForCurrentQuadSize;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_rectForViewSpace:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForIndicatorDot;
- (void)configureForPulsing:(BOOL)a0;

@end
