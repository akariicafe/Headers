@class PUOneUpPhotosSharingTransitionContext, UIViewController, NSString;
@protocol PUOneUpAssetTransitionViewController, PUOneUpSharingAnimationControllerDelegate;

@interface PUOneUpSharingAnimationController : _UISheetAnimationController <PUOneUpAssetTransition> {
    BOOL _interruptibleAnimatorForTransitionWasCalled;
}

@property (readonly, nonatomic) PUOneUpPhotosSharingTransitionContext *oneUpTransitionContext;
@property (readonly, weak, nonatomic) UIViewController<PUOneUpAssetTransitionViewController> *presentingViewController;
@property (weak, nonatomic) id<PUOneUpSharingAnimationControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)_configurePhotoView:(id)a0 withContentHelper:(id)a1;
- (double)transitionDuration:(id)a0;
- (void)_installTransitioningBadgeViewsForAssetTransitionInfo:(id)a0 inTransitioningView:(id)a1;
- (id)interruptibleAnimatorForTransition:(id)a0;
- (id)initWithTransitionContext:(id)a0 presentingViewController:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
