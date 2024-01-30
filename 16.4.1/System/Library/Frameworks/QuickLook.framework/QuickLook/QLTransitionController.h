@class UIView, NSString, UINavigationController, QLTransitionContext, NSDate, QLPreviewController, UIViewController;
@protocol QLCustomTransitioning, UIViewControllerContextTransitioning;

@interface QLTransitionController : NSObject <UIViewControllerAnimatedTransitioning, QLTransitionControllerProtocol> {
    UIView *_transitionBackgroundView;
    UINavigationController *_disabledNavigationController;
    id /* block */ _startTransitionBlock;
}

@property (retain, nonatomic) NSDate *setupDate;
@property (nonatomic) BOOL hasPerformedTransition;
@property (retain) QLTransitionContext *quickLookTransitionContext;
@property (readonly) UIViewController *presenterViewController;
@property (readonly) QLPreviewController *previewController;
@property (readonly) UIViewController<QLCustomTransitioning> *animatedController;
@property (weak) id<UIViewControllerContextTransitioning> transitionContext;
@property (readonly) id transitionDriver;
@property double duration;
@property unsigned long long transitionState;
@property BOOL showing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)transitionDuration:(id)a0;
- (void)animateTransition:(id)a0;
- (void)completeTransition:(BOOL)a0;
- (void)_performTransition;
- (void).cxx_destruct;
- (void)updateTransitionWithProgress:(double)a0;
- (struct { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; })_requiredVisualStateTransitions;
- (void)_completeBackgroundTransition:(BOOL)a0;
- (void)_completeOverlayTransition:(BOOL)a0;
- (void)_performForcedDismissal;
- (void)_performStartBlockIfNeeded;
- (void)_prepareTimedForcedDismissal;
- (void)_updateBackgroundTransitionWithProgress:(double)a0;
- (void)_updateOverlayTransitionWithProgress:(double)a0;
- (void)_view:(id)a0 applyFrameFromTransitionContextAsFinalFrame:(BOOL)a1 isToView:(BOOL)a2;
- (void)completeTransition:(BOOL)a0 withDuration:(double)a1;
- (BOOL)forceDismissalIfNeeded;
- (void)setUpWithTransitionContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)tearDownTransition:(BOOL)a0;

@end
