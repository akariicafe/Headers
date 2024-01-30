@class NSArray, NSString;

@interface UIKeyboardKeySwipeTransition : UIKeyboardKeyplaneTransition <CAAnimationDelegate>

@property (retain, nonatomic) NSArray *startKeysOrdered;
@property (retain, nonatomic) NSArray *endKeysOrdered;
@property (retain, nonatomic) NSArray *startGeometries;
@property (retain, nonatomic) NSArray *transitionKeys;
@property (retain, nonatomic) NSArray *keyInfos;
@property (nonatomic) double previousProgress;
@property (nonatomic) BOOL disableMeshOptimization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllAnimations;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)updateWithProgress:(double)a0;
- (void)rebuildWithStartKeyplane:(id)a0 startView:(id)a1 endKeyplane:(id)a2 endView:(id)a3;
- (void)gatherTransitionKeys;
- (void)_runTransformAnimation;
- (void)_runOpacityAnimation;
- (id)meshTransformForKeyplane:(id)a0 forward:(BOOL)a1 initial:(BOOL)a2;
- (double)nonInteractiveDuration;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })keyRectForFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 normalizedSubRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)commitTransitionRebuild;
- (void)runNonInteractivelyWithCompletion:(id /* block */)a0;
- (void)dealloc;

@end
