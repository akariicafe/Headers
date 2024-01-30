@class SXVolumeProvider, SXVideoPlayerViewControllerManager, NSString, SXVideoPlayerViewController, SXPosterFrameView, SXVideoComponentAnalyticsReporting, SXVideoAnalyticsRouter;
@protocol SXBookmarkManager, SXScrollObserverManager, SXVideoAdProviderFactory, SWReachabilityProvider, SXAppStateMonitor, SXResourceDataSource, SXSceneStateMonitor;

@interface SXVideoComponentView : SXMediaComponentView <SXViewportChangeListener, SXMediaPlaybackDelegate, SXVideoPlayerViewControllerDelegate, SXVideoPlayerViewControllerDataSource, SWReachabilityObserver, SXFullscreenVideoPlaybackCandidate>

@property (readonly, nonatomic) id<SXResourceDataSource> resourceDataSource;
@property (readonly, nonatomic) id<SWReachabilityProvider> reachabilityProvider;
@property (readonly, nonatomic) id<SXAppStateMonitor> appStateMonitor;
@property (readonly, nonatomic) id<SXSceneStateMonitor> sceneStateMonitor;
@property (nonatomic) BOOL isReceivingViewportDynamicBoundsChanges;
@property (retain, nonatomic) SXPosterFrameView *posterFrame;
@property (retain, nonatomic) SXVideoPlayerViewController *videoPlayerViewController;
@property (copy, nonatomic) id /* block */ thumbnailRequestCancelHandler;
@property (retain, nonatomic) SXVideoAnalyticsRouter *analyticsRouter;
@property (retain, nonatomic) SXVideoComponentAnalyticsReporting *videoComponentAnalyticsReporter;
@property (readonly, nonatomic) id<SXScrollObserverManager> scrollObserverManager;
@property (readonly, nonatomic) SXVolumeProvider *volumeProvider;
@property (readonly, nonatomic) SXVideoPlayerViewControllerManager *videoPlayerViewControllerManager;
@property (readonly, nonatomic) id<SXBookmarkManager> bookmarkManager;
@property (copy, nonatomic) id /* block */ presentationBlock;
@property (readonly, nonatomic) id<SXVideoAdProviderFactory> prerollAdFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewport:(id)a0 appearStateChangedFromState:(unsigned long long)a1;
- (void)reachabilityChanged:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewport:(id)a0 dynamicBoundsDidChangeFromBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)discardContents;
- (void)renderContents;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)visibilityStateDidChangeFromState:(long long)a0;
- (void)loadComponent:(id)a0;
- (BOOL)canEnterFullscreen;
- (void)enterFullscreen;
- (void)viewport:(id)a0 interfaceOrientationChangedFromOrientation:(long long)a1;
- (BOOL)allowHierarchyRemoval;
- (unsigned long long)analyticsMediaType;
- (id)transitionContentView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionContentFrame;
- (void)prepareForTransitionType:(unsigned long long)a0;
- (BOOL)usesThumbnailWithImageIdentifier:(id)a0;
- (unsigned long long)analyticsVideoType;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 analyticsReporting:(id)a4 appStateMonitor:(id)a5 sceneStateMonitor:(id)a6 resourceDataSource:(id)a7 reachabilityProvider:(id)a8 scrollObserverManager:(id)a9 volumeProvider:(id)a10 videoPlayerViewControllerManager:(id)a11 bookmarkManager:(id)a12 prerollAdFactory:(id)a13;
- (void)pauseMediaPlayback;
- (void)setupVideoPlayerViewController:(id)a0;
- (void)unloadVideoPlayerIfShowingAd;
- (void)showPosterFrame;
- (void)loadPosterFrameImage;
- (void)playButtonTapped;
- (void)registerAsMediaPlaybackDelegate;
- (void)pausePrerollIfNeeded;
- (BOOL)videoPlayerIsMoreThan50PercentVisible;
- (void)videoPlayerViewControllerFinishedVideoPlayback:(id)a0;
- (void)videoPlayerViewController:(id)a0 startedPlaybackOfVideo:(id)a1;
- (void)videoPlayerViewController:(id)a0 resumedPlaybackOfVideo:(id)a1;
- (BOOL)videoPlayerViewControllerShouldStartPlayback:(id)a0;
- (void)videoPlayerViewControllerWillEnterFullscreen:(id)a0;
- (void)videoPlayerViewControllerWillExitFullscreen:(id)a0;
- (id)videoForVideoPlayerViewController:(id)a0;
- (id)videoAdForVideoPlayerViewController:(id)a0;
- (void)registerForViewportDynamicBoundsChanges;
- (void)unregisterForViewportDynamicBoundsChanges;

@end
