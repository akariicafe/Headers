@class PUTileController, PUTilingView, UIView, UIViewController;
@protocol PUTilingViewControllerTransition, PUInteractiveDismissalControllerDelegate, PUInterruptibleViewControllerTransition;

@interface PUInteractiveDismissalController : NSObject {
    struct { BOOL respondsToCanBeginDismissalAtLocationFromProvider; BOOL respondsToTilingView; BOOL respondsToDesignatedTileController; } _delegateFlags;
}

@property (weak, nonatomic, setter=_setViewController:) UIViewController *_viewController;
@property (retain, nonatomic, setter=_setViewHostingGestureRecognizers:) UIView *_viewHostingGestureRecognizers;
@property (retain, nonatomic, setter=_setInterruptibleViewControllerTransition:) id<PUInterruptibleViewControllerTransition> _interruptibleViewControllerTransition;
@property (nonatomic, setter=_setNeedsUpdateGestureRecognizers:) BOOL _needsUpdateGestureRecognizers;
@property (readonly, nonatomic) PUTilingView *tilingView;
@property (readonly, nonatomic) PUTileController *designatedTileController;
@property (readonly, nonatomic) id<PUTilingViewControllerTransition> tilingViewControllerTransition;
@property (weak, nonatomic) id<PUInteractiveDismissalControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL isHandlingDismissalInteraction;

- (void)updateGestureRecognizersWithHostingView:(id)a0;
- (void).cxx_destruct;
- (void)endDismissal:(BOOL)a0;
- (void)beginDismissal;
- (void)_invalidateGestureRecognizers;
- (void)invalidateDelegateData;
- (BOOL)canBeginDismissalAtLocationFromProvider:(id)a0;
- (long long)_preferredDismissalTransitionType;
- (void)updateDismissalWithInteractionProgress:(double)a0 interactionWillFinish:(BOOL)a1;
- (void)_invalidateViewController;
- (void)_updateViewControllerIfNeeded;
- (void)_invalidateViewHostingGestureRecognizers;
- (void)_updateViewHostingGestureRecognizersIfNeeded;
- (void)_invalidateInterruptibleViewControllerTransition;
- (void)_updateInterruptibleViewControllerTransitionIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateGestureRecognizersIfNeeded;

@end
