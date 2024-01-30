@class UIColor, NSArray;

@interface MUGradientView : UIView

@property (nonatomic) BOOL shouldReduceTransparency;
@property (copy, nonatomic) UIColor *accessibilityColor;
@property (copy, nonatomic) NSArray *colors;
@property (copy, nonatomic) NSArray *locations;
@property (nonatomic) struct CGPoint { double x; double y; } startPoint;
@property (nonatomic) struct CGPoint { double x; double y; } endPoint;

+ (Class)layerClass;

- (id)gradientLayer;
- (void)_setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_update;
- (void)_transparencyStatusDidChange;

@end
