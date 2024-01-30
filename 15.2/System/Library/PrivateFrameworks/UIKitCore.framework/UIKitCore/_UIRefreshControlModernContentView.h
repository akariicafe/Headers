@class _UIRefreshControlModernReplicatorView, _UIRefreshControlSeedView, UILabel, UIView;

@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView {
    BOOL _animationsAreValid;
    UIView *_replicatorContainer;
    _UIRefreshControlModernReplicatorView *_replicatorView;
    _UIRefreshControlSeedView *_seed;
    BOOL _hasFinishedRevealing;
}

@property (nonatomic) BOOL areAnimationsValid;
@property (nonatomic) BOOL horizontallyCenteredFramesNeedUpdate;
@property (readonly, nonatomic) UILabel *textLabel;
@property (nonatomic) double currentPopStiffness;
@property (nonatomic) double impactIntensity;

- (id)_effectiveTintColor;
- (void)layoutSubviews;
- (void)_setUnbloomedAppearance;
- (long long)style;
- (id)attributedTitle;
- (void)willTransitionFromState:(long long)a0 toState:(long long)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_unbloomedSeedTransform;
- (void)_tickDueToProgrammaticRefresh;
- (double)maximumSnappingHeight;
- (double)_maximumSnappingHeightScalingForScrollViewHeight;
- (void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_resetToRevealingState;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_effectiveTintColorWithAlpha:(double)a0;
- (void)_bloom;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_reveal;
- (void)_setSpunAppearance;
- (void)_tick;
- (void)_removeAllAnimations;
- (void)_spin;
- (void)_cleanUpAfterRevealing;
- (void).cxx_destruct;
- (double)_currentTimeOffset;
- (void)setTintColor:(id)a0;
- (void)_goAway;
- (double)_percentageShowing;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_bloomedSeedTransform;
- (void)_updateTimeOffsetOfRelevantLayers;
- (void)_snappingMagic;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (void)setAttributedTitle:(id)a0;
- (void)_unbloom;
- (void)_setBloomedAppearance;
- (void)didTransitionFromState:(long long)a0 toState:(long long)a1;

@end
