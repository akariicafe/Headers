@class UIProgressView, CAStateController, backgroundNotificationObserver, needsDeferredContentUpdate, UIBarButtonItem;

@interface SFDownloadsBarButtonItemView : UIButton <CAStateControllerDelegate, SFDeferrableUpdateView> {
    UIProgressView *_progressView;
    double _progress;
    struct { backgroundNotificationObserver *foregroundNotificationObserver; needsDeferredContentUpdate *x0; BOOL x1; BOOL sceneIsForeground; } deferrableUpdateViewState;
    CAStateController *_stateController;
}

@property (weak, nonatomic) UIBarButtonItem *barButtonItem;

+ (id)buttonWithBarButtonItem:(id)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectedIndicatorBounds;
- (void)tintColorDidChange;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_buttonPressed;
- (void).cxx_destruct;
- (void)pulse;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)setProgress:(double)a0;
- (void)_dynamicUserInterfaceTraitDidChange;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)didMoveToWindow;
- (void)layoutSubviews;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_barButtonHitRect;
- (void)_installSubviews;
- (void)updateContents;
- (struct { id x0; id x1; BOOL x2; BOOL x3; } *)deferrableUpdateViewState;
- (void)stateController:(id)a0 transitionDidStop:(id)a1 completed:(BOOL)a2;
- (void)setEnabled:(BOOL)a0;

@end
