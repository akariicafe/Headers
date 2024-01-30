@class NSString;

@interface BNDefaultBannerTransitioningDelegate : NSObject <BNPresentedBannerAnimationCustomizing, BNBannerTransitioningDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isResizeAnimationCustomizationPermitted) BOOL resizeAnimationCustomizationPermitted;

- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)sizeTransitionAnimationSettingsForPresentable:(id)a0;
- (id)init;
- (Class)_bannerTransitionAnimatorClassForAnimationStyle:(long long)a0;
- (id)_sizeTransitionAnimationSettingsForViewController:(id)a0;
- (id)animationControllerForDismissedController:(id)a0 userInfo:(id)a1;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2 userInfo:(id)a3;
- (id)animationControllerForResizingController:(id)a0 userInfo:(id)a1;

@end
