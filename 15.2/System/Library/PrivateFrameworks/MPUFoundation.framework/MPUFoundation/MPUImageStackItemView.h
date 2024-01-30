@class UIImage, UIImageView;

@interface MPUImageStackItemView : MPUStackItemView {
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) double imageAlpha;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageContentsRect;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } imageTransform;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;

@end
