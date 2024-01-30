@class CAGradientLayer, UIView;

@interface ASCGradientBackgroundView : UIView

@property (readonly, nonatomic) UIView *gradientOverlayView;
@property (readonly, nonatomic) CAGradientLayer *gradientLayer;

+ (double)gradientPercentageOfBounds;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
