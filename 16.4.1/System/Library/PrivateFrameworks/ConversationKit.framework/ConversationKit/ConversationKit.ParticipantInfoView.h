@interface ConversationKit.ParticipantInfoView : UIView {
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ shutterButton;
    void /* unknown type, empty encoding */ expandButton;
    void /* unknown type, empty encoding */ localParticipant;
    void /* unknown type, empty encoding */ audioMuteButton;
    void /* unknown type, empty encoding */ toggleVideoButton;
    void /* unknown type, empty encoding */ isExpanded;
    void /* unknown type, empty encoding */ isMuted;
    void /* unknown type, empty encoding */ videoDisabled;
    void /* unknown type, empty encoding */ customCornerRadius;
    void /* unknown type, empty encoding */ recordingLocalVideo;
    void /* unknown type, empty encoding */ delegate;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ nameLabel;
@property (nonatomic) void /* unknown type, empty encoding */ isMomentsAvailable;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)buttonTouchCancelledWithSender:(id)a0;
- (void)buttonTouchDownWithSender:(id)a0;
- (void)didTapAudioMuteButton;
- (void)didTapExpandButton;
- (void)didTapShutterButton;
- (void)didTapToggleVideoButton;
- (void)toggleAudioTouchUpWithSender:(id)a0;
- (void)toggleVideoTouchUpWithSender:(id)a0;

@end
