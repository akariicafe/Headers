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

- (void)_updateConfiguration;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (id)initWithConfiguration:(id)a0;
- (id)popViewControllerAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (id)popViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_dismissForLastViewController:(BOOL)a0;
- (void)pushViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)updatePreferredFocusedViewStateForFocus:(BOOL)a0;

@end
