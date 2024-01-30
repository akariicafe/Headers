@class UIPageControl, CAMediaTimingFunction, NSString, UIViewFloatAnimatableProperty;

@interface SBCoverSheetIconFlyInAnimator : SBCenterIconZoomAnimator <PTSettingsKeyObserver> {
    double _baselineDistance;
    double _effectMultiplier;
    double _distanceExponent;
}

@property (retain, nonatomic) UIViewFloatAnimatableProperty *labelAlphaDrivingProgressAnimatableProperty;
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction;
@property (retain, nonatomic) UIPageControl *pageControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_prepareAnimation;
- (id)initWithFolderController:(id)a0;
- (void)_cleanupAnimation;
- (void).cxx_destruct;
- (void)_updateDockForFraction:(double)a0;
- (void)_createAnimatableProperties;
- (double)_functionWithProgress:(double)a0 distance:(double)a1;
- (void)_updateLabelAlphaForPresentationValue:(BOOL)a0;
- (void)_updateWithSettings:(id)a0;
- (double)_zPositionForView:(id)a0 center:(struct CGPoint { double x0; double x1; })a1 andFraction:(double)a2;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (double)_labelAlphaForFraction:(double)a0;
- (double)_zPositionForPoint:(struct CGPoint { double x0; double x1; })a0 center:(struct CGPoint { double x0; double x1; })a1 andFraction:(double)a2;
- (void)_setAnimationFraction:(double)a0 withCenter:(struct CGPoint { double x0; double x1; })a1;

@end
