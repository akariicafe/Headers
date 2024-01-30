@class PXGAnimatorLayout, PXGSpriteDataStore, PXGIndexSetArray, PXGAnimationDataStore;

@interface PXGAnimator : NSObject {
    PXGAnimationDataStore *_animationDataStore;
    PXGAnimatorLayout *_animatorLayout;
    double _lastUpdateTime;
    unsigned int _numberOfProlongatedSprites;
    PXGIndexSetArray *_spriteIndexesByGroupIndex;
    PXGSpriteDataStore *_doubleSidedSpriteDataStore;
    PXGSpriteDataStore *_oldAnimationPresentationSpriteDataStore;
    BOOL _isSkippingAnimations;
}

@property (nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic) double speed;
@property (readonly, nonatomic) long long computeCount;
@property (readonly, nonatomic) BOOL hasCriticalAnimations;
@property (nonatomic) long long preferredFramesPerSecond;

- (void)retargetAnimationsAfterStartTime:(double)a0 newStartTime:(double)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_stopAllAnimations;
- (void)dealloc;
- (void)computeAnimationStateForTime:(double)a0 inputSpriteDataStore:(id)a1 inputChangeDetails:(id)a2 inputLayout:(id)a3 viewportShift:(struct CGPoint { double x0; double x1; })a4 animationPresentationSpriteDataStore:(id)a5 animationTargetSpriteDataStore:(id)a6 animationChangeDetails:(out id *)a7 animationLayout:(out id *)a8;
- (id)_animationByAnimationIndexForAnimations:(id)a0;

@end
