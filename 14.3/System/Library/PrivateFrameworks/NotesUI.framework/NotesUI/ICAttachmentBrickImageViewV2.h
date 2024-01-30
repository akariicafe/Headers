@class CALayer, UIImage;

@interface ICAttachmentBrickImageViewV2 : UIView

@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL transparentBackground;

- (void).cxx_destruct;
- (void)setContentsScale:(double)a0;
- (void)setCornerRadius:(double)a0;
- (double)cornerRadius;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateBackgroundColor;
- (void)updateSublayersBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
