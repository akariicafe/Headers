@class _UIContextMenuAnimator, NSArray, NSString, _UIContextMenuReparentingContainerView, UIViewPropertyAnimator, UITargetedPreview, _UIPortalView, _UIPreviewPlatterPresentationController, UIViewFloatAnimatableProperty, _UIContextMenuLayoutArbiterOutput;
@protocol _UIContextMenuPresentationAnimationDelegate;

@interface _UIContextMenuPresentationAnimation : NSObject <_UIClickPresentationTransition>

@property (weak, nonatomic) _UIPreviewPlatterPresentationController *presentationController;
@property (nonatomic) BOOL isDismissTransition;
@property (nonatomic) BOOL reparentsInDestinationContainer;
@property (retain, nonatomic) _UIPortalView *reparentingPortalView;
@property (retain, nonatomic) UITargetedPreview *trackedPreviewForReparenting;
@property (retain, nonatomic) _UIContextMenuReparentingContainerView *reparentingContainerView;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *animationProgress;
@property (copy, nonatomic) id /* block */ reparentingAnimationBlock;
@property (copy, nonatomic) id /* block */ backgroundAnimationBlock;
@property (copy, nonatomic) id /* block */ accessoryAnimationBlock;
@property (retain, nonatomic) _UIContextMenuLayoutArbiterOutput *expandedLayout;
@property (weak, nonatomic) id<_UIContextMenuPresentationAnimationDelegate> delegate;
@property (retain, nonatomic) _UIContextMenuAnimator *alongsideAnimator;
@property (nonatomic) unsigned long long dismissalStyle;
@property (retain, nonatomic) NSArray *preferredBackgroundEffects;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } preferredBackgroundInsets;
@property (nonatomic) BOOL previewOverlapsMenu;
@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_backgroundView;
- (void).cxx_destruct;
- (id)_platterTransitionView;
- (BOOL)_isDismissingToDrag;
- (void)_prepareAnimatablePropertyBasedAnimations;
- (void)_installAccessories;
- (void)_prepareReparentingAnimationWithDismissalTarget:(id)a0;
- (BOOL)_shouldAnimateBackgroundEffects;
- (void)_updateAccessoryAttachment:(id)a0;
- (void)_actuallyPerformTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)_performReduceMotionDisappearanceTransition;
- (void)_performReduceMotionAppearanceTransition;
- (void)prepareTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)performTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (id)initWithPresentationController:(id)a0 asDismissal:(BOOL)a1;
- (void)animateForDragSetDown;
- (id)_targetedPreviewForDismissalAnimation;
- (void)_anchorTransitionViewToTargetedPreview:(id)a0;
- (void)_setBackgroundVisible:(BOOL)a0;
- (id)_platterView;
- (id)_actionsView;
- (id)_containerView;
- (void)transitionDidEnd:(BOOL)a0;

@end
