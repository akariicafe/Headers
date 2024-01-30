@class UIImageView, CAShapeLayer;

@interface _PKHueSpectrumView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (nonatomic) BOOL isCompact;
@property (nonatomic) BOOL isEmbossed;
@property (nonatomic) BOOL isSelected;

+ (id)colorWheelImage:(BOOL)a0;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
