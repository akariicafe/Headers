@interface SeymourMedia.MetricPlaybackTracker : _TtCs12_SwiftObject {
    void /* unknown type, empty encoding */ catalogWorkout;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ subscriptionToken;
    void /* unknown type, empty encoding */ mediaType;
    void /* unknown type, empty encoding */ networkEvaluator;
    void /* unknown type, empty encoding */ assetClient;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ startTime;
    void /* unknown type, empty encoding */ lastWorkoutPlaybackInfo;
    void /* unknown type, empty encoding */ downloadState;
    void /* unknown type, empty encoding */ expectedWorkoutPlaybackPause;
    void /* unknown type, empty encoding */ playbackFocus;
    void /* unknown type, empty encoding */ currentSubtitleSelection;
    void /* unknown type, empty encoding */ remoteDisplayConnection;
    void /* unknown type, empty encoding */ playbackMode;
    void /* unknown type, empty encoding */ activeMultiUserSession;
    void /* unknown type, empty encoding */ expectedStartTime;
    void /* unknown type, empty encoding */ metricActivityTrackingDevices;
    void /* unknown type, empty encoding */ musicIDStartPlaybackInfoMap;
    void /* unknown type, empty encoding */ reportedStopMusicIDS;
    void /* unknown type, empty encoding */ seeking;
    void /* unknown type, empty encoding */ seekBeganOverallPosition;
    void /* unknown type, empty encoding */ seekBeganMusicTrack;
    void /* unknown type, empty encoding */ seekBeganMusicTrackPosition;
    void /* unknown type, empty encoding */ seekBeganTimestamp;
    void /* unknown type, empty encoding */ lastSeekFinishedPosition;
    void /* unknown type, empty encoding */ isPictureInPictureStopping;
    void /* unknown type, empty encoding */ onInvalidTransition;
}

- (void)handleAppBackground;
- (void)handlePlaybackInterrupted;

@end
