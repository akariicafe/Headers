@interface SeymourUI.SessionIntroSequencePresenter : NSObject <AVAudioPlayerDelegate> {
    void /* unknown type, empty encoding */ display;
    void /* unknown type, empty encoding */ sessionCountdownCoordinator;
    void /* unknown type, empty encoding */ audioPlayer;
    void /* unknown type, empty encoding */ onStartCountdown;
    void /* unknown type, empty encoding */ onCountdownSequenceStarted;
    void /* unknown type, empty encoding */ onCountdownSequenceCompleted;
    void /* unknown type, empty encoding */ timerProvider;
    void /* unknown type, empty encoding */ sessionRouteMonitor;
    void /* unknown type, empty encoding */ subscriptionToken;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ sessionRouteCategory;
    void /* unknown type, empty encoding */ audioSessionCategory;
    void /* unknown type, empty encoding */ audioSessionMode;
    void /* unknown type, empty encoding */ workoutDeviceConnection;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ catalogWorkout;
}

- (id)init;
- (void).cxx_destruct;
- (void)audioPlayerDidFinishPlaying:(id)a0 successfully:(BOOL)a1;

@end
