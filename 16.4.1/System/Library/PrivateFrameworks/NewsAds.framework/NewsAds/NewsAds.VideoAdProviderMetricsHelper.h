@interface NewsAds.VideoAdProviderMetricsHelper : NSObject <SVVideoEventTracker, SVVideoAdEventTracker> {
    void /* unknown type, empty encoding */ diagnosticMetricsHelper;
    void /* unknown type, empty encoding */ metadata;
    void /* unknown type, empty encoding */ mediaMetricsHelper;
}

- (void)skipped;
- (void)playbackResumed;
- (void)playbackStarted;
- (void)enteredFullscreen;
- (void)exitedFullscreen;
- (void)muteStateChanged:(BOOL)a0;
- (void)nextVideoStartedPlaying;
- (void)playbackFailedWithError:(id)a0;
- (void)playbackFinished;
- (void)playbackPassedQuartile:(unsigned long long)a0;
- (void)playbackPaused;
- (void)playbackReadyToStart;
- (void)tappedToToggleControlVisibility:(BOOL)a0;
- (void)willUnload;
- (id)init;
- (void).cxx_destruct;

@end
