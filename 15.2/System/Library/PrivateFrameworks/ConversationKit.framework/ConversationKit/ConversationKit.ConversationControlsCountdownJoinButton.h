@interface ConversationKit.ConversationControlsCountdownJoinButton : ConversationKit.InCallControlButton {
    void /* unknown type, empty encoding */ countdownView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ countdownControllerDelegate;
}

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)cancelJoinCountdown;

@end
