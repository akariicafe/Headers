@class SVVideoPlayerViewController, SXVideoPlayerViewControllerManager, NSString, SXPosterFrameView, SXVideoComponentAnalyticsReporting, SXVideoAnalyticsRouter;
@protocol SXBookmarkManager, SXScrollObserverManager, SXVideoAdProviderFactory, SWReachabilityProvider, SXAppStateMonitor, SXResourceDataSource, SXSceneStateMonitor;

@interface SXVideoComponentView : SXMediaComponentView <SXViewportChangeListener, SXMediaPlaybackDelegate, SVVideoPlayerViewControllerDelegate, SVVideoPlayerViewControllerDataSource, SWReachabilityObserver, SXFullscreenVideoPlaybackCandidate>

@property (readonly, nonatomic) id<SXResourceDataSource> resourceDataSource;
@property (readonly, nonatomic) id<SWReachabilityProvider> reachabilityProvider;
@property (readonly, nonatomic) id<SXAppStateMonitor> appStateMonitor;
@property (readonly, nonatomic) id<SXSceneStateMonitor> sceneStateMonitor;
@property (nonatomic) BOOL isReceivingViewportDynamicBoundsChanges;
@property (retain, nonatomic) SXPosterFrameView *posterFrame;
@property (retain, nonatomic) SVVideoPlayerViewController *videoPlayerViewController;
@property (copy, nonatomic) id /* block */ thumbnailRequestCancelHandler;
@property (retain, nonatomic) SXVideoAnalyticsRouter *analyticsRouter;
@property (retain, nonatomic) SXVideoComponentAnalyticsReporting *videoComponentAnalyticsReporter;
@property (readonly, nonatomic) id<SXScrollObserverManager> scrollObserverManager;
@property (readonly, nonatomic) SXVideoPlayerViewControllerManager *videoPlayerViewControllerManager;
@property (readonly, nonatomic) id<SXBookmarkManager> bookmarkManager;
@property (copy, nonatomic) id /* block */ presentationBlock;
@property (readonly, nonatomic) id<SXVideoAdProviderFactory> prerollAdFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reachabilityChanged:(BOOL)a0;
- (void)discardContents;
- (void).cxx_destruct;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)renderContents;
- (void)visibilityStateDidChangeFromState:(long long)a0;
- (id)videoAdForVideoPlayerViewController:(id)a0;
- (id)videoForVideoPlayerViewController:(id)a0;
- (void)videoPlayerViewController:(id)a0 resumedPlaybackOfVideo:(id)a1;
- (void)videoPlayerViewController:(id)a0 startedPlaybackOfVideo:(id)a1;
- (void)videoPlayerViewControllerFinishedVideoPlayback:(id)a0;
- (BOOL)videoPlayerViewControllerShouldStartPlayback:(id)a0;
- (void)enterFullscreen;
- (void)registerAsMediaPlaybackDelegate;
- (void)showPosterFrame;
- (void)setupVideoPlayerViewController:(id)a0;
- (BOOL)allowHierarchyRemoval;
- (unsigned long long)analyticsMediaType;
- (unsigned long long)analyticsVideoType;
- (BOOL)canEnterFullscreen;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 analyticsReporting:(id)a4 appStateMonitor:(id)a5 sceneStateMonitor:(id)a6 resourceDataSource:(id)a7 reachabilityProvider:(id)a8 scrollObserverManager:(id)a9 videoPlayerViewControllerManager:(id)a10 bookmarkManager:(id)a11 prerollAdFactory:(id)a12;
- (void)loadComponent:(id)a0;
- (void)loadPosterFrameImage;
- (void)pauseMediaPlayback;
- (void)pauseMediaPlaybackForDisappearance;
- (void)pausePrerollIfNeeded;
- (void)playButtonTapped;
- (void)prepareForTransitionType:(unsigned long long)a0;
- (void)registerForViewportDynamicBoundsChanges;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionContentFrame;
- (id)transitionContentView;
- (void)unloadVideoPlayerIfShowingAd;
- (void)unregisterForViewportDynamicBoundsChanges;
- (BOOL)usesThumbnailWithImageIdentifier:(id)a0;
- (BOOL)videoPlayerIsMoreThan50PercentVisible;
- (void)viewport:(id)a0 appearStateChangedFromState:(unsigned long long)a1;
- (void)viewport:(id)a0 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)viewport:(id)a0 interfaceOrientationChangedFromOrientation:(long long)a1;

@end
