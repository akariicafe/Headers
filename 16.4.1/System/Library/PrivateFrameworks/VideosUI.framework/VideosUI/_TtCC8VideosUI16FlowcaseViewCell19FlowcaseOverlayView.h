@interface _TtCC8VideosUI16FlowcaseViewCell19FlowcaseOverlayView : VUIBaseView <VUIImageSampling, VUISportsScoreboardManagerDelegate, VUIScorecardViewDelegate> {
    void /* unknown type, empty encoding */ transitionAnimationDuration;
    void /* unknown type, empty encoding */ overlayLayout;
    void /* unknown type, empty encoding */ gradientColor;
    void /* unknown type, empty encoding */ disableGradient;
    void /* unknown type, empty encoding */ titleView;
    void /* unknown type, empty encoding */ badgeView;
    void /* unknown type, empty encoding */ scorecardView;
    void /* unknown type, empty encoding */ originalScoreboardViewModel;
    void /* unknown type, empty encoding */ scoreboardViewModel;
    void /* unknown type, empty encoding */ backgroundImageForMaterial;
    void /* unknown type, empty encoding */ backgroundImageHasChanged;
    void /* unknown type, empty encoding */ scorecardViewBackgroundImage;
    void /* unknown type, empty encoding */ pendingOperation;
    void /* unknown type, empty encoding */ isOperationCancelledObserver;
    void /* unknown type, empty encoding */ isOperationFinishedObserver;
    void /* unknown type, empty encoding */ verticalStackView;
    void /* unknown type, empty encoding */ logoImageView;
    void /* unknown type, empty encoding */ channelLogoView;
    void /* unknown type, empty encoding */ alphaImageView;
    void /* unknown type, empty encoding */ isPlayingVideo;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logoGradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_visualEffectContainerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_visualEffectView;
    void /* unknown type, empty encoding */ nonPlaybackGradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playbackGradientView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_opacityMaskLayer;
}

- (void)sampleWithImage:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_traitCollectionDidChange:(id)a0;
- (int)backgroundBlendModeForScoreValueInRow:(long long)a0 atIndex:(long long)a1;
- (id)backgroundImageForScorecardViewMaterial:(id)a0;
- (id)getJSContextDictionary;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })marginsForRow:(long long)a0 atIndex:(long long)a1;
- (double)maximumWidthForScorecardView:(id)a0;
- (long long)numberOfRowsInScorecardView:(id)a0;
- (long long)numberOfScoreValuesForScorecardView:(id)a0 inRow:(long long)a1;
- (id)scoreValue:(id)a0 inRow:(long long)a1 atIndex:(long long)a2;
- (long long)styleForScorecardView:(id)a0;
- (void)updateScoreboard:(id)a0;

@end
