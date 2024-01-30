@class NSString;
@protocol SiriUINavigationTransitioning, UINavigationControllerDelegate;

@interface _SiriUINavigationControllerDelegateAdapter : NSObject <UINavigationControllerDelegate>

@property (weak, nonatomic) id<UINavigationControllerDelegate> externalDelegate;
@property (retain, nonatomic) id<SiriUINavigationTransitioning> transitionController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (id)navigationController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)a0;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (void).cxx_destruct;
- (id)navigationController:(id)a0 animationControllerForOperation:(long long)a1 fromViewController:(id)a2 toViewController:(id)a3;

@end
