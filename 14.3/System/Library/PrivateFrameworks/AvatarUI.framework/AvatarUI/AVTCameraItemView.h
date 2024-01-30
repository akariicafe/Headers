@class UIImageView, UIImageSymbolConfiguration, CAShapeLayer;

@interface AVTCameraItemView : UIView

@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageSymbolConfiguration *cameraConfiguration;

- (void).cxx_destruct;
- (void)updateCameraImage;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
