@class NSString, UIViewController, UIView;
@protocol AnimatorDetailViewController;

@interface AAUIAchievementDetailTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) id<AnimatorDetailViewController> detailViewController;
@property (retain, nonatomic) UIView *conversionView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } initialBadgeFrame;
@property (nonatomic) struct CGPoint { double x; double y; } initialBadgeCenter;
@property (nonatomic) struct CGPoint { double x; double y; } finalBadgeCenter;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } initialBadgeTransform;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } finalBadgeTransform;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } finalBadgeFrame;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } finalPresentingVCTransform;
@property (copy, nonatomic) id /* block */ presentBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL shouldPlayFlipInAnimation;
@property (nonatomic) BOOL shouldDismissGracefullyForTextSizeChange;
@property (nonatomic) BOOL reduceMotion;
@property (retain, nonatomic) NSString *presentingViewControllerWeeTitle;
@property (nonatomic) BOOL shouldAdjustForInset;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void).cxx_destruct;
- (void)textSizeDidChange:(id)a0;
- (void)animatePresentationWithContext:(id)a0;
- (void)animateDismissalWithContext:(id)a0;
- (id)initWithPresentingViewController:(id)a0 detailViewController:(id)a1 shouldPlayFlipInAnimation:(BOOL)a2 initialBadgeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 conversionView:(id)a4 presentAlongsideBlock:(id /* block */)a5 dismissAlongsideBlock:(id /* block */)a6 completionBlock:(id /* block */)a7;
- (BOOL)isPresentingWithContext:(id)a0;
- (void)prepareForAnimationsWithContext:(id)a0;
- (void)reducedMotionAnimateDismissalWithContext:(id)a0;
- (void)reducedMotionAnimatePresentationWithContext:(id)a0;

@end
