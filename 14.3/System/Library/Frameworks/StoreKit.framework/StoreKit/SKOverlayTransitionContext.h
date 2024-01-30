@class ASOOverlayTransitionContext;

@interface SKOverlayTransitionContext : NSObject

@property (retain, nonatomic) ASOOverlayTransitionContext *backing;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } startFrame;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } endFrame;

- (void).cxx_destruct;
- (void)addAnimationBlock:(id /* block */)a0;
- (id)initWithASOOverlayTransitionContext:(id)a0;

@end
