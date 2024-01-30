@class NSString, UIImage, UIView, NSIndexPath, ICDocCamImageQuad;

@interface ICDocCamRecropTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIImage *filteredImage;
@property (retain, nonatomic) UIImage *unfilteredImage;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) double duration;
@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) long long orientation;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } containerViewFrame;
@property (weak, nonatomic) UIView *startView;
@property (retain, nonatomic) ICDocCamImageQuad *quadForOverlay;
@property (nonatomic) BOOL presenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 unfilteredImage:(id)a1 orientation:(long long)a2 indexPath:(id)a3 duration:(double)a4 completion:(id /* block */)a5;
- (id)imageMeshTransform:(BOOL)a0;
- (struct { void /* unknown type, empty encoding */ x0[3]; })matrixTransformingQuadForOverlayToImageView:(BOOL *)a0;
- (struct { void /* unknown type, empty encoding */ x0[3]; })matrixTransformingToUnitSquareWithPoints:(double)a0 y0:(double)a1 x1:(double)a2 y1:(double)a3 x2:(double)a4 y2:(double)a5 x3:(double)a6 y3:(double)a7;
- (void)performPopTransitionFromViewController:(id)a0 toViewController:(id)a1 transitionContext:(id)a2;
- (void)performPushTransitionFromViewController:(id)a0 toViewController:(id)a1 transitionContext:(id)a2;
- (void)performSimpleFadeInFromViewController:(id)a0 toViewController:(id)a1 transitionContext:(id)a2;
- (id)scrollViewTransform:(BOOL)a0;
- (void)sortPoints:(struct CGPoint { double x0; double x1; } *)a0 sorted:(struct CGPoint { double x0; double x1; } *)a1;

@end
