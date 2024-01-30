@interface NewsUI2.EndOfTrackNotificationScheduler : NSObject <FCUserInfoObserving> {
    void /* unknown type, empty encoding */ notificationService;
    void /* unknown type, empty encoding */ currentlyPlaying;
    void /* unknown type, empty encoding */ readingHistory;
    void /* unknown type, empty encoding */ currentlyPlayingObservableToken;
    void /* unknown type, empty encoding */ schedulerState;
}

- (void)userInfoDidChangeEndOfAudioTrackNotificationsEnabled:(id)a0 fromCloud:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;

@end
