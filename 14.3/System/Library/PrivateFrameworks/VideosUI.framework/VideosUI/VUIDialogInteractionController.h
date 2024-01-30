@class UIViewController, NSString, UILongPressGestureRecognizer, VUIDialogPresentationController, UICollectionView, VUIPresentationContainerViewController, VUIPreviewInteractionController, NSIndexPath;
@protocol VUIDialogInteractionControllerDelegate;

@interface VUIDialogInteractionController : NSObject <VUIPreviewInteractionControllerDelegate, UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {
    UICollectionView *_collectionView;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    VUIPresentationContainerViewController *_wrapperViewController;
    VUIDialogPresentationController *_dialogPresentationController;
}

@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (readonly, nonatomic) UIViewController *presentedViewController;
@property (retain, nonatomic) VUIPreviewInteractionController *interactionController;
@property (weak, nonatomic) id<VUIDialogInteractionControllerDelegate> delegate;
@property (retain, nonatomic) NSIndexPath *currentIndexPath;
@property (nonatomic) BOOL isPresenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (void)_cleanup;
- (double)transitionDuration:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (void)presentViewController:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (id)initWithPresentingViewController:(id)a0 collectionView:(id)a1 controllerToPresent:(id)a2;
- (void)dismissConfirmation;
- (void)longPressGestureRecognizerPressed:(id)a0;
- (BOOL)interactionController:(id)a0 shouldInteractionControllerBeginForIndexPath:(id)a1;
- (void)interactionController:(id)a0 didBeginForIndexPath:(id)a1;
- (void)interactionController:(id)a0 didEndForIndexPath:(id)a1;

@end
