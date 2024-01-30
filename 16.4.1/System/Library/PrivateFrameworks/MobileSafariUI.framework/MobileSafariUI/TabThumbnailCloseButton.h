@class UIColor, UIVisualEffectView, UIImage, UIImageView;

@interface TabThumbnailCloseButton : UIButton {
    UIVisualEffectView *_backdropEffectView;
    UIVisualEffectView *_vibrantEffectView;
    UIImageView *_imageView;
}

@property (class, readonly, nonatomic) UIColor *backgroundColor;

@property (retain, nonatomic) UIImage *image;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
