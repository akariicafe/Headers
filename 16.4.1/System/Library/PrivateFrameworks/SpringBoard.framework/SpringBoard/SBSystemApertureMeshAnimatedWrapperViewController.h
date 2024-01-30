@class UIViewFloatAnimatableProperty, SBPortalView, UIView;

@interface SBSystemApertureMeshAnimatedWrapperViewController : UIViewController {
    UIView *_containerView;
    SBPortalView *_portalView;
    UIViewFloatAnimatableProperty *_activeAnimationProgressProperty;
    struct CGPoint { double x; double y; } _inProgressTransitionTarget;
    struct CGPoint { double x; double y; } _transitionVelocity;
    unsigned long long _inflectionPointReached;
    unsigned long long _transitionState;
    unsigned long long _positionAnimationCount;
    unsigned long long _meshAnimationCount;
    BOOL _expanded;
}

@property (weak, nonatomic) UIView *sourceView;
@property (nonatomic, getter=isExpanded) BOOL expanded;

- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_expandingMesh2;
- (id)_expandingMesh1;
- (id)_animatablePropertyWithNotifications:(id)a0 forAnimationDirection:(unsigned long long)a1;
- (id)_animationInflectionPointsForDirection:(unsigned long long)a0;
- (void)_animationReachedProgress:(double)a0 direction:(unsigned long long)a1;
- (id)_collapsedMesh;
- (id)_collapsingMesh1;
- (id)_collapsingMesh2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_containerViewFrameForState:(unsigned long long)a0;
- (void)_decrementActiveMeshAnimationCount;
- (void)_decrementActivePositionAnimationCount;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_fullyExpandedSourceViewRect;
- (id)_identityMesh;
- (void)_incrementActiveMeshAnimationCount;
- (void)_incrementActivePositionAnimationCount;
- (BOOL)_isMeshAnimating;
- (BOOL)_isPositionAnimating;
- (id)_meshAnimationSettingsForDirection:(unsigned long long)a0;
- (id)_meshTransformAtIndex:(unsigned long long)a0 forDirection:(unsigned long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_systemApertureDefaultFrame;
- (struct CGPoint { double x0; double x1; })_systemApertureTransitionTargetCenter;
- (void)_updatePortalEnablement;
- (void)setExpanded:(BOOL)a0 velocity:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)sourceViewPositionInvalidated;

@end
