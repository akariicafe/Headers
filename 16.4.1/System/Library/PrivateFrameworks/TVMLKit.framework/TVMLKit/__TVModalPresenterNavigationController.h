@class NSArray, NSString, NSMapTable, UIView, UIViewController;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface __TVModalPresenterNavigationController : UINavigationController <UIGestureRecognizerDelegate, _TVModalPresenterFocusing, _TVApplicationInspectorDocumentProvider> {
    UIViewController *_rootViewController;
    NSMapTable *_pushCompletionBlocks;
    NSMapTable *_popCompletionBlocks;
    BOOL _isModalNavVisisble;
}

@property (retain, nonatomic) NSArray *previousViewControllers;
@property (copy, nonatomic) id /* block */ dismissalBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;

- (BOOL)shouldAutorotate;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)activeDocument;
- (id)initWithRootViewController:(id)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)reset;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (void)popViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_dismissForLastViewController:(BOOL)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)updatePreferredFocusedViewStateForFocus:(BOOL)a0;
- (void)_dismissForLastViewController;
- (void)_ensureNavigationBarHiddenSafelyForViewSize:(struct CGSize { double x0; double x1; })a0;

@end
