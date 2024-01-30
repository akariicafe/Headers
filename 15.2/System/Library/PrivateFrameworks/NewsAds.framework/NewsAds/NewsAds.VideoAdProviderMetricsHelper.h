@interface NewsAds.VideoAdProviderMetricsHelper : NSObject <SVVideoEventTracker, SVVideoAdEventTracker> {
    void /* unknown type, empty encoding */ diagnosticMetricsHelper;
    void /* unknown type, empty encoding */ metadata;
    void /* unknown type, empty encoding */ mediaMetricsHelper;
}

- (void)skipped;
- (void)playbackStarted;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackFinished;
- (void)playbackFailedWithError:(id)a0;
- (void)playbackReadyToStart;
- (void)muteStateChanged:(BOOL)a0;
- (void)enteredFullscreen;
- (void)exitedFullscreen;
- (void)tappedToToggleControlVisibility:(BOOL)a0;
- (void)playbackPassedQuartile:(unsigned long long)a0;
- (void)nextVideoStartedPlaying;
- (void).cxx_destruct;
- (id)init;

@end
