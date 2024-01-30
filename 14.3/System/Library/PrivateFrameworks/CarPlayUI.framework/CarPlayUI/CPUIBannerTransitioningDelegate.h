@class NSString;

@interface CPUIBannerTransitioningDelegate : NSObject <BNBannerTransitioningDelegate>

@property (nonatomic, getter=isResizeAnimationCustomizationPermitted) BOOL resizeAnimationCustomizationPermitted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2 userInfo:(id)a3;
- (id)animationControllerForDismissedController:(id)a0 userInfo:(id)a1;
- (Class)_bannerTransitionAnimatorClassForAnimationStyle:(long long)a0;

@end
