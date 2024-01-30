@class CALayer, UIImage;

@interface ICAttachmentBrickImageViewV2 : UIView

@property (retain, nonatomic) CALayer *imageLayer;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL transparentBackground;

- (void)updateBackgroundColor;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setCornerRadius:(double)a0;
- (double)cornerRadius;
- (void)setContentsScale:(double)a0;
- (void)didMoveToWindow;
- (void)updateSublayersBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
