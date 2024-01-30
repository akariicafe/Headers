@class VUIImageView, VUIBaseView, VUILabel, _TtC8VideosUI21StyledProgressBarView, VUITextBadgeView, VUIScorecardView;

@interface VideosUI.UnifiedOverlayView : VUIBaseView <VUITextBadgeViewDelegate, VUIImageSampling, VUIScorecardViewDelegate, VUISportsScoreboardManagerDelegate> {
    void /* unknown type, empty encoding */ overlayLayout;
    void /* unknown type, empty encoding */ progressView;
    void /* unknown type, empty encoding */ appImageView;
    void /* unknown type, empty encoding */ logoImageView;
    void /* unknown type, empty encoding */ textLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ badgeView;
    void /* unknown type, empty encoding */ textBadge;
    void /* unknown type, empty encoding */ gradientView;
    void /* unknown type, empty encoding */ gradientLayer;
    void /* unknown type, empty encoding */ scorecardView;
    void /* unknown type, empty encoding */ cornerRadius;
    void /* unknown type, empty encoding */ logoSize;
    void /* unknown type, empty encoding */ backgroundImageForMaterial;
    void /* unknown type, empty encoding */ hasTextBadge;
    void /* unknown type, empty encoding */ scoreboardViewModel;
    void /* unknown type, empty encoding */ originalScoreboardViewModel;
    void /* unknown type, empty encoding */ backgroundImageHasChanged;
    void /* unknown type, empty encoding */ scorecardViewBackgroundImage;
    void /* unknown type, empty encoding */ endingTimestamp;
    void /* unknown type, empty encoding */ startingTimestamp;
    void /* unknown type, empty encoding */ textBadgeHasMaterial;
    void /* unknown type, empty encoding */ pendingOperation;
    void /* unknown type, empty encoding */ isOperationCancelledObserver;
    void /* unknown type, empty encoding */ isOperationFinishedObserver;
    void /* unknown type, empty encoding */ gradientSizeHeightMultiplier;
    void /* unknown type, empty encoding */ overlayUpdater;
}

@property (nonatomic, readonly) BOOL vuiDebugUI;
@property (nonatomic, readonly) _TtC8VideosUI21StyledProgressBarView *accessibilityProgressView;
@property (nonatomic, readonly) VUIImageView *accessibilityAppImageView;
@property (nonatomic, readonly) VUIImageView *accessibilityLogoImageView;
@property (nonatomic, readonly) VUILabel *accessibilityTextLabel;
@property (nonatomic, readonly) VUILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) VUIBaseView *accessibilityBadgeView;
@property (nonatomic, readonly) VUITextBadgeView *accessibilityTextBadge;
@property (nonatomic, readonly) VUIScorecardView *accessibilityScorecardView;

- (void)textBadgeViewContentsUpdated:(id)a0;
- (void)sampleWithImage:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (void)vui_willMoveToWindow:(id)a0;
- (id)backgroundImageForScorecardViewMaterial:(id)a0;
- (int)backgroundBlendModeForScoreValueInRow:(long long)a0 atIndex:(long long)a1;
- (long long)styleForScorecardView:(id)a0;
- (long long)numberOfRowsInScorecardView:(id)a0;
- (long long)numberOfScoreValuesForScorecardView:(id)a0 inRow:(long long)a1;
- (id)scoreValue:(id)a0 inRow:(long long)a1 atIndex:(long long)a2;
- (double)maximumWidthForScorecardView:(id)a0;
- (void)vui_setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (id)getJSContextDictionary;
- (void)updateScoreboard:(id)a0;

@end
