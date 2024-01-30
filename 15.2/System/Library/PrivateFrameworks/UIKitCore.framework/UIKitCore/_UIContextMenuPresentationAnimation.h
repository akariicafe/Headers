@class _UIContextMenuAnimator, NSArray, NSString, _UIContextMenuReparentingContainerView, _UIContextMenuPresentationController, UITargetedPreview, _UIPortalView, UIViewPropertyAnimator, UIViewFloatAnimatableProperty, _UIContextMenuLayoutArbiterOutput;
@protocol _UIContextMenuPresentationAnimationDelegate;

@interface _UIContextMenuPresentationAnimation : NSObject <_UIClickPresentationTransition>

@property (weak, nonatomic) _UIContextMenuPresentationController *presentationController;
@property (nonatomic) BOOL isDismissTransition;
@property (nonatomic) BOOL reparentsInDestinationContainer;
@property (retain, nonatomic) _UIPortalView *reparentingPortalView;
@property (retain, nonatomic) UITargetedPreview *trackedPreviewForReparenting;
@property (retain, nonatomic) _UIContextMenuReparentingContainerView *reparentingContainerView;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *animationProgress;
@property (copy, nonatomic) id /* block */ reparentingAnimationBlock;
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

- (id)_containerView;
- (id)_platterView;
- (BOOL)_shouldAnimateBackgroundEffects;
- (id)_menuView;
- (void)_anchorTransitionViewToTargetedPreview:(id)a0;
- (void)prepareTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)_setBackgroundVisible:(BOOL)a0;
- (void)_presentation_applyBackgroundEffectWithProgress:(double)a0;
- (id)_backgroundView;
- (void)transitionDidEnd:(BOOL)a0;
- (id)_platterTransitionView;
- (void)_installAccessories;
- (void)_performAlongsideAnimations;
- (void)_performReduceMotionAppearanceTransition;
- (void)_prepareReparentingAnimationWithDismissalTarget:(id)a0;
- (void)_updateAccessoryAttachment:(id)a0;
- (void).cxx_destruct;
- (void)_actuallyPerformTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)_performReduceMotionDisappearanceTransition;
- (void)animateForDragSetDown;
- (BOOL)_isDismissingToDrag;
- (id)initWithPresentationController:(id)a0 asDismissal:(BOOL)a1;
- (void)performTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (id)_targetedPreviewForDismissalAnimation;
- (void)_prepareAnimatablePropertyBasedAnimations;

@end
