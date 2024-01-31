@class NSMutableDictionary, UIImageView, AVCacheLargestInscribedRectInBoundingPath, AVCABackdropLayerView, AVTurboModePlaybackControlsPlaceholderView, AVMobileControlsViewController, AVScrollingObserver, UIView, AVPlayerViewControllerCustomControlsView, NSString, NSArray, AVExternalPlaybackIndicatorView, NSNumber, AVPlaybackControlsView;
@protocol AVPlaybackContentContainer, AVPlayerViewControllerContentViewDelegate, AVPlayerViewControllerContentViewDelegate_Gen1;

@interface AVPlayerViewControllerContentView : UIView <AVScrollingObserverDelegate, _UIViewBoundingPathChangeObserver> {
    UIImageView *_audioOnlyIndicatorView;
    AVExternalPlaybackIndicatorView *_externalPlaybackIndicatorView;
    UIView *_iAdPreRollView;
    UIImageView *_unsupportedContentIndicatorView;
    NSArray *_customControlsViewLayoutGuideConstraints;
    AVCABackdropLayerView *_backdropLayerView;
    AVTurboModePlaybackControlsPlaceholderView *_turboModePlaybackControlsPlaceholderView;
    id<AVPlayerViewControllerContentViewDelegate_Gen1> _gen1Delegate;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } videoContentInset;
@property (nonatomic) BOOL needsInitialLayout;
@property (readonly, nonatomic) NSMutableDictionary *targetVideoGravities;
@property (copy, nonatomic) NSString *automaticVideoGravity;
@property (copy, nonatomic) NSString *externalPlaybackIndicatorTitle;
@property (copy, nonatomic) NSString *externalPlaybackIndicatorSubtitle;
@property (readonly, nonatomic) AVScrollingObserver *scrollingObserver;
@property (readonly, nonatomic) NSNumber *layoutClass;
@property (readonly, nonatomic) BOOL isCoveringWindow;
@property (weak, nonatomic) id<AVPlayerViewControllerContentViewDelegate> delegate;
@property (retain, nonatomic) UIView<AVPlaybackContentContainer> *playbackContentContainerView;
@property (nonatomic) BOOL showsPlaybackControls;
@property (nonatomic) unsigned long long contentOverlayViewPlacement;
@property (nonatomic) BOOL wantsBackdropView;
@property (nonatomic) BOOL canAutomaticallyZoomLetterboxVideos;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edgeInsetsForLetterboxedContent;
@property (retain, nonatomic) UIView *contentOverlayView;
@property (retain, nonatomic) UIView *interactiveContentOverlayView;
@property (readonly, nonatomic) UIView *iAdPreRollView;
@property (readonly, nonatomic) UIView *iAdPreRollViewIfLoaded;
@property (readonly, nonatomic) AVPlaybackControlsView *playbackControlsView;
@property (retain, nonatomic) AVPlayerViewControllerCustomControlsView *customControlsView;
@property (retain, nonatomic) AVMobileControlsViewController *controlsViewController;
@property (retain, nonatomic) AVCacheLargestInscribedRectInBoundingPath *cacheLargestInscribedRect;
@property (nonatomic) BOOL styleSheetShouldUseCompactFullScreenItemSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willMoveToWindow:(id)a0;
- (void)setShowsUnsupportedContentIndicator:(BOOL)a0;
- (BOOL)isViewDescendantOfPlaybackControlsSubview:(id)a0;
- (void)_boundingPathMayHaveChangedForView:(id)a0 relativeToBoundsOriginOnly:(BOOL)a1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 playbackContentContainerView:(id)a1 targetVideoGravities:(id)a2;
- (void)_applyVideoGravityIfNeeded:(long long)a0;
- (void)avkit_needsUpdateBackdropCaptureViewHidden;
- (void)didMoveToSuperview;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setShowsAudioOnlyIndicator:(BOOL)a0;
- (void)setGen1Delegate:(id)a0;
- (BOOL)avkit_hasFullScreenLayoutClass;
- (void)removeTurboModePlaybackControlsPlaceholderViewIfNeeded;
- (void)setShowsExternalPlaybackIndicator:(BOOL)a0;
- (void)setExternalPlaybackIndicatorTitle:(id)a0 subtitle:(id)a1;
- (id)chromeControlsViewController;
- (void)updateCustomControlsViewLayoutGuides;
- (void)scrollingObserverDidChangeScrollingState:(id)a0;
- (void).cxx_destruct;
- (id)gen1Delegate;
- (void)setTargetVideoGravity:(id)a0 forLayoutClass:(unsigned long long)a1;
- (id)avkit_backdropGroupLeader;
- (void)layoutSubviews;
- (void)addPlaybackContentContainerViewIfNeeded;
- (void)loadPlaybackControlsViewIfNeeded;
- (void)didMoveToWindow;

@end
