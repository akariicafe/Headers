@class UIViewController, NSArray, UIAlertController, NSHashTable, NSMapTable, VUIModalPresentationConfiguration;

@interface VUIModalPresentationNavigationController : UINavigationController {
    NSHashTable *_presentedViewControllers;
    UIViewController *_rootViewController;
    NSArray *_previousViewControllers;
    NSMapTable *_pushCompletionBlocks;
    NSMapTable *_popCompletionBlocks;
}

@property (retain, nonatomic) VUIModalPresentationConfiguration *configuration;
@property (readonly, nonatomic) NSHashTable *presentedViewControllers;
@property (weak, nonatomic) UIAlertController *containingAlertController;

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
