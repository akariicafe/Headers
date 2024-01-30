@class NSString, UIViewController;
@protocol SKRemoteDismissingViewController;

@interface SKRemoteDismissingTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (weak, nonatomic) UIViewController<SKRemoteDismissingViewController> *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (id)initWithViewController:(id)a0;
- (void)dismissRemoteViewController:(id)a0;

@end
