@class NSString, WKFullscreenAnimationController;

@interface WKFullScreenInteractiveTransition : NSObject <UIViewControllerInteractiveTransitioning> {
    struct RetainPtr<WKFullscreenAnimationController> { void *m_ptr; } _animator;
    struct RetainPtr<id<UIViewControllerContextTransitioning>> { void *m_ptr; } _context;
    struct CGPoint { double x; double y; } _anchor;
}

@property (readonly, nonatomic) WKFullscreenAnimationController *animator;
@property (readonly, nonatomic) double completionSpeed;
@property (readonly, nonatomic) long long completionCurve;
@property (readonly, nonatomic) BOOL wantsInteractiveStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startInteractiveTransition:(id)a0;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void).cxx_destruct;
- (id)initWithAnimator:(id)a0 anchor:(struct CGPoint { double x0; double x1; })a1;
- (void)updateInteractiveTransition:(double)a0 withTranslation:(struct CGSize { double x0; double x1; })a1;
- (void)updateInteractiveTransition:(double)a0 withScale:(double)a1 andTranslation:(struct CGSize { double x0; double x1; })a2;
- (id).cxx_construct;

@end
