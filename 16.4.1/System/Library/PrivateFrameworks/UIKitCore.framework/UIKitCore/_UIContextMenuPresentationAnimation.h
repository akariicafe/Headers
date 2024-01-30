@class _UIContextMenuLayoutArbiterOutput, _UIContextMenuAnimator, NSArray, NSString, _UIContextMenuReparentingContainerView, _UIContextMenuPresentationController, UITargetedPreview, _UIPortalView, UIViewPropertyAnimator, UIViewFloatAnimatableProperty, _UIGroupCompletion;
@protocol _UIContextMenuPresentationAnimationDelegate;

@interface _UIContextMenuPresentationAnimation : NSObject <_UIClickPresentationTransition>

@property (weak, nonatomic) _UIContextMenuPresentationController *presentationController;
@property (nonatomic) BOOL isDismissTransition;
@property (nonatomic) BOOL isSingleItemMenu;
@property (retain, nonatomic) _UIPortalView *reparentingPortalView;
@property (retain, nonatomic) UITargetedPreview *trackedPreviewForReparenting;
@property (retain, nonatomic) _UIContextMenuReparentingContainerView *reparentingContainerView;
@property (retain, nonatomic) UIViewFloatAnimatableProperty *animationProgress;
@property (copy, nonatomic) id /* block */ reparentingAnimationBlock;
@property (copy, nonatomic) id /* block */ accessoryAnimationBlock;
@property (retain, nonatomic) _UIContextMenuLayoutArbiterOutput *expandedLayout;
@property (retain, nonatomic) _UIGroupCompletion *groupCompletion;
@property (retain, nonatomic) UITargetedPreview *stashedDismissalPreview;
@property (weak, nonatomic) id<_UIContextMenuPresentationAnimationDelegate> delegate;
@property (retain, nonatomic) _UIContextMenuAnimator *alongsideAnimator;
@property (nonatomic) unsigned long long dismissalStyle;
@property (retain, nonatomic) NSArray *preferredBackgroundEffects;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } preferredBackgroundInsets;
@property (nonatomic) BOOL previewOverlapsMenu;
@property (copy, nonatomic) NSArray *secondarySourcePreviews;
@property (nonatomic) unsigned long long totalItemCount;
@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)_containerView;
- (id)_backgroundView;
- (void).cxx_destruct;
- (id)_accessoryViews;
- (BOOL)_shouldAnimateBackgroundEffects;
- (void)_actuallyPerformTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)_anchorTransitionViewToTargetedPreview:(id)a0;
- (id)_dismissalPreviewForSecondaryItemPreview:(id)a0;
- (void)_installAccessories;
- (BOOL)_isDismissingToDrag;
- (id)_menuView;
- (void)_performAlongsideAnimations;
- (void)_performReduceMotionAppearanceTransition;
- (void)_performReduceMotionDisappearanceTransition;
- (id)_platterTransitionView;
- (id)_platterView;
- (void)_prepareAnimatablePropertyBasedAnimations;
- (void)_prepareOverallAnimationCompletion;
- (void)_prepareReparentingAnimationWithDismissalTarget:(id)a0;
- (void)_presentation_applyBackgroundEffectWithProgress:(double)a0;
- (void)_setBackgroundVisible:(BOOL)a0;
- (id)_targetedPreviewForDismissalAnimation;
- (void)_updateAccessoryAttachment:(id)a0;
- (void)animateForDragSetDown;
- (id)initWithPresentationController:(id)a0 asDismissal:(BOOL)a1;
- (void)performTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)prepareTransitionFromView:(id)a0 toView:(id)a1 containerView:(id)a2;
- (void)transitionDidEnd:(BOOL)a0;

@end
