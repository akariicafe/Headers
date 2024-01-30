@class SBViewControllerTransitionContext, NSArray, NSString, NSHashTable;
@protocol SBNestingViewControllerDelegate;

@interface SBNestingViewController : UIViewController <SBNestingViewControllerDelegate, SBViewControllerTransitionContextDelegate>

@property (readonly, nonatomic) BOOL isTransitioning;
@property (nonatomic) long long currentTransitionOperation;
@property (retain, nonatomic) SBViewControllerTransitionContext *currentTransition;
@property (copy, nonatomic) id /* block */ clientOperationCompletion;
@property (readonly, nonatomic) SBNestingViewController *viewControllerCurrentlyDrivingTransition;
@property (retain, nonatomic) NSHashTable *transitionObservers;
@property (retain, nonatomic) SBNestingViewController *nestedViewController;
@property (weak, nonatomic) SBNestingViewController *parentNestingViewController;
@property (readonly, nonatomic) BOOL wantsModalPresentation;
@property (weak, nonatomic) id<SBNestingViewControllerDelegate> delegate;
@property (readonly, copy, nonatomic) NSArray *nestedViewControllers;
@property (readonly, nonatomic) SBNestingViewController *deepestNestedDescendantViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)transitionCoordinator;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)removeTransitionObserver:(id)a0;
- (void)addTransitionObserver:(id)a0;
- (void)nestingViewController:(id)a0 willPerformOperation:(long long)a1 onViewController:(id)a2 withTransitionCoordinator:(id)a3;
- (void)viewWillDisappear:(BOOL)a0;
- (void)transitionDidFinish:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (id)nestingViewController:(id)a0 interactionControllerForAnimationController:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)_descriptionForOperation:(long long)a0;
- (void)_handleAddChildViewController:(id)a0;
- (void)_handleRemoveChildViewController:(id)a0;
- (void)_handleWillAddChildViewController:(id)a0;
- (void)_handleWillRemoveChildViewController:(id)a0;
- (void)_performOperation:(long long)a0 onViewController:(id)a1 animated:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)_setFinalStateForTransitioningViewController:(id)a0;
- (BOOL)_shouldAddTransitioningViewControllerAfterCurrentTransitionCompletes;
- (void)_updateStateForTransitioningViewController:(id)a0;
- (void)addNestedViewController:(id)a0;
- (void)addViewToHierarchyForNestedViewController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForNestedViewController:(id)a0 afterOperation:(long long)a1 withParentContainerSize:(struct CGSize { double x0; double x1; })a2;
- (id)nestingViewController:(id)a0 animationControllerForOperation:(long long)a1 onViewController:(id)a2 animated:(BOOL)a3;
- (id)nestingViewController:(id)a0 sourceViewForPresentingViewController:(id)a1;
- (void)nestingViewController:(id)a0 willPresentViewController:(id)a1;
- (void)popNestedViewControllerAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)pushNestedViewController:(id)a0 animated:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void)removeNestedViewController:(id)a0;
- (void)removeViewFromHierarchyForNestedViewController:(id)a0;
- (void)setNestedViewControllers:(id)a0 withCompletion:(id /* block */)a1;
- (void)transitionDidBegin:(id)a0;
- (void)transitionDidReverse:(id)a0;
- (void)transitionWillBegin:(id)a0;
- (void)transitionWillFinish:(id)a0;
- (void)transitionWillReverse:(id)a0;
- (void)traverseNestedViewControllersWithBlock:(id /* block */)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 forOperation:(long long)a1 withTransitionCoordinator:(id)a2;

@end
