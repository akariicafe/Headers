@interface ConversationKit.LocalParticipantView : UIView {
    void /* unknown type, empty encoding */ participantView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dragEnabled;
    void /* unknown type, empty encoding */ blurEnabled;
    void /* unknown type, empty encoding */ prefersControlsHidden;
    void /* unknown type, empty encoding */ isInRoster;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ controlsView;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
