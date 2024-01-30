@class UIColor, UIView;

@interface _TVSpinnerView : UIView {
    BOOL _shouldResumeAnimation;
    UIView *_spinnerContainer;
    UIView *_spinnerOverlayContainer;
}

@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (readonly, nonatomic) UIColor *color;

- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)_applicationDidBecomeActiveNotification:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_removeAnimations;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 color:(id)a1;
- (void)stopAnimating;
- (void)startAnimating;
- (void)traitCollectionDidChange:(id)a0;
- (void)_applicationWillResignActiveNotification:(id)a0;
- (void)_updateImagesForTraitCollection:(id)a0;
- (void)_addAnimations;
- (id)_spinnerImageForTraitCollection:(id)a0 size:(struct CGSize { double x0; double x1; })a1 alpha:(double)a2;

@end
