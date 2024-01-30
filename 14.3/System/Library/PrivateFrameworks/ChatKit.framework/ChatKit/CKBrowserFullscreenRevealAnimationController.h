@class UIViewPropertyAnimator, NSString;

@interface CKBrowserFullscreenRevealAnimationController : NSObject <UIViewControllerAnimatedTransitioning>

@property (retain, nonatomic) UIViewPropertyAnimator *ascentDescentAnimator;
@property (nonatomic, getter=isPresenting) BOOL presenting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
