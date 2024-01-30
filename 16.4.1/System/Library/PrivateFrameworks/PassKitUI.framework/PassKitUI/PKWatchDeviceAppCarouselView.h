@class UIImage, PKWatchHeroImageView, UIImageView;

@interface PKWatchDeviceAppCarouselView : UIView {
    PKWatchHeroImageView *_watchDeviceImageView;
    UIImageView *_carouselImageView;
    UIImageView *_appIconImageView;
}

@property (retain, nonatomic) UIImage *appIconImage;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })_appIconSize;
- (id)_carouselViewImage;

@end
