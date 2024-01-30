@class UILabel, _UIRefreshControlModernReplicatorView, UIView;

@interface _UIRefreshControlModernContentView : _UIRefreshControlContentView {
    BOOL _animationsAreValid;
    UIView *_replicatorContainer;
    _UIRefreshControlModernReplicatorView *_replicatorView;
    UIView *_seed;
    BOOL _hasFinishedRevealing;
}

@property (nonatomic) BOOL areAnimationsValid;
@property (nonatomic) BOOL horizontallyCenteredFramesNeedUpdate;
@property (readonly, nonatomic) UILabel *textLabel;
@property (nonatomic) double currentPopStiffness;
@property (nonatomic) double impactIntensity;

- (void)_unbloom;
- (void)setTintColor:(id)a0;
- (void)_goAway;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (void)_updateTimeOffsetOfRelevantLayers;
- (void)_setUnbloomedAppearance;
- (void)willTransitionFromState:(long long)a0 toState:(long long)a1;
- (void)_spin;
- (void).cxx_destruct;
- (double)_maximumSnappingHeightScalingForScrollViewHeight;
- (void)_cleanUpAfterRevealing;
- (long long)style;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_bloomedSeedTransform;
- (void)_setSpunAppearance;
- (void)_tickDueToProgrammaticRefresh;
- (void)_bloom;
- (id)_effectiveTintColorWithAlpha:(double)a0;
- (void)_setBloomedAppearance;
- (void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (double)maximumSnappingHeight;
- (void)layoutSubviews;
- (id)attributedTitle;
- (void)setAttributedTitle:(id)a0;
- (void)_removeAllAnimations;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_snappingMagic;
- (void)_tick;
- (void)_reveal;
- (void)didTransitionFromState:(long long)a0 toState:(long long)a1;
- (id)_effectiveTintColor;
- (double)_percentageShowing;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_unbloomedSeedTransform;
- (void)_resetToRevealingState;
- (double)_currentTimeOffset;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
