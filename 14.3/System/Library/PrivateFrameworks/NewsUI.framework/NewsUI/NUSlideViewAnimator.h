@class NUAnimationFactory, CAMediaTimingFunction;

@interface NUSlideViewAnimator : NSObject

@property (nonatomic, getter=isAnimating) BOOL animating;
@property (retain, nonatomic) NUAnimationFactory *animationFactory;
@property (nonatomic) double duration;
@property (retain, nonatomic) CAMediaTimingFunction *mediaTimingFunction;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) double translateBoundsPadding;

- (void).cxx_destruct;
- (unsigned long long)animationOptionsForAnimationFactory:(id)a0;
- (void)translateFromView:(id)a0 toView:(id)a1 direction:(unsigned long long)a2 completion:(id /* block */)a3;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })toViewTransformForDirection:(unsigned long long)a0;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })fromViewTransformForDirection:(unsigned long long)a0;
- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
