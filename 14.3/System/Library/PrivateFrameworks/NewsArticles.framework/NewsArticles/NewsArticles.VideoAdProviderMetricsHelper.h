@interface NewsArticles.VideoAdProviderMetricsHelper : NSObject <SXVideoEventTracker, SXVideoAdEventTracker> {
    void /* unknown type, empty encoding */ diagnosticMetricsHelper;
    void /* unknown type, empty encoding */ metadata;
    void /* unknown type, empty encoding */ mediaMetricsHelper;
}

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
- (id)init;
- (void).cxx_destruct;

@end
