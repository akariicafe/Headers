@class NSArray, NSString, CAGradientLayer;

@interface _MKGradientView : UIView {
    CAGradientLayer *_gradient;
}

@property (copy) NSArray *gradientColors;
@property (copy) NSArray *gradientLocations;
@property struct CGPoint { double x0; double x1; } gradientEndPoint;
@property struct CGPoint { double x0; double x1; } gradientStartPoint;
@property (copy) NSString *gradientType;

+ (Class)layerClass;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
