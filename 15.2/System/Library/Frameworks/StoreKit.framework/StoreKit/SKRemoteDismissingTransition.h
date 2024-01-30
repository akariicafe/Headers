@class NSString, UIViewController;
@protocol SKRemoteDismissingViewController;

@interface SKRemoteDismissingTransition : NSObject <UIViewControllerAnimatedTransitioning>

@property (weak, nonatomic) UIViewController<SKRemoteDismissingViewController> *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0;
- (void)animateTransition:(id)a0;
- (double)transitionDuration:(id)a0;
- (void).cxx_destruct;
- (void)dismissRemoteViewController:(id)a0;

@end
