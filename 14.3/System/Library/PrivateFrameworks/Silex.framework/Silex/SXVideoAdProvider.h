@class SXVideoAdStateManager, SXVideoComponent, NSString, SXAdController, UIView, SXPrerollAdResponse, UIButton;
@protocol SXVisibilityMonitoring, SXVideoMetadata, SXAnalyticsReporting, SXVASTAnalyticsEventInfoFactory, SXVideoAdViewControllerProviding;

@interface SXVideoAdProvider : NSObject <ADBannerViewInternalDelegate, SXVideoAdProviding>

@property (retain, nonatomic) SXPrerollAdResponse *response;
@property (weak, nonatomic) id<SXVideoMetadata> metadata;
@property (readonly, nonatomic) id<SXVideoAdViewControllerProviding> fullscreenViewControllerProvider;
@property (readonly, nonatomic) SXVideoAdStateManager *stateManager;
@property (readonly, nonatomic) id<SXVisibilityMonitoring> videoVisibilityMonitor;
@property (readonly, nonatomic) id<SXVisibilityMonitoring> videoPlayerVisibilityMonitor;
@property (readonly, nonatomic) id<SXVASTAnalyticsEventInfoFactory> analyticsEventInfoFactory;
@property (readonly, nonatomic) SXAdController *adController;
@property (readonly, nonatomic) SXVideoComponent *component;
@property (retain, nonatomic) id<SXAnalyticsReporting> analyticsReporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long skipThreshold;
@property (readonly, nonatomic) BOOL hasAction;
@property (readonly, nonatomic) UIView *metricsView;
@property (readonly, nonatomic) UIButton *privacyMarker;
@property (readonly, nonatomic) double impressionThreshold;

- (id /* block */)loadWithCompletionBlock:(id /* block */)a0;
- (double)threshold;
- (void).cxx_destruct;
- (void)skipped;
- (void)playbackStarted;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackFinished;
- (void)playbackFailedWithError:(id)a0;
- (void)enteredFullscreen;
- (void)exitedFullscreen;
- (void)muteStateChanged:(BOOL)a0;
- (void)playbackPassedQuartile:(unsigned long long)a0;
- (void)tappedToToggleControlVisibility:(BOOL)a0;
- (void)nextVideoStartedPlaying;
- (void)playbackInitiatedWithButtonTapped:(BOOL)a0;
- (void)playbackPassedImpressionThreshold;
- (void)presentAction;
- (id)initWithViewControllerProvider:(id)a0 analyticsEventInfoFactory:(id)a1 videoPlayerVisibilityMonitor:(id)a2 videoVisibilityMonitor:(id)a3 adController:(id)a4 component:(id)a5;
- (id)viewControllerForStoryboardPresentationFromBannerView:(id)a0;
- (void)reportEngagementEventWithType:(unsigned long long)a0;
- (void)adVisibilityStateChanged;
- (void)presentPrivacyStatement;

@end
