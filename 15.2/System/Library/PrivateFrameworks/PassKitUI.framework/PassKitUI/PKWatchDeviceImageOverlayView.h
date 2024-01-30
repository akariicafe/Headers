@class UIImage, UIImageView;

@interface PKWatchDeviceImageOverlayView : UIView {
    UIImageView *_watchImageView;
    UIImageView *_overlayImageView;
}

@property (retain, nonatomic) UIImage *overlayImage;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)pk_applyAppearance:(id)a0;
- (id)pk_childrenForAppearance;
- (double)_watchScreenCenterXOffset;

@end
