@interface ConversationKit.LocalParticipantControlsView : UIView {
    void /* unknown type, empty encoding */ constraintsForStyle;
    void /* unknown type, empty encoding */ currentConstraints;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ controlsLayoutGuide;
    void /* unknown type, empty encoding */ style;
    void /* unknown type, empty encoding */ capabilities;
    void /* unknown type, empty encoding */ effectsSelected;
    void /* unknown type, empty encoding */ blurEnabled;
    void /* unknown type, empty encoding */ cinematicFramingIsEnabled;
    void /* unknown type, empty encoding */ isDisabled;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ effectsButton;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ cameraBlurButton;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ cinematicFramingButton;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ collapseButton;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ rotateButton;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ cameraFlipButton;

- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)handleEffectsTapped;
- (void)handleCinematicFramingTapped;
- (void)handleCameraBlurTapped;
- (void)handleCollapseButtonTapped;
- (void)handleRotateButtonTapped;
- (void)handleCameraFlipTapped;

@end
