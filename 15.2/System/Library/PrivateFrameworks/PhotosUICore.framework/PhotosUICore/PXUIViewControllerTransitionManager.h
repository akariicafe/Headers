@class NSMapTable, NSString, NSMutableSet, PXVerticalSwipeGestureRecognizerHelper;

@interface PXUIViewControllerTransitionManager : NSObject <UIGestureRecognizerDelegate, PXVerticalSwipeGestureRecognizerHelperDelegate, UINavigationControllerDelegate>

@property (readonly, nonatomic) NSMapTable *_pinchGestureRecognizers;
@property (readonly, nonatomic) NSMapTable *panGestureRecognizers;
@property (readonly, nonatomic) NSMapTable *_lastViewControllerTransitions;
@property (readonly, nonatomic) NSMutableSet *_pinchTransitions;
@property (readonly, nonatomic) NSMutableSet *swipeDownTransitions;
@property (readonly, nonatomic) PXVerticalSwipeGestureRecognizerHelper *swipeDownGestureRecognizerHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (id)_swipeDownTransitionForGestureRecognizer:(id)a0;
- (id)_navigationControllerAtLocationOfGestureRecognizer:(id)a0;
- (id)lastTransitionForViewController:(id)a0;
- (BOOL)_getMasterViewController:(out id *)a0 detailViewController:(out id *)a1 forPopAtLocationOfGestureRecognizer:(id)a2;
- (id)_deepestDescendantOfViewController:(id)a0 atLocationOfGestureRecognizer:(id)a1;
- (id)_panGestureRecognizerForViewController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_handlePanGestureRecognizer:(id)a0;
- (BOOL)verticalSwipeGestureRecognizerHelper:(id)a0 shouldRecognizeSwipeDownGestureRecognizer:(id)a1;
- (void)setLastTransition:(id)a0 forViewController:(id)a1;
- (BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)a0;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (id)_pinchGestureRecognizerForViewController:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)navigationControllerShouldUseBuiltinInteractionController:(id)a0;
- (id)_pinchTransitionForGestureRecognizer:(id)a0;
- (id)_windowForViewController:(id)a0;
- (void)_handlePinchGestureRecognizer:(id)a0;

@end
