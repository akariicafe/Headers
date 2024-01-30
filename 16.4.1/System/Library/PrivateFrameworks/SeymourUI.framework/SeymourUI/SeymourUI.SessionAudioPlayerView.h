@interface SeymourUI.SessionAudioPlayerView : UIView {
    void /* unknown type, empty encoding */ animatedBackgroundView;
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ actionButtonsView;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ playbackControlsView;
    void /* unknown type, empty encoding */ playbackMetadataView;
    void /* unknown type, empty encoding */ playbackTimeControl;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ volumeSlider;
    void /* unknown type, empty encoding */ actionButtonsLayoutGuideHeightConstraint;
    void /* unknown type, empty encoding */ artworkViewTopConstraint;
    void /* unknown type, empty encoding */ artworkViewWidthConstraint;
    void /* unknown type, empty encoding */ grabberTopConstraint;
    void /* unknown type, empty encoding */ preferredMaximumArtworkSize;
    void /* unknown type, empty encoding */ metadataLayoutGuideHeightConstraint;
    void /* unknown type, empty encoding */ playbackControlsLayoutGuideHeightConstraint;
    void /* unknown type, empty encoding */ playbackTimeControlWidthConstraint;
    void /* unknown type, empty encoding */ volumeSliderBottomConstraint;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)exitButtonTapped:(id)a0;
- (void)collapseButtonTapped:(id)a0;

@end
