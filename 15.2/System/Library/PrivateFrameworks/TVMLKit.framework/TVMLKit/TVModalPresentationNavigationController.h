@class NSHashTable, UIView, NSArray, NSString, UIViewController, UIAlertController, TVModalPresentationConfiguration, NSMapTable;
@protocol UIFocusEnvironment, UIFocusItemContainer;

@interface TVModalPresentationNavigationController : UINavigationController <_TVModalPresenterFocusing> {
    NSHashTable *_presentedViewControllers;
    UIViewController *_rootViewController;
    NSArray *_previousViewControllers;
    NSMapTable *_pushCompletionBlocks;
    NSMapTable *_popCompletionBlocks;
}

@property (readonly, nonatomic) NSHashTable *presentedViewControllers;
@property (weak, nonatomic) UIAlertController *containingAlertController;
@property (retain, nonatomic) TVModalPresentationConfiguration *configuration;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) id<UIFocusEnvironment> parentFocusEnvironment;
@property (readonly, nonatomic) id<UIFocusItemContainer> focusItemContainer;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)popViewControllerAnimated:(BOOL)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_updateConfiguration;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (id)popViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)updatePreferredFocusedViewStateForFocus:(BOOL)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_dismissForLastViewController:(BOOL)a0;

@end
