@class UIImageView, UIBezierPath, UIView, UIImage;

@interface MFComposeDropPreviewView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *previewView;
@property (retain, nonatomic) UIBezierPath *previewClippingPath;
@property (retain, nonatomic) UIImage *finalImage;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
