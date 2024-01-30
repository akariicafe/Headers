@interface SeymourUI.SessionAudioPlaybackControls : UIView {
    void /* unknown type, empty encoding */ onPlaybackControlTapped;
    void /* unknown type, empty encoding */ stackView;
    void /* unknown type, empty encoding */ playPauseControl;
    void /* unknown type, empty encoding */ skipBackwardControl;
    void /* unknown type, empty encoding */ skipForwardControl;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)playbackControlTapped:(id)a0;

@end
