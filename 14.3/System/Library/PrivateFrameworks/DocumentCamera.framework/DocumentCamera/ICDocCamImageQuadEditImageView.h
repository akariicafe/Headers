@class CALayer, UIImage;

@interface ICDocCamImageQuadEditImageView : UIView

@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long orientation;
@property (nonatomic) double imageOpacity;

- (void).cxx_destruct;
- (BOOL)accessibilityIgnoresInvertColors;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0 orientation:(long long)a1;

@end
