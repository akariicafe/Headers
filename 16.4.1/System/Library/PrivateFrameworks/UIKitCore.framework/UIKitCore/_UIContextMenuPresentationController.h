@class _UIFulfilledContextMenuConfiguration, _UIContextMenuLayoutArbiter, _UIMorphingPlatterView, UIVisualEffectView, UITapGestureRecognizer, _UIContextMenuStyle, _UIContextMenuLayoutArbiterOutput, UIView, NSString, UITargetedPreview, _UIFlocker, UIViewFloatAnimatableProperty, _UIContextMenuView, NSArray, _UIContextMenuActionScrubbingHandoffGestureRecognizer, _UIContextMenuPanController;
@protocol _UIContextMenuPresentationControllerDelegate;

@interface _UIContextMenuPresentationController : UIPresentationController <_UIContextMenuViewDelegate, UIGestureRecognizerDelegate, _UIContextMenuPanControllerDelegate> {
    UIView *_viewForRemoteTextEffectsWindowMatchAnimation;
}

@property (retain, nonatomic) UITapGestureRecognizer *platterActionTapGestureRecognizer;
@property (retain, nonatomic) UITapGestureRecognizer *dismissalTapGestureRecognizer;
@property (retain, nonatomic) _UIContextMenuActionScrubbingHandoffGestureRecognizer *actionScrubbingHandoffGestureRecognizer;
@property (retain, nonatomic) _UIFulfilledContextMenuConfiguration *displayedConfiguration;
@property (retain, nonatomic) UITargetedPreview *sourcePreview;
@property (retain, nonatomic) _UIContextMenuPanController *platterPanController;
@property (retain, nonatomic) _UIContextMenuLayoutArbiter *layoutArbiter;
@property (copy, nonatomic) _UIContextMenuStyle *currentStyle;
@property (nonatomic) struct CGSize { double width; double height; } platterContentSize;
@property (nonatomic) BOOL platterContentSizeDidChange;
@property (weak, nonatomic) id<_UIContextMenuPresentationControllerDelegate> delegate;
@property (readonly, nonatomic) UIView *platterTransitionView;
@property (readonly, nonatomic) UIView *platterContainerView;
@property (readonly, nonatomic) UIVisualEffectView *backgroundEffectView;
@property (readonly, nonatomic) _UIMorphingPlatterView *contentPlatterView;
@property (readonly, nonatomic) _UIContextMenuView *menuView;
@property (readonly, nonatomic) _UIFlocker *flocker;
@property (copy, nonatomic) NSArray *passthroughViews;
@property (nonatomic) BOOL passthroughInteractionTouchEatingDisabledForSearchSuggestions;
@property (nonatomic) BOOL isAnimatingPresentation;
@property (readonly, nonatomic) BOOL isOccludingControls;
@property (readonly, nonatomic) _UIContextMenuLayoutArbiterOutput *currentLayout;
@property (readonly, nonatomic) UIViewFloatAnimatableProperty *backgroundViewAnimationProgress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_actionsOnlyViewControllerForSourcePreview:(id)a0;

- (void)_keyboardWillShow:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_baseContentInsetsWithLeftMargin:(double *)a0 rightMargin:(double *)a1;
- (long long)presentationStyle;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (BOOL)_shouldKeepCurrentFirstResponder;
- (BOOL)_shouldPreserveFirstResponder;
- (void)_applicationWillResignActive:(id)a0;
- (void)dismissalTransitionWillBegin;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameOfPresentedViewInContainerView;
- (BOOL)_shouldDisableInteractionDuringTransitions;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_shouldOccludeDuringPresentation;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)_traitCollectionForChildEnvironment:(id)a0;
- (id)preferredFocusEnvironments;
- (void)presentationTransitionDidEnd:(BOOL)a0;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)_keyboardWillHide:(id)a0;
- (void)presentationTransitionWillBegin;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)enumeratePlatterViewsWithBlock:(id /* block */)a0;
- (void)platterPanControllerDidTearOff:(id)a0;
- (void)_handlePlatterActionTapGesture:(id)a0;
- (unsigned long long)_preferredSubmenuHierarchyStyle;
- (BOOL)_wantsAutomaticFirstResponderWhenPresentingRemoteViewController;
- (void)_adjustViewForKeyboardVisibility:(BOOL)a0 keyboardInfo:(id)a1;
- (void)_collapseMenu;
- (void)_collapseMenuView:(id)a0 withInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 offset:(struct CGPoint { double x0; double x1; })a2 attachment:(unsigned long long)a3;
- (void)_createMenuViewIfNecessaryForMenu:(id)a0;
- (void)_enableOcclusion:(BOOL)a0;
- (void)_handleActionHandoffGesture:(id)a0;
- (void)_handleDismissalTapGesture:(id)a0;
- (BOOL)_needsToAvoidKeyboard;
- (void)_preDismissalTasks;
- (BOOL)_shouldRestoreFirstResponder;
- (void)_testing_dismissByTappingOutside;
- (void)_testing_tapAnAction;
- (void)_updateActionsViewReversesOrderForAttachment:(unsigned long long)a0;
- (void)_updateLayoutAndAttachment:(BOOL)a0;
- (void)_updatePlatterAndActionViewLayoutForce:(BOOL)a0 updateAttachment:(BOOL)a1;
- (void)_updatePlatterAndActionViewLayoutForce:(BOOL)a0 updateAttachment:(BOOL)a1 adjustDetent:(BOOL)a2;
- (void)_updatePlatterContainerViewTraitCollection;
- (void)_updatePlatterContentSizeWithPreferredContentSize:(struct CGSize { double x0; double x1; })a0;
- (void)_updatePresentedViewFrame;
- (id)_viewForRemoteTextEffectsWindowMatchAnimation;
- (void)contextMenuView:(id)a0 didSelectElement:(id)a1;
- (id)contextMenuView:(id)a0 willDisplayMenu:(id)a1;
- (void)didSelectCancelActionInContextMenuView:(id)a0;
- (void)displayMenu:(id)a0 updateType:(unsigned long long)a1;
- (id)initWithPresentingViewController:(id)a0 configuration:(id)a1 sourcePreview:(id)a2 style:(id)a3;
- (void)platterPanControllerDidSwipeDown:(id)a0;
- (void)platterPanInteractionBegan:(id)a0 allowSwipeToDismiss:(BOOL *)a1;
- (void)platterPanInteractionEnded:(id)a0;
- (void)replaceVisibleMenu:(id)a0 withMenu:(id)a1;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)a0;
- (void)tearOffForDraggingWithDragContainerView:(id)a0;
- (void)viewTraitCollectionDidChange;

@end
