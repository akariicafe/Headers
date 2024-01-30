@interface ConversationKit.InCallControlsView : UIView {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ effectsButton;
    void /* unknown type, empty encoding */ muteButton;
    void /* unknown type, empty encoding */ flipCameraButton;
    void /* unknown type, empty encoding */ joinLeaveButton;
    void /* unknown type, empty encoding */ screenShareButton;
    void /* unknown type, empty encoding */ audioRouteButton;
    void /* unknown type, empty encoding */ toggleCameraButton;
    void /* unknown type, empty encoding */ toggleCinematicFramingButton;
    void /* unknown type, empty encoding */ buttonsByRow;
    void /* unknown type, empty encoding */ joinLeaveConfiguration;
    void /* unknown type, empty encoding */ buttonLabelWidthConstraints;
}

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
