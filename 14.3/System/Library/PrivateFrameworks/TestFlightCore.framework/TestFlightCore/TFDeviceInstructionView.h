@class UIImageView;

@interface TFDeviceInstructionView : UIView

@property (readonly, nonatomic) UIImageView *deviceImageView;

+ (double)cornerRadius;
+ (id)backgroundColor;
+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageLayoutInsets;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)displayDeviceImage:(id)a0 inOrientation:(long long)a1;
- (void)updateCurrentDeviceImageToOrientation:(long long)a0;

@end
