@class UIButton, UIView;

@interface NewsArticles.VideoAdProvider : NSObject <SXVideoURLProviding, SXVideoAdProviding, SXVideoEventTracker, SXVideoAdEventTracker> {
    void /* unknown type, empty encoding */ preroll;
    void /* unknown type, empty encoding */ placement;
    void /* unknown type, empty encoding */ journal;
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ appConfiguration;
    void /* unknown type, empty encoding */ presentationHandler;
    void /* unknown type, empty encoding */ tracker;
    void /* unknown type, empty encoding */ metricsHelper;
    void /* unknown type, empty encoding */ video;
    void /* unknown type, empty encoding */ metadata;
}

@property (nonatomic, readonly) unsigned long long skipThreshold;
@property (nonatomic, readonly) BOOL hasAction;
@property (nonatomic, readonly) UIView *metricsView;
@property (nonatomic, readonly) UIButton *privacyMarker;
@property (nonatomic, readonly) double impressionThreshold;

- (id /* block */)loadWithCompletionBlock:(id /* block */)a0;
- (void)skipped;
- (void)playbackReadyToStart;
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
- (void)playbackPassedImpressionThreshold;
- (void)presentAction;
- (id)init;
- (void).cxx_destruct;

@end
