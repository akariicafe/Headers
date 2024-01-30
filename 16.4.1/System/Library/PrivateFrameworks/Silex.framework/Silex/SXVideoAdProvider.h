@class SXVideoAdStateManager, SXVideoComponent, NSString, UIView, UIButton;
@protocol SXVisibilityMonitoring, SXAnalyticsReporting, SVVideoMetadata, SVVideoAdViewControllerProviding;

@interface SXVideoAdProvider : NSObject <SVVideoAdProviding>

@property (weak, nonatomic) id<SVVideoMetadata> metadata;
@property (readonly, nonatomic) id<SVVideoAdViewControllerProviding> fullscreenViewControllerProvider;
@property (readonly, nonatomic) SXVideoAdStateManager *stateManager;
@property (readonly, nonatomic) id<SXVisibilityMonitoring> videoVisibilityMonitor;
@property (readonly, nonatomic) id<SXVisibilityMonitoring> videoPlayerVisibilityMonitor;
@property (readonly, nonatomic) SXVideoComponent *component;
@property (retain, nonatomic) id<SXAnalyticsReporting> analyticsReporter;
@property (readonly, nonatomic) unsigned long long skipThreshold;
@property (readonly, nonatomic) BOOL hasAction;
@property (readonly, nonatomic) double prerollReadyToPlayTimeout;
@property (readonly, nonatomic) UIView *metricsView;
@property (readonly, nonatomic) UIButton *privacyMarker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double impressionThreshold;

- (double)threshold;
- (id /* block */)loadWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)skipped;
- (void)playbackResumed;
- (void)playbackStarted;
- (void)nextVideoStartedPlaying;
- (void)playbackFailedWithError:(id)a0;
- (void)playbackFinished;
- (void)playbackInitiatedWithButtonTapped:(BOOL)a0;
- (void)playbackPassedImpressionThreshold;
- (void)playbackPassedQuartile:(unsigned long long)a0;
- (void)playbackPaused;
- (void)presentAction;
- (void)willUnload;
- (void)adVisibilityStateChanged;
- (id)initWithViewControllerProvider:(id)a0 videoPlayerVisibilityMonitor:(id)a1 videoVisibilityMonitor:(id)a2 component:(id)a3;
- (void)presentPrivacyStatement;

@end
