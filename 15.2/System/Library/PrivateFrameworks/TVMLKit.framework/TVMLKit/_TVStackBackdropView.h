@class UIImage, UIImageView, UIVisualEffectView;

@interface _TVStackBackdropView : UIView {
    UIImageView *_imageView;
    UIVisualEffectView *_visualEffectView;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long blurEffectStyle;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithBlurEffectStyle:(long long)a0;

@end
