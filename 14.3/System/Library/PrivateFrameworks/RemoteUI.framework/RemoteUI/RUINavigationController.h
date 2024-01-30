@class RUIStyle, UIViewController;

@interface RUINavigationController : UINavigationController {
    unsigned long long _ruiSupportedInterfaceOrientations;
}

@property (retain, nonatomic) RUIStyle *style;
@property (nonatomic) unsigned long long ruiModalPresentationStyle;
@property (weak, nonatomic) UIViewController *hostViewController;
@property (copy, nonatomic) id /* block */ menuDismissalHandler;
@property (copy, nonatomic) id /* block */ viewDidDisappearHandler;

- (BOOL)canBeShownFromSuspendedState;
- (void).cxx_destruct;
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)loadView;
- (void)setSupportedInterfaceOrientations:(unsigned long long)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)_menuButtonPressed:(id)a0;

@end
