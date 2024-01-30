@class _SBModalViewControllerStackTransition, NSArray, NSMutableArray, UIViewController;
@protocol SBModalViewControllerStackDelegate;

@interface SBModalViewControllerStack : NSObject {
    UIViewController *_presentingViewController;
    NSMutableArray *_viewControllerStack;
    _SBModalViewControllerStackTransition *_currentTransition;
    NSMutableArray *_pendingTransitions;
}

@property (weak, nonatomic) id<SBModalViewControllerStackDelegate> delegate;
@property (readonly, nonatomic) NSArray *viewControllers;
@property (readonly, nonatomic) UIViewController *topViewController;

- (void)_performPendingTransitionIfNecessary;
- (id)topViewController;
- (void)_noteDidPresentViewController:(id)a0;
- (id)viewControllers;
- (void)_noteWillDismissViewController:(id)a0 animated:(BOOL)a1;
- (void)removeViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (id)_popNextPendingTransition;
- (void)_noteDidDismissViewController:(id)a0;
- (id)initWithPresentingViewController:(id)a0;
- (void)_addViewController:(id)a0 completion:(id /* block */)a1;
- (void)removeViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_setCurrentTransition:(id)a0;
- (void).cxx_destruct;
- (void)addViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_queuePendingTransition:(id)a0;
- (void)_addPendingTransition:(id)a0;
- (void)_removePendingTransition:(id)a0 forSuccess:(BOOL)a1;
- (void)_noteWillPresentViewController:(id)a0;
- (void)_removeViewController:(id)a0 completion:(id /* block */)a1;

@end
