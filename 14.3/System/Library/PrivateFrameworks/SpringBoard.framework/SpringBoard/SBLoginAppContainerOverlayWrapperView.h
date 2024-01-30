@class SBLockOverlayView, _UIBackdropView;

@interface SBLoginAppContainerOverlayWrapperView : UIView {
    _UIBackdropView *_backdropView;
}

@property (readonly, nonatomic) SBLockOverlayView *overlayView;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 overlayView:(id)a1;

@end
