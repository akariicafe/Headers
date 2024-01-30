@class NSString, NSMutableArray, PXDisplayLink;
@protocol PXNumberAnimatorDisplayLinkTarget;

@interface PXNumberAnimator : PXObservable <PXMutableNumberAnimator, PXNumberAnimatorDisplayLinkTarget> {
    BOOL _isPerformingChanges;
    struct { BOOL presentationValue; } _needsUpdateFlags;
    struct _PXValueAnimationSpec { long long type; double duration; long long curve; double epsilon; double stiffness; double dampingRatio; double initialVelocity; } _currentAnimationSpec;
    NSMutableArray *_animations;
    PXDisplayLink *_displayLink;
}

@property (nonatomic, setter=_setPresentationValue:) double presentationValue;
@property (weak, nonatomic) id<PXNumberAnimatorDisplayLinkTarget> displayLinkTarget;
@property (readonly, nonatomic) double value;
@property (readonly, nonatomic) double epsilon;
@property (readonly, nonatomic) double approximateVelocity;
@property (readonly, nonatomic) BOOL isAnimating;
@property (readonly, nonatomic) BOOL isBeingMutated;
@property (copy, nonatomic) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithValue:(double)a0 epsilon:(double)a1;
- (void)_invalidatePresentationValue;
- (id)init;
- (void).cxx_destruct;
- (void)_setNeedsUpdate;
- (void)performChangesWithDuration:(double)a0 curve:(long long)a1 changes:(id /* block */)a2;
- (void)_setAnimating:(BOOL)a0;
- (void)didPerformChanges;
- (void)performChangesUsingDefaultSpringAnimationWithInitialVelocity:(double)a0 changes:(id /* block */)a1;
- (BOOL)_needsUpdate;
- (void)performChanges:(id /* block */)a0;
- (void)_updateIfNeeded;
- (id)mutableChangeObject;
- (void)_handleDisplayLink:(id)a0;
- (void)_updatePresentationValueIfNeeded;
- (id)initWithValue:(double)a0;
- (void)performChangesUsingSpringAnimationWithStiffness:(double)a0 dampingRatio:(double)a1 initialVelocity:(double)a2 changes:(id /* block */)a3;
- (void)setValue:(double)a0;
- (void)performChangesWithoutAnimation:(id /* block */)a0;

@end
