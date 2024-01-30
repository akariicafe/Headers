@class UIWindow, UIView;

@interface PUPhotosSharingProgressOverlay : UIView {
    BOOL _isShowing;
}

@property (retain, nonatomic) UIView *progressView;
@property (weak, nonatomic) UIWindow *cachedMainWindow;

- (void)willRemoveSubview:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_grayScaleImageFromImage:(id)a0;
- (void)_installInStatusBarWindow;
- (id)_mainWindow;
- (id)_screenshotImage;
- (void)_setupOverlayAnimated:(BOOL)a0;
- (void)_tearDownOverlayAnimated:(BOOL)a0;
- (void)addProgressView:(id)a0;
- (void)setShowing:(BOOL)a0 animated:(BOOL)a1;

@end
