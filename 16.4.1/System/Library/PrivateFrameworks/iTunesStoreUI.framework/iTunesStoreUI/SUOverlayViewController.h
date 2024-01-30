@class UIViewController, SUMaskedView, SUTouchCaptureView, SUScriptWindowContext, SUScriptFunction, SUMaskProvider, NSMutableArray, SUOverlayTransition;

@interface SUOverlayViewController : SUViewController {
    NSMutableArray *_actionQueue;
    UIViewController *_activeViewController;
    SUOverlayTransition *_lastFlipTransition;
    SUScriptWindowContext *_scriptWindowContext;
    long long _state;
    SUMaskedView *_subviewContainerView;
    SUTouchCaptureView *_touchCaptureView;
}

@property (readonly, nonatomic) UIViewController *activeViewController;
@property (retain, nonatomic) UIViewController *backViewController;
@property (retain, nonatomic) UIViewController *frontViewController;
@property (nonatomic) struct CGSize { double width; double height; } overlaySize;
@property (retain, nonatomic) SUMaskProvider *maskProvider;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;
@property (nonatomic) BOOL canSwipeToDismiss;
@property (retain, nonatomic) SUScriptFunction *shouldDismissFunction;
@property (readonly, nonatomic, getter=isActiveOverlay) BOOL activeOverlay;
@property (readonly, nonatomic, getter=isOnFront) BOOL onFront;
@property (retain, nonatomic) SUOverlayTransition *presentationTransition;

+ (struct CGSize { double x0; double x1; })defaultOverlaySize;

- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (id)_flipTransition;
- (void)dealloc;
- (id)_activeViewController;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)_enqueueAction:(id)a0;
- (void)loadView;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)storePage:(id)a0 finishedWithSuccess:(BOOL)a1;
- (void)_applyDisplayProperties;
- (void)_applyOverlayConfiguration:(id)a0;
- (void)_finishFlipAction:(id)a0;
- (BOOL)_isControllerLoaded:(id)a0;
- (void)_overlayActionDidFinish;
- (void)_overlayAnimationDidFinish;
- (void)_performFlipAction:(id)a0;
- (void)_performFlipTransitionAction:(id)a0;
- (void)_performNextAction;
- (void)_setActiveViewController:(id)a0 updateInterface:(BOOL)a1;
- (void)_setShadowVisible:(BOOL)a0;
- (id)_subviewContainerView;
- (void)_tearDownTouchCaptureView;
- (void)_touchCaptureAction:(id)a0;
- (id)copyArchivableContext;
- (void)flipWithTransition:(id)a0;
- (void)imagePageViewTapped:(id)a0;
- (id)initWithOverlayConfiguration:(id)a0;
- (void)invalidateForMemoryPurge;
- (void)restoreArchivableContext:(id)a0;
- (id)scriptWindowContext;
- (void)setScriptWindowContext:(id)a0;
- (BOOL)shouldExcludeFromNavigationHistory;
- (void)viewWillDismissWithTransition:(id)a0;

@end
