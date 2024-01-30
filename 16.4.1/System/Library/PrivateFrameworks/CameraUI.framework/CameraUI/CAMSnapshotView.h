@class NSString, UIVisualEffectView, UIView;

@interface CAMSnapshotView : UIView <_UIBasicAnimationFactory>

@property (readonly, nonatomic) BOOL _supportsBlur;
@property (readonly, nonatomic) UIView *_lowQualityBlurView;
@property (readonly, nonatomic) UIView *_dimmingView;
@property (retain, nonatomic, setter=_setBlurView:) UIVisualEffectView *_blurView;
@property (nonatomic, setter=_setBlurStyleForEffectAnimationFactory:) long long _blurStyleForEffectAnimationFactory;
@property (readonly, nonatomic) UIView *snapshotView;
@property (readonly, nonatomic) long long desiredAspectRatio;
@property (nonatomic) BOOL blurred;
@property (nonatomic) BOOL dimmed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_prepareForApplyingBlurForStyle:(long long)a0 applying:(BOOL)a1 inputRadiusAmount:(double *)a2 inputRadiusDuration:(double *)a3 inputRadiusDelay:(double *)a4 inputRadiusTimingFunction:(id *)a5 opacityAmount:(double *)a6 opacityDuration:(double *)a7 opacityDelay:(double *)a8 opacityTimingFunction:(id *)a9;
- (void)setBlurred:(BOOL)a0 animated:(BOOL)a1 style:(long long)a2 withCompletionBlock:(id /* block */)a3;
- (void)_removeAnimationOnView:(id)a0 forKey:(id)a1;
- (double)_resumeFadeInDuration;
- (void)_setupDimOnSnapshot;
- (void)_applySnapshotBlurForStyle:(long long)a0 animated:(BOOL)a1 withCompletionBlock:(id /* block */)a2;
- (void)_applyLowQualityBlurForStyle:(long long)a0 animated:(BOOL)a1 withCompletionBlock:(id /* block */)a2;
- (void)setDimmed:(BOOL)a0 animated:(BOOL)a1 withCompletionBlock:(id /* block */)a2;
- (void)_removeLowQualityBlurForStyle:(long long)a0 animated:(BOOL)a1 withCompletionBlock:(id /* block */)a2;
- (id)_basicAnimationForView:(id)a0 withKeyPath:(id)a1;
- (void)fadeOutAnimatedWithStyle:(long long)a0 completion:(id /* block */)a1;
- (void)removeInflightBlurAnimations;
- (void)_prepareForApplyingLowQualityBlurForStyle:(long long)a0 applying:(BOOL)a1 opacityAmount:(double *)a2 opacityDuration:(double *)a3 opacityDelay:(double *)a4 opacityTimingFunction:(id *)a5 targetView:(id *)a6;
- (void)_applySnapshotDimAnimated:(BOOL)a0 withCompletionBlock:(id /* block */)a1;
- (id)initWithView:(id)a0 desiredAspectRatio:(long long)a1;
- (void)_removeSnapshotDimAnimated:(BOOL)a0 withCompletionBlock:(id /* block */)a1;
- (void)_setupLowQualityBlurOnSnapshot;
- (void)_removeSnapshotBlurForStyle:(long long)a0 animated:(BOOL)a1 withCompletionBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (void)prepareForResumingUsingCrossfade;

@end
