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

- (void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)_snappingMagic;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (void)_setBloomedAppearance;
- (void)setAttributedTitle:(id)a0;
- (void)_tickDueToProgrammaticRefresh;
- (void)_bloom;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)willTransitionFromState:(long long)a0 toState:(long long)a1;
- (void)_goAway;
- (id)attributedTitle;
- (void)_spin;
- (void)_setSpunAppearance;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_bloomedSeedTransform;
- (void)_tick;
- (void)setTintColor:(id)a0;
- (id)_effectiveTintColorWithAlpha:(double)a0;
- (void)_removeAllAnimations;
- (double)_percentageShowing;
- (void)_unbloom;
- (void)layoutSubviews;
- (void)_reveal;
- (id)_effectiveTintColor;
- (void)_updateTimeOffsetOfRelevantLayers;
- (void)_resetToRevealingState;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_unbloomedSeedTransform;
- (double)_currentTimeOffset;
- (double)_maximumSnappingHeightScalingForScrollViewHeight;
- (long long)style;
- (void)_cleanUpAfterRevealing;
- (double)maximumSnappingHeight;
- (void)_setUnbloomedAppearance;
- (void).cxx_destruct;
- (void)didTransitionFromState:(long long)a0 toState:(long long)a1;

@end
