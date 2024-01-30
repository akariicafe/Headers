@class NSString;
@protocol SiriUINavigationTransitioning, UINavigationControllerDelegate;

@interface _SiriUINavigationControllerDelegateAdapter : NSObject <UINavigationControllerDelegate>

@property (weak, nonatomic) id<UINavigationControllerDelegate> externalDelegate;
@property (retain, nonatomic) id<SiriUINavigationTransitioning> transitionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)a0;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;
- (void).cxx_destruct;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;

@end
