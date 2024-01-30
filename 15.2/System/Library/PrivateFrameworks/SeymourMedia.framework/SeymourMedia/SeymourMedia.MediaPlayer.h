@interface SeymourMedia.MediaPlayer : NSObject <AVPlayerPlaybackCoordinatorDelegate> {
    void /* unknown type, empty encoding */ assetClient;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ mediaSyncCoordinator;
    void /* unknown type, empty encoding */ mediaSyncSuspension;
    void /* unknown type, empty encoding */ metricPlaybackTracker;
    void /* unknown type, empty encoding */ playerItemObserver;
    void /* unknown type, empty encoding */ sessionOrigin;
    void /* unknown type, empty encoding */ startTime;
    void /* unknown type, empty encoding */ subscriptionToken;
    void /* unknown type, empty encoding */ timelineObserver;
    void /* unknown type, empty encoding */ workout;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ isReadyToPlay;
    void /* unknown type, empty encoding */ onReadyToPlay;
    void /* unknown type, empty encoding */ _startTimeOverride;
}

- (id)playbackCoordinator:(id)a0 identifierForPlayerItem:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
