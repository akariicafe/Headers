@class UIView, _UIContextMenuAnimator, NSString, UIContextMenuConfiguration, _UIClickPresentationInteraction, NSMutableDictionary, UITargetedPreview, UIGestureRecognizer;
@protocol UIContextMenuInteractionDelegate;

@interface UIContextMenuInteraction : NSObject <_UIClickPresentationInteractionDelegateInternal, _UIPreviewPlatterPresentationControllerDelegate, _UIContextMenuPresentationAnimationDelegate, UIDeferredMenuElementDelegate, UIInteraction> {
    struct { BOOL previewForHighlighting; BOOL previewForDismissing; BOOL willPerformPreviewActionForMenuWithConfiguration; BOOL willDisplayMenuForConfiguration; BOOL willEndForConfiguration; BOOL styleForMenuWithConfiguration; BOOL accessoriesForMenuWithConfiguration; BOOL failedToBeginForSecondaryClickAtLocation; BOOL asyncConfigurationForMenuAtLocation; BOOL overrideSuggestedActions; BOOL shouldAllowDragAfterDismiss; BOOL interactionEffectForTargetedPreview; BOOL shouldAttemptToPresentConfiguration; BOOL willCommit; BOOL willPresent; BOOL didEnd; } _delegateImplements;
}

@property (retain, nonatomic) UIContextMenuConfiguration *pendingConfiguration;
@property (retain, nonatomic) NSMutableDictionary *configurationsByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *presentationsByIdentifier;
@property (retain, nonatomic) _UIClickPresentationInteraction *presentationInteraction;
@property (copy, nonatomic) UITargetedPreview *stashedPreview;
@property (retain, nonatomic) _UIContextMenuAnimator *pendingCommitAnimator;
@property (nonatomic) BOOL allowSimultaneousRecognition;
@property (readonly, nonatomic) UIGestureRecognizer *gestureRecognizerForFailureRelationships;
@property (readonly, nonatomic) unsigned long long _inputPrecision;
@property (readonly, weak, nonatomic) id<UIContextMenuInteractionDelegate> delegate;
@property (readonly, nonatomic) long long menuAppearance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) UIView *view;

+ (id)_deferredMenuPlaceholder;

- (void)willMoveToView:(id)a0;
- (id)_clickPresentationInteraction:(id)a0 previewForCancellingDragItem:(id)a1;
- (void)didMoveToView:(id)a0;
- (id)clickPresentationInteraction:(id)a0 previewForHighlightingAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_previewPlatterPresentationController:(id)a0 didSelectMenuLeaf:(id)a1;
- (BOOL)_shouldKeepInputViewVisibleForLayout:(unsigned long long)a0;
- (void)_willBeginWithConfiguration:(id)a0;
- (void)_clickPresentationInteraction:(id)a0 dragSessionDidEndForItems:(id)a1;
- (BOOL)_previewPlatterPresentationControllerShouldHandlePreviewAction:(id)a0;
- (void)_interactionShouldBeginAtLocation:(struct CGPoint { double x0; double x1; })a0 completion:(id /* block */)a1;
- (id)_delegate_contextMenuInteractionWillEndForConfiguration:(id)a0 presentation:(id)a1;
- (void)_updateInteractionDrivers;
- (void).cxx_destruct;
- (void)_previewPlatterPresentationControllerWantsToBeDismissed:(id)a0 withReason:(unsigned long long)a1 alongsideActions:(id /* block */)a2 completion:(id /* block */)a3;
- (unsigned long long)_actualLayoutForPreferredLayout:(unsigned long long)a0 withConfiguration:(id)a1;
- (id)clickPresentationInteraction:(id)a0 presentationForPresentingViewController:(id)a1;
- (void)_delegate_tappedPreviewForConfiguration:(id)a0 withAnimator:(id)a1;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })locationInView:(id)a0;
- (void)dismissMenu;
- (id)_liveDragPreviewForConfiguration:(id)a0 dragItem:(id)a1;
- (id)_accessoryViewsForPreviewPlatterPresentationController:(id)a0;
- (void)_clickPresentationInteraction:(id)a0 shouldBegin:(id /* block */)a1;
- (BOOL)_clickPresentationInteractionShouldAllowDragAfterDismiss:(id)a0;
- (id)_clickPresentationInteraction:(id)a0 interactionEffectForTargetedPreview:(id)a1;
- (id)_delegate_contextMenuInteractionWillDisplayForConfiguration:(id)a0;
- (id)_clickPresentationInteraction:(id)a0 liveDragPreviewForPresentation:(id)a1;
- (BOOL)_delegate_failedToBeginForSecondaryClickAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)updateVisibleMenuWithBlock:(id /* block */)a0;
- (id)_delegate_previewForHighlightingForConfiguration:(id)a0;
- (void)_previewPlatterPresentationControllerDidBeginPanInteraction:(id)a0;
- (id)actualPlatterContainerViewForPresentationController:(id)a0;
- (void)_dragMorphDidCompleteForConfiguration:(id)a0;
- (void)_updateVisibleMenuWithBlock:(id /* block */)a0;
- (id)_delegate_previewForDismissingForConfiguration:(id)a0 clientReturnedPreview:(BOOL *)a1;
- (id)_menuPreparedForDisplayWithMenu:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)_previewPlatterPresentationControllerDidTapPreview:(id)a0;
- (id)targetedPreviewForAnimator:(id)a0 dismissingWithStyle:(unsigned long long)a1 clientReturnedPreview:(BOOL *)a2;
- (void)_performCleanupForConfigurationWithIdentifier:(id)a0;
- (id)_fulfilledConfigurationForConfiguration:(id)a0 activationMode:(unsigned long long)a1 atLocation:(struct CGPoint { double x0; double x1; })a2 inCoordinateSpace:(id)a3;
- (BOOL)_clickPresentationInteractionShouldAllowRapidRestart:(id)a0;
- (id)_proxySender;
- (void)_presentMenuAtLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_clickPresentationInteraction:(id)a0 item:(id)a1 willAnimateDragCancelWithAnimator:(id)a2;
- (id)_interactionDrivers;
- (void)_previewPlatterPresentationController:(id)a0 beginDragWithTouch:(id)a1;
- (void)deferredMenuElementWasFulfilled:(id)a0;
- (void)_previewPlatterPresentationControllerDidEndPanInteraction:(id)a0;
- (id)_suggestedMenuForConfiguration:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1 inCoordinateSpace:(id)a2;
- (id)_overrideTargetedPreviewForCompactStyle:(id)a0;
- (id)_previewPlatterPresentationController:(id)a0 willDisplayMenu:(id)a1;
- (void)_clickPresentationInteractionEnded:(id)a0 forPresentation:(id)a1 reason:(unsigned long long)a2;
- (unsigned long long)_currentActivationMode;
- (id)_delegate_configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a0;

@end
