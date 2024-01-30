@class UIImage, PKWatchHeroImageView;

@interface PKWatchDeviceImageOverlayView : UIView {
    PKWatchHeroImageView *_watchView;
}

@property (retain, nonatomic) UIImage *overlayImage;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)pk_applyAppearance:(id)a0;
- (id)pk_childrenForAppearance;

@end
