@class NSString, NSMutableSet, SBHUDController, NSMutableArray;
@protocol _SBHUDHostViewControllerDelegate;

@interface _SBHUDHostViewController : SBFTouchPassThroughViewController <SBViewControllerTransitionContextDelegate> {
    NSMutableArray *_activeTransitionContexts;
    NSMutableSet *_presentedHUDs;
    NSMutableSet *_presentingHUDs;
    NSMutableSet *_executingDismissalHUDs;
    NSMutableSet *_presentingHUDsTransitionContexts;
    NSMutableSet *_dismissingHUDsTransitionContexts;
    SBHUDController *_HUDController;
    id<_SBHUDHostViewControllerDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)transitionDidFinish:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (id)_buildTransitionContextToPresentHUD:(id)a0 dismissHUD:(id)a1 animated:(BOOL)a2 delegate:(id)a3 containerView:(id)a4 completion:(id /* block */)a5;
- (void)_executeDismissHUD:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_executePresentNewHUD:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_executeViewControllerTransitionContext:(id)a0;
- (id)_transitionContextMatchingHUD:(id)a0 withinContainer:(id)a1;

@end
