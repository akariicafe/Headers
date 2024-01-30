@class NSString, OKPanGenerator, CABasicAnimation;

@interface OKWidgetContentKenburnsEffect : OKWidgetContentEffect <CAAnimationDelegate> {
    OKPanGenerator *_panGenerator;
    CABasicAnimation *_translationXAnimation;
    CABasicAnimation *_translationYAnimation;
    CABasicAnimation *_scaleAnimation;
    double _fromScale;
    double _toScale;
    double _fromX;
    double _toX;
    double _fromY;
    double _toY;
    double _panningCropThreshold;
    double _beginTime;
    NSString *_timingFunction;
    double _speedMitigator;
    double _durationPadding;
    double _panningAmount;
    BOOL _animationIsUnderway;
    double _animationProgressAtStateChange;
    double _animationResumeTime;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedSettings;

- (void)_setupAnimation;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)startAnimation;
- (void)resumeAnimation;
- (void)setDefaultDuration:(double)a0;
- (void)dealloc;
- (id)settingObjectForKey:(id)a0;
- (void)pauseAnimation;
- (void)stopAnimation;
- (double)_fullDuration;
- (void)_applyGeometryForStart:(BOOL)a0;
- (float)_croppedFractionforRectAspectRatio:(float)a0 photoAspectRatio:(float)a1;
- (void)applySettings;
- (void)prepareContentEffectWithView:(id)a0;
- (double)remainingPlayDuration;

@end
