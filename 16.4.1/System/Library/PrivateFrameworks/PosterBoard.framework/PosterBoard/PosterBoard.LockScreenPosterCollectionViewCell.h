@interface PosterBoard.LockScreenPosterCollectionViewCell : PosterBoard.PosterPairCollectionViewCell <UIScrollViewDelegate, CHSWidgetDescriptorProviderObserver, PREditingSceneViewControllerObserver> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ maximumVerticalRevealFraction;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ liveContentView;
    void /* unknown type, empty encoding */ liveFloatingView;
    void /* unknown type, empty encoding */ isFloatingLayerInlined;
    void /* unknown type, empty encoding */ isComplicationRowHidden;
    void /* unknown type, empty encoding */ lockVibrancyConfiguration;
    void /* unknown type, empty encoding */ editingSceneViewController;
    void /* unknown type, empty encoding */ displayDate;
    void /* unknown type, empty encoding */ shouldShowFocusButton;
    void /* unknown type, empty encoding */ scrollableContentView;
    void /* unknown type, empty encoding */ shadowView;
    void /* unknown type, empty encoding */ defaultScrollAnimationDuration;
    void /* unknown type, empty encoding */ maximumRevealProgressWhenRevealingDisallowed;
    void /* unknown type, empty encoding */ descriptorProvider;
    void /* unknown type, empty encoding */ floatingLayerSnapshotView;
    void /* unknown type, empty encoding */ prominentController;
    void /* unknown type, empty encoding */ floatingProminentController;
    void /* unknown type, empty encoding */ titleStyleConfiguration;
    void /* unknown type, empty encoding */ complicationLayout;
    void /* unknown type, empty encoding */ floatingLayerSnapshotImage;
    void /* unknown type, empty encoding */ focusButton;
    void /* unknown type, empty encoding */ isFullyTransitionedToLockConfiguringAndEditing;
}

@property (nonatomic, readonly) BOOL layoutModeUsesFullscreenSizedMetrics;
@property (nonatomic, retain) void /* unknown type, empty encoding */ scrollView;

- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)descriptorsDidChangeForDescriptorProvider:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)editingSceneViewControllerDidFinishShowingContent:(id)a0;
- (void)presentFocusSelector;

@end
