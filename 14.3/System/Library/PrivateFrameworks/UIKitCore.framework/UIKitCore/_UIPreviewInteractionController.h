@class _UIInteractionEffect_deprecated, _UIPreviewInteractionCommitTransition, _UITouchesObservingGestureRecognizer, _UIPreviewInteractionGestureRecognizer, _UIPreviewInteractionPresentationTransition, _UIPreviewPresentationController2, UIViewController, UIView, UIPreviewInteraction, UIGestureRecognizer, _UISteadyTouchForceGestureRecognizer, NSString, _UIPreviewInteractionDismissTransition, _UIPreviewActionsController;
@protocol _UIPreviewInteractionTouchForceProviding, _UIPreviewInteractionControllerDelegate, _UIPreviewInteractionHighlighting, UIViewControllerPreviewing_Internal;

@interface _UIPreviewInteractionController : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegate, UIViewControllerTransitioningDelegate, _UIPreviewActionsControllerDelegate>

@property (nonatomic) struct CGPoint { double x; double y; } location;
@property (weak, nonatomic) UIView *sourceView;
@property (weak, nonatomic) UIViewController *presentingViewController;
@property (retain, nonatomic) UIPreviewInteraction *previewInteraction;
@property (retain, nonatomic) id<_UIPreviewInteractionTouchForceProviding> presentedViewTouchForceProvider;
@property (retain, nonatomic) id<_UIPreviewInteractionTouchForceProviding> pausingTouchForceProvider;
@property (retain, nonatomic) _UIPreviewInteractionGestureRecognizer *revealGestureRecognizer;
@property (retain, nonatomic) _UIPreviewInteractionGestureRecognizer *previewGestureRecognizer;
@property (retain, nonatomic) _UISteadyTouchForceGestureRecognizer *steadyTouchForceGestureRecognizer;
@property (retain, nonatomic) UIViewController *currentPreviewViewController;
@property (retain, nonatomic) _UIPreviewPresentationController2 *currentPresentationController;
@property (retain, nonatomic) id<_UIPreviewInteractionHighlighting> currentHighlighter;
@property (retain, nonatomic) _UIPreviewInteractionPresentationTransition *currentPresentationTransition;
@property (retain, nonatomic) _UIPreviewInteractionDismissTransition *currentDismissTransition;
@property (retain, nonatomic) _UIPreviewInteractionCommitTransition *currentCommitTransition;
@property (nonatomic) BOOL performingPreviewTransition;
@property (nonatomic) BOOL hasTransitionedToPreview;
@property (nonatomic) BOOL dismissingPreview;
@property (nonatomic) BOOL commitTransitionScheduled;
@property (nonatomic) BOOL performingCommitTransition;
@property (retain, nonatomic) _UIInteractionEffect_deprecated *currentInteractionEffect;
@property (retain, nonatomic) _UITouchesObservingGestureRecognizer *gestureRecognizerForPreviewActions;
@property (retain, nonatomic) _UIPreviewActionsController *previewActionsController;
@property (nonatomic) struct CGPoint { double x; double y; } initialLocationForPreviewActionsPanning;
@property (weak, nonatomic) id<UIViewControllerPreviewing_Internal> currentPreviewingContext;
@property (readonly, nonatomic) UIGestureRecognizer *presentationGestureRecognizer;
@property (readonly, nonatomic) UIGestureRecognizer *beginPreviewGestureRecognizer;
@property (weak, nonatomic) id<_UIPreviewInteractionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_gestureRecognizerFailed:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldBeRequiredToFailByGestureRecognizer:(id)a1;
- (id)initWithView:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handlePreviewGesture:(id)a0;
- (void)_handlePreviewActionsGesture:(id)a0;
- (void)_handleSteadyTouchForceGesture:(id)a0;
- (void)_stopCurrentInteractionEffect;
- (void)_finalizeAfterPreviewViewControllerPresentation;
- (BOOL)_preparePreviewViewControllerPresentationFromPreviewInteraction:(id)a0;
- (id)_preparedInteractionEffect;
- (void)_dismissPreviewViewControllerIfNeeded;
- (void)_preparePreviewPresentationControllerIfNeeded:(id)a0;
- (BOOL)_isLongPressGestureRecognizerUsedForDelayingActions:(id)a0;
- (id)_newHighlighterForPreviewingContext:(id)a0;
- (void)_dismissPreviewViewControllerIfNeededWithCompletion:(id /* block */)a0;
- (void)_finalizeHighlighterAfterPreviewViewControllerPresentation;
- (BOOL)_viewControllerIsChildOfTwoColumnSplitViewController:(id)a0;
- (void)_revertInteractionEffectToStartState;
- (BOOL)_previewInteractionShouldEndOnGestureCompletion:(id)a0;
- (id)_preferredNavigationControllerForCommitTransition;
- (id)_previewPresentationControllerForViewController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)_overrideSourceViewForBinaryCompatibilityIfNeeded:(id *)a0 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (id)interactionControllerForPresentation:(id)a0;
- (struct CGSize { double x0; double x1; })maximumPreviewActionsViewSizeForPreviewActionsController:(id)a0;
- (void)didDismissPreviewActionsController:(id)a0;
- (void)previewActionsController:(id)a0 didCompleteWithSelectedAction:(id)a1;
- (struct CGPoint { double x0; double x1; })initialPlatterPositionForPreviewActionsController:(id)a0;
- (void)previewActionsController:(id)a0 didUpdatePlatterTranslation:(struct CGVector { double x0; double x1; })a1 withVelocity:(struct CGVector { double x0; double x1; })a2;
- (id)animationControllerForDismissedController:(id)a0;
- (BOOL)previewInteractionShouldBegin:(id)a0;
- (id)presentationControllerForPresentedViewController:(id)a0 presentingViewController:(id)a1 sourceViewController:(id)a2;
- (void)previewInteraction:(id)a0 didUpdateCommitTransition:(double)a1 ended:(BOOL)a2;
- (void)previewInteraction:(id)a0 didUpdatePreviewTransition:(double)a1 ended:(BOOL)a2;
- (void)previewInteractionDidCancel:(id)a0;
- (BOOL)_previewingIsPossibleForView:(id)a0;
- (void)commitInteractivePreview;
- (void)_resetCustomPresentationHooks;
- (void)_finalizeInteractivePreview;
- (void)_handleRevealGesture:(id)a0;

@end
