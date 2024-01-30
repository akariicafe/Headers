@class UIImageView, UIVisualEffectView;

@interface SFCloseButton : UIButton {
    UIImageView *_imageView;
    UIVisualEffectView *_blurEffectView;
}

@property (readonly, nonatomic) UIImageView *imageView;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 primaryAction:(id)a1;

@end
