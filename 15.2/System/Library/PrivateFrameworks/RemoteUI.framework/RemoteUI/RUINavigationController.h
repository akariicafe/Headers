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
- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (void)setSupportedInterfaceOrientations:(unsigned long long)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)a0;
- (void)_menuButtonPressed:(id)a0;

@end
