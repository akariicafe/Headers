@interface BSUIBackdropView : _UIBackdropView {
    double _transitionProgress;
    double _initialScale;
    double _finalScale;
}

@property (nonatomic) double scaleForNoBlur;
@property (nonatomic) double rasterizationScale;

- (void)transitionComplete;
- (void)transitionIncrementallyToSettings:(id)a0 weighting:(double)a1;
- (void)applySettings:(id)a0;

@end
