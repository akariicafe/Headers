@class UIView, _DUIVisibleDroppedItem, UIViewPropertyAnimator, UIWindow, _UIPlatterContainerView, _UIPortalView, UITargetedDragPreview, _UIPlatterView, UIDragItem;
@protocol _UIDragSetDownAnimationTarget, _UIDragSetDownItemAnimationDelegate, UIViewSpringAnimationBehaviorDescribing;

@interface _UIDragSetDownItemAnimation : NSObject

@property (weak, nonatomic) id<_UIDragSetDownItemAnimationDelegate> delegate;
@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) id<_UIDragSetDownAnimationTarget> visualTarget;
@property (retain, nonatomic) UITargetedDragPreview *targetedDropPreview;
@property (retain, nonatomic) UITargetedDragPreview *updatedTargetedDropPreview;
@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (nonatomic) double initialDistanceFromTargetFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;
@property (nonatomic) BOOL defaultAnimation;
@property (nonatomic) BOOL sourceAnimation;
@property (retain, nonatomic) UIViewPropertyAnimator *propertyAnimator;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) BOOL hasStartedSpringAnimation;
@property (nonatomic) BOOL midwayToTarget;
@property (nonatomic) BOOL almostToTarget;
@property (nonatomic) BOOL reparentingCrossfadeComplete;
@property (nonatomic) BOOL updatedPreviewWasAdded;
@property (nonatomic) int animationCount;
@property (readonly, nonatomic) long long previewMode;
@property (nonatomic) struct CGPoint { double x; double y; } initialVelocity;
@property (nonatomic) struct CGPoint { double x; double y; } initialTargetVelocity;
@property (retain, nonatomic) UIView *retargetingContainerView;
@property (retain, nonatomic) _UIPortalView *retargetingContainerPortalView;
@property (retain, nonatomic) _UIPlatterView *appPlatterView;
@property (retain, nonatomic) _UIPlatterView *updatedAppPlatterView;
@property (retain, nonatomic) _UIPlatterView *druidPlatterView;
@property (retain, nonatomic) _UIPlatterContainerView *platterContainerView;
@property (retain, nonatomic) _UIPlatterView *defaultPlatterView;
@property (copy, nonatomic) id /* block */ positionHandler;
@property (copy, nonatomic) id /* block */ morphHandler;
@property (copy, nonatomic) id /* block */ midpointHandler;
@property (copy, nonatomic) id /* block */ nonAnimatedMidpointHandler;
@property (copy, nonatomic) id /* block */ nearCompletionHandler;
@property (readonly, nonatomic) UIDragItem *item;
@property (readonly, nonatomic) _DUIVisibleDroppedItem *droppedItem;
@property (readonly, nonatomic) BOOL reachedTarget;
@property (readonly, nonatomic) BOOL done;
@property (readonly, nonatomic) UIWindow *targetContainerWindow;
@property (retain, nonatomic) id<UIViewSpringAnimationBehaviorDescribing> customSpringAnimationBehavior;

- (id)initWithDragItem:(id)a0 droppedItem:(id)a1 window:(id)a2 defaultAnimation:(BOOL)a3 sourceAnimation:(BOOL)a4 delegate:(id)a5;
- (void).cxx_destruct;
- (void)animationCompleted;
- (BOOL)needsReparenting;
- (void)configureAnimation;
- (void)prepareAnimationInWindow;
- (void)animationReachedTarget;
- (void)_setCenterAndVelocityFromDroppedItem:(id)a0;
- (void)configureSystemDefaultAnimation;
- (void)configureCrossfadingAnimationToTargetedPreview;
- (void)reparentRetargetingContainerViewInTargetContainer;
- (void)updateDroppedItem:(id)a0;
- (id /* block */)animationCompletionHandler;
- (void)beginAnimation;
- (void)performTrackingAnimations:(id /* block */)a0;
- (void)performSpringAnimations:(id /* block */)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getCurrentTargetFrame;
- (double)estimatedFractionCompleteOfAnimation;
- (void)prepareToBeginAnimation;
- (void)updateTargetedDropPreview:(id)a0;
- (void)updateAnimationTargeting;

@end
