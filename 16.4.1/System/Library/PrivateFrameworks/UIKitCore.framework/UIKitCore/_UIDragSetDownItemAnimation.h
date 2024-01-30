@class UIView, _DUIVisibleDroppedItem, UIViewPropertyAnimator, UIWindow, _UIPlatterContainerView, _UIPortalView, UITargetedDragPreview, _UIPlatterView, UIDragItem;
@protocol _UIDragSetDownAnimationTarget, _UIDragSetDownItemAnimationDelegate, UIViewSpringAnimationBehaviorDescribing;

@interface _UIDragSetDownItemAnimation : NSObject

@property (weak, nonatomic) id<_UIDragSetDownItemAnimationDelegate> delegate;
@property (retain, nonatomic) UIWindow *window;
@property (retain, nonatomic) id<_UIDragSetDownAnimationTarget> visualTarget;
@property (retain, nonatomic) UITargetedDragPreview *targetedDropPreview;
@property (retain, nonatomic) UITargetedDragPreview *updatedTargetedDropPreview;
@property (nonatomic) struct CAPoint3D { double x; double y; double z; } center;
@property (nonatomic) double initialDistanceFromTargetFrame;
@property (nonatomic) double targetCenterZ;
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

- (void).cxx_destruct;
- (void)configureSystemDefaultAnimation;
- (void)_setCenterAndVelocityFromDroppedItem:(id)a0;
- (void)animationCompleted;
- (id /* block */)animationCompletionHandler;
- (void)animationReachedTarget;
- (void)beginAnimation;
- (void)configureAnimation;
- (void)configureCrossfadingAnimationToTargetedPreview;
- (double)estimatedFractionCompleteOfAnimation;
- (id)initWithDragItem:(id)a0 droppedItem:(id)a1 window:(id)a2 defaultAnimation:(BOOL)a3 sourceAnimation:(BOOL)a4 delegate:(id)a5;
- (BOOL)needsReparenting;
- (void)performSpringAnimations:(id /* block */)a0;
- (void)performTrackingAnimations:(id /* block */)a0;
- (void)prepareAnimationInWindow;
- (void)prepareToBeginAnimation;
- (void)reparentRetargetingContainerViewInTargetContainer;
- (void)updateAnimationTargeting;
- (void)updateCurrentTargetFrame;
- (void)updateDroppedItem:(id)a0;
- (void)updateTargetedDropPreview:(id)a0;

@end
