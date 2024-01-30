@class UICollectionViewCell, NSString, UIPreviewInteraction, UIViewPropertyAnimator, VUIDialogPresentationController, VUIPresentationContainerViewController, UICollectionView, UIViewController, NSIndexPath;
@protocol VUIPreviewInteractionControllerDelegate;

@interface VUIPreviewInteractionController : NSObject <UIPreviewInteractionDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning> {
    UIPreviewInteraction *_previewInteraction;
    UICollectionView *_collectionView;
    VUIPresentationContainerViewController *_wrapperViewController;
    VUIDialogPresentationController *_dialogPresentationController;
    UIViewPropertyAnimator *_previewPropertyAnimator;
    UIViewPropertyAnimator *_commitPropertyAnimator;
    UICollectionViewCell *_stashedCell;
    BOOL _previewTransitionEnded;
}

@property (readonly, weak, nonatomic) UIViewController *presentingViewController;
@property (readonly, nonatomic) UIViewController *presentedViewController;
@property (readonly, nonatomic) NSIndexPath *currentIndexPath;
@property (weak, nonatomic) id<VUIPreviewInteractionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForDismissedController:(id)a0;
- (void)animateTransition:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (double)transitionDuration:(id)a0;
- (BOOL)previewInteractionShouldBegin:(id)a0;
- (void)previewInteraction:(id)a0 didUpdatePreviewTransition:(double)a1 ended:(BOOL)a2;
- (void)previewInteractionDidCancel:(id)a0;
- (void).cxx_destruct;
- (void)_applicationDidEnterBackground:(id)a0;
- (void)dealloc;
- (id)initWithPresentingViewController:(id)a0 collectionView:(id)a1 controllerToPresent:(id)a2;
- (void)dismissConfirmation;
- (void)_cleanupPreviewInteraction;

@end
