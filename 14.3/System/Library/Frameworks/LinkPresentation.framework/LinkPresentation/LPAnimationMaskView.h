@class UIImage, UIView;

@interface LPAnimationMaskView : UIView {
    UIView *_imageView;
}

@property (retain, nonatomic) UIImage *image;
@property (nonatomic) long long animationOrigin;
@property (readonly, retain, nonatomic) UIView *imageView;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
