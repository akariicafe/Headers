@interface NewsFeed.FormatVideoPlayerProvider : NSObject <SVVideoProviding> {
    void /* unknown type, empty encoding */ data;
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ metadata;
}

@property (nonatomic, readonly) double impressionThreshold;

- (id /* block */)loadWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)playbackInitiatedWithButtonTapped:(BOOL)a0;
- (void)playbackStarted;
- (void)playbackPaused;
- (void)playbackResumed;
- (void)playbackFinished;
- (void)playbackFailedWithError:(id)a0;
- (void)startedPictureInPicture;
- (void)stoppedPictureInPicture;

@end
