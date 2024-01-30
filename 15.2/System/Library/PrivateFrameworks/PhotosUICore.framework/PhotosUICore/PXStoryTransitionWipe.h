@class PXStoryWipeTransitionConfiguration, CAMediaTimingFunction;

@interface PXStoryTransitionWipe : PXStoryConcreteTransition {
    PXStoryWipeTransitionConfiguration *_configuration;
    CAMediaTimingFunction *_animationCurve;
    double _dividerAnimationDurationFraction;
    double _reverseDividerAnimationDurationFraction;
}

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)timeDidChange;
- (void)wasStopped;

@end
