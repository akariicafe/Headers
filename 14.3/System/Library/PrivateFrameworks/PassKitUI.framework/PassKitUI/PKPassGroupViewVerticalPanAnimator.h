@class PKPassGroupView, _UIDynamicValueAnimation, UIPanGestureRecognizer;

@interface PKPassGroupViewVerticalPanAnimator : NSObject {
    _UIDynamicValueAnimation *_panningAnimation;
}

@property (readonly, retain, nonatomic) PKPassGroupView *groupView;
@property (retain, nonatomic) UIPanGestureRecognizer *gestureRecognizer;
@property (nonatomic) struct CGPoint { double x; double y; } panningViewStartPosition;
@property (nonatomic) struct CGPoint { double x; double y; } panningViewTargetPosition;
@property (nonatomic) double panningViewTargetScale;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)layoutViewsWithY:(double)a0;
- (id)initWithGroupView:(id)a0;
- (void)dismissWithStartVelocity:(double)a0 alongSideApplier:(id /* block */)a1 completion:(id /* block */)a2;
- (double)scaleForY:(double)a0;
- (id)_dynamicAnimationWithStart:(double)a0 target:(double)a1 initialVelocity:(double)a2;

@end
