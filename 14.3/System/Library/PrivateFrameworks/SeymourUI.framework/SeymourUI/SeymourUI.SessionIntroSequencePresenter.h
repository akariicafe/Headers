@interface SeymourUI.SessionIntroSequencePresenter : NSObject <ARUICountdownAnimatorDelegate> {
    void /* unknown type, empty encoding */ display;
    void /* unknown type, empty encoding */ sessionCountdownCoordinator;
    void /* unknown type, empty encoding */ onStartCountdown;
    void /* unknown type, empty encoding */ onCountdownSequenceStarted;
    void /* unknown type, empty encoding */ onCountdownSequenceCompleted;
    void /* unknown type, empty encoding */ onExpandMetricsRequest;
    void /* unknown type, empty encoding */ timerProvider;
    void /* unknown type, empty encoding */ subscriptionToken;
    void /* unknown type, empty encoding */ animator;
    void /* unknown type, empty encoding */ timer;
    void /* unknown type, empty encoding */ platform;
}

- (void)countdownAnimator:(id)a0 performingAnimation:(id)a1 withDuration:(double)a2;
- (void)countdownAnimatorDidFinishAnimating:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
