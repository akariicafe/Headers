@class NSArray, NSString, PXGEffect;

@interface PXStoryConcreteTransition : PXStoryAnimation <PXStorySegmentTransition, PXStoryEffectTransition, PXStoryTransition>

@property (readonly, nonatomic) double initialClipAlpha;
@property (readonly, nonatomic) double progress;
@property (nonatomic) BOOL finished;
@property (readonly, copy, nonatomic) NSArray *clipLayouts;
@property (readonly, nonatomic) char kind;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } duration;
@property (readonly, nonatomic) long long event;
@property (copy, nonatomic) id /* block */ effectAlphaHandler;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXGEffect *effect;
@property (readonly, nonatomic) PXGEffect *auxiliaryEffect;

- (id)diagnosticDescription;
- (void)_end:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)canBePaused;
- (id)initWithKind:(char)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 event:(long long)a2;
- (id)initWithKind:(char)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 event:(long long)a2 clipLayouts:(id)a3;
- (id)initWithKind:(char)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 effect:(id)a2;
- (id)initWithKind:(char)a0 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 effect:(id)a2 auxiliaryEffect:(id)a3;
- (void)timeDidChange;
- (void)_updateClipAlphaForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)wasStopped;
- (double)clipAlphaForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)configureEffectForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)setPrimaryEffectAlpha:(double)a0 auxiliaryEffectAlpha:(double)a1;

@end
