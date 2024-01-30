@class UIDynamicAnimator, NSString, _UISpringBehavior, UIDynamicItemBehavior, _UIDynamicTransformer, UIPushBehavior;

@interface _UIInteractionEffect_deprecated : NSObject <_UIDynamicReferenceSystem> {
    UIDynamicAnimator *_animator;
    _UIDynamicTransformer *_transformer;
    _UISpringBehavior *_springBehavior;
    UIPushBehavior *_forceBehavior;
    UIDynamicItemBehavior *_itemProperties;
    double _damping;
    double _frequency;
    double _density;
    double _resistance;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } _preferredContentTransform;
    double _progress;
}

@property (nonatomic) double forceFactor;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (readonly, nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } preferredContentTransform;
@property (readonly, nonatomic) double progress;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)_stopAnimations;
- (void).cxx_destruct;
- (void)_prepareAnimatorIfNeeded;
- (void)_updateAnimatorIfNeeded;
- (void)_updateFromTransformer:(id)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })preferredContentTransform;

@end
