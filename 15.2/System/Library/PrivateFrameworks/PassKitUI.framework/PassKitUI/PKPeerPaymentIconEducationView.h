@class PKWatchDeviceImageOverlayView, PKPaymentSetupInitialCardEducationIconsView;

@interface PKPeerPaymentIconEducationView : UIView {
    PKPaymentSetupInitialCardEducationIconsView *_iconsView;
    PKWatchDeviceImageOverlayView *_watchDeviceImageView;
}

@property (nonatomic) BOOL showWatchView;
@property (nonatomic) BOOL showIconsView;

- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)_imageForWatchView;

@end
