@class CAGradientLayer, NSString, NSTimer, SBUILegibilityLabel, _UILegibilityView, UIView, _UILegibilitySettings;
@protocol SBUIPoseidonIconViewDelegate;

@interface SBUIPoseidonIconView : UIView <CAAnimationDelegate> {
    _UILegibilityView *_coachingButton;
    SBUILegibilityLabel *_coachingLabel;
    SBUILegibilityLabel *_restToOpenLabel;
    UIView *_coachingLabelRotationView;
    UIView *_restToOpenLabelRotationView;
    NSTimer *_restToOpenIdleTimer;
    CAGradientLayer *_progressFillGradient;
    double _fullProgressFillDuration;
    double _startProgressFillTime;
    BOOL _isFilling;
    CAGradientLayer *_shimmerGradient;
    NSTimer *_idleUntilShimmerTimer;
    NSTimer *_reduceMotionShimmerTimer;
}

@property (weak, nonatomic) id<SBUIPoseidonIconViewDelegate> delegate;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) long long state;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } localTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_fontSize;
- (void)fillRestToOpenWithDuration:(double)a0;
- (void).cxx_destruct;
- (void)_contentSizeCategoryDidChange;
- (void)resetRestToOpen;
- (void)setState:(long long)a0 forIdleTimeout:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)_stopShimmer;
- (void)_cancelRestToOpenIdleTimer;
- (void)_startRestToOpenIdleTimer;
- (void)_cancelRestToOpenProgress;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_physicalButtonNormalizedFrame;
- (void)_startShimmer;
- (void)_startReduceMotionShimmer;

@end
