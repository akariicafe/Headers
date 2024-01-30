@class UIProgressView, NSString, backgroundNotificationObserver, _SFDownloadsIconView, needsDeferredContentUpdate, UIBarButtonItem;

@interface SFDownloadsBarButtonItemView : UIButton <UIPointerInteractionDelegate, SFDeferrableUpdateView> {
    UIProgressView *_progressView;
    struct { backgroundNotificationObserver *foregroundNotificationObserver; needsDeferredContentUpdate *x0; BOOL x1; BOOL sceneIsForeground; } deferrableUpdateViewState;
    _SFDownloadsIconView *_iconView;
}

@property (weak, nonatomic) UIBarButtonItem *barButtonItem;
@property (nonatomic) double progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)buttonWithBarButtonItem:(id)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_selectedIndicatorBounds;
- (void)pulse;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateContents;
- (void)pointerInteraction:(id)a0 willExitRegion:(id)a1 animator:(id)a2;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)_buttonPressed;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (struct { id x0; id x1; BOOL x2; BOOL x3; } *)deferrableUpdateViewState;
- (void)didMoveToWindow;
- (void)_updateIcon;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_barButtonHitRect;
- (void)_installSubviews;

@end
