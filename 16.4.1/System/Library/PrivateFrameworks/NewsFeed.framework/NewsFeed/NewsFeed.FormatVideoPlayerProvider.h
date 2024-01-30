@interface NewsFeed.FormatVideoPlayerProvider : NSObject <SVVideoProviding> {
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ metadata;
}

@property (nonatomic, readonly) double impressionThreshold;

- (id /* block */)loadWithCompletionBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)playbackResumed;
- (void)playbackStarted;
- (void)playbackFailedWithError:(id)a0;
- (void)playbackFinished;
- (void)playbackInitiatedWithButtonTapped:(BOOL)a0;
- (void)playbackPaused;
- (void)playbackReadyToStart;
- (void)startedPictureInPicture;
- (void)stoppedPictureInPicture;

@end
