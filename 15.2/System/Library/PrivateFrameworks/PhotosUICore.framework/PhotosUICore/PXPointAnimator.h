@class NSString, PXNumberAnimator;
@protocol PXMutableNumberAnimator;

@interface PXPointAnimator : PXObservable <PXMutablePointAnimator, PXChangeObserver, PXNumberAnimatorDisplayLinkTarget> {
    PXNumberAnimator<PXMutableNumberAnimator> *_xAnimator;
    PXNumberAnimator<PXMutableNumberAnimator> *_yAnimator;
}

@property (nonatomic) BOOL isAnimating;
@property (nonatomic) struct CGPoint { double x; double y; } presentationValue;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } value;
@property (readonly, nonatomic) double epsilon;
@property (copy, nonatomic) NSString *label;
@property (readonly, nonatomic) PXNumberAnimator<PXMutableNumberAnimator> *xAnimator;
@property (readonly, nonatomic) PXNumberAnimator<PXMutableNumberAnimator> *yAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double currentTime;

- (id)initWithValue:(struct CGPoint { double x0; double x1; })a0 epsilon:(double)a1;
- (void)performChangesWithoutAnimation:(id /* block */)a0;
- (id)mutableChangeObject;
- (void)didPerformChanges;
- (struct CGPoint { double x0; double x1; })approximateVelocity;
- (void)performChanges:(id /* block */)a0;
- (void)setValue:(struct CGPoint { double x0; double x1; })a0;
- (void)handleDisplayLink:(id)a0;
- (void)performChangesUsingSpringAnimationWithStiffness:(double)a0 dampingRatio:(double)a1 initialVelocity:(struct CGPoint { double x0; double x1; })a2 changes:(id /* block */)a3;
- (void)performChangesUsingDefaultSpringAnimationWithInitialVelocity:(struct CGPoint { double x0; double x1; })a0 changes:(id /* block */)a1;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)init;
- (void)_update;
- (id)initWithValue:(struct CGPoint { double x0; double x1; })a0;
- (void)performChangesWithDuration:(double)a0 curve:(long long)a1 changes:(id /* block */)a2;
- (void)_setInternalValue:(struct CGPoint { double x0; double x1; })a0;

@end
