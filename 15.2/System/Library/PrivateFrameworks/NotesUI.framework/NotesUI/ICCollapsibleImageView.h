@class UIImageView, UIImage, UIColor;

@interface ICCollapsibleImageView : ICCollapsibleBaseView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIColor *tintColor;

- (void).cxx_destruct;
- (void)performSetup;

@end
