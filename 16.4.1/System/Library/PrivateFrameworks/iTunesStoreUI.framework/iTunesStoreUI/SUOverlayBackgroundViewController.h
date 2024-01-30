@class NSString, SUScalingFlipView, UISwipeGestureRecognizer, SUOverlayViewController, NSMutableArray, SUTouchCaptureView;
@protocol SUOverlayBackgroundDelegate;

@interface SUOverlayBackgroundViewController : SUViewController <SUScalingFlipViewDelegate, UIGestureRecognizerDelegate> {
    NSMutableArray *_actionQueue;
    SUScalingFlipView *_activeFlipView;
    BOOL _askingToDismissEverything;
    BOOL _askingToDismissSelection;
    SUTouchCaptureView *_captureView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    long long _selectedViewControllerIndex;
    UISwipeGestureRecognizer *_swipeGestureRecognizer;
}

@property (nonatomic) id<SUOverlayBackgroundDelegate> delegate;
@property (readonly, nonatomic) SUOverlayViewController *selectedViewController;
@property (readonly, nonatomic) NSMutableArray *viewControllers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissAnimated:(BOOL)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)dealloc;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)_enqueueAction:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)loadView;
- (void)_swipe:(id)a0;
- (void)_sendDidDismiss;
- (id)_selectedViewController;
- (void)_removeViewController:(id)a0;
- (void)storePage:(id)a0 finishedWithSuccess:(BOOL)a1;
- (void)_finishDismissEverythingAction:(id)a0;
- (void)_addViewController:(id)a0;
- (void)_backgroundAnimationDidStop:(id)a0 finished:(id)a1 context:(void *)a2;
- (void)_captureViewAction:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_centeredFrameForViewController:(id)a0;
- (id)_copyTransitionForTransition:(id)a0 action:(id)a1;
- (void)_finishDismissAction:(id)a0;
- (void)_finishDismissOfViewController:(id)a0 animated:(BOOL)a1;
- (void)_finishPresentAction:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForSlideFromBottomForViewController:(id)a0;
- (void)_layoutForKeyboardChangeWithInfo:(id)a0;
- (void)_overlayActionDidFinish;
- (void)_overlayAnimationDidFinish;
- (void)_performDismissAction:(id)a0;
- (void)_performDismissEverythingAction:(id)a0;
- (void)_performFlipForAction:(id)a0;
- (void)_performNextAction;
- (void)_performPresentAction:(id)a0;
- (void)_reloadGestureRecognizers;
- (void)_shouldDismissFinishedWithValue:(id)a0;
- (void)_tearDownFlipView;
- (double)_viewControllerHorizontalPadding;
- (double)_viewControllerKeyboardOffset;
- (id)copyArchivableContext;
- (id)copyArchivableJetsamContext;
- (id)copyChildViewControllersForReason:(long long)a0;
- (void)dismissOverlay:(id)a0 animated:(BOOL)a1;
- (void)keyboardWillHideWithInfo:(id)a0;
- (void)keyboardWillShowWithInfo:(id)a0;
- (void)layoutViewControllers;
- (void)overlayPageViewTapped:(id)a0;
- (void)populateNavigationHistoryWithItems:(id)a0;
- (void)presentOverlay:(id)a0 withTransition:(id)a1;
- (void)restoreArchivableContext:(id)a0;
- (void)scalingFlipViewDidFinish:(id)a0;
- (BOOL)shouldExcludeFromNavigationHistory;
- (id)viewControllerForScriptWindowContext:(id)a0;

@end
