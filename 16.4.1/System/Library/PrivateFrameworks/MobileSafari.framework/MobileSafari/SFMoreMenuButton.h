@class UIColor, backgroundNotificationObserver, UIView, SFProgressView, needsDeferredContentUpdate;

@interface SFMoreMenuButton : _SFDimmingButton <SFDeferrableUpdateView> {
    SFProgressView *_progressView;
    double _movedToWindowTime;
    BOOL _isShowingArrowDown;
    BOOL _iconFilled;
    UIColor *_progressTintColor;
    struct { backgroundNotificationObserver *foregroundNotificationObserver; needsDeferredContentUpdate *x0; BOOL x1; BOOL sceneIsForeground; } _deferrableUpdateViewState;
    UIView *_viewPendingPulse;
}

@property (nonatomic) long long progressStyle;
@property (nonatomic) double downloadProgress;
@property (nonatomic) long long symbolScale;
@property (nonatomic, getter=isIconFilled) BOOL iconFilled;
@property (retain, nonatomic) UIColor *progressTintColor;
@property (nonatomic) struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } contentInsets;

- (void)setSelected:(BOOL)a0;
- (void)_updateContentsAnimated:(BOOL)a0;
- (double)_progressViewTrackWidth;
- (void)_updateImageAllowingDissolve:(BOOL)a0;
- (double)_progressViewRadius;
- (struct { id x0; id x1; BOOL x2; BOOL x3; } *)deferrableUpdateViewState;
- (void)didMoveToWindow;
- (void)setNeedsPulseOnView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateImage;
- (void)_setShowsProgressView:(BOOL)a0;
- (void)tintColorDidChange;
- (void)updateContents;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void)setDownloadProgress:(double)a0 animated:(BOOL)a1;
- (void)_updateProgressViewMetrics;
- (BOOL)_shouldShowProgressView;
- (void).cxx_destruct;

@end
