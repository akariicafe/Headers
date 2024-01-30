@class SXAudioComponentOverlayView, AVPlayerViewController, NSString, SVAVPlayer;
@protocol SXHost, SXResourceDataSource;

@interface SXAudioComponentView : SXMediaComponentView <SXMediaPlaybackDelegate, AVPlayerViewControllerDelegate_AppStoreOnly>

@property (readonly, nonatomic) id<SXResourceDataSource> resourceDataSource;
@property (readonly, nonatomic) id<SXHost> host;
@property (readonly, nonatomic) SXAudioComponentOverlayView *overlayView;
@property (retain, nonatomic) AVPlayerViewController *playerViewController;
@property (retain, nonatomic) SVAVPlayer *player;
@property (nonatomic) BOOL audioHasPlayed;
@property (nonatomic) BOOL startPlaybackWhenReady;
@property (copy, nonatomic) id /* block */ cancelHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutViews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)discardContents;
- (void)loadImage;
- (void)playerViewController:(id)a0 metricsCollectionEventOccured:(long long)a1;
- (void)playbackStarted;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackFinished;
- (void)playButtonTapped:(id)a0;
- (void)renderContents;
- (void)presentComponentWithChanges:(struct { BOOL x0; BOOL x1; BOOL x2; })a0;
- (void)viewport:(id)a0 appearStateChangedFromState:(unsigned long long)a1;
- (BOOL)allowHierarchyRemoval;
- (unsigned long long)analyticsMediaType;
- (void)pauseMediaPlayback;
- (id)initWithDOMObjectProvider:(id)a0 viewport:(id)a1 presentationDelegate:(id)a2 componentStyleRendererFactory:(id)a3 analyticsReporting:(id)a4 appStateMonitor:(id)a5 resourceDataSource:(id)a6 host:(id)a7;
- (void)loadAudio;
- (void)setupPlayerViewControllerWithPlayer:(id)a0;
- (void)submitMediaEngageEventForUserAction:(unsigned long long)a0;
- (BOOL)shouldAutoStartPlayback;
- (void)submitMediaEngageCompleteEvent;
- (void)hidePlaybackControls;
- (void)showPlaybackControls;

@end
