@interface MCUINavigationViewController : UINavigationController

@property (copy, nonatomic) id /* block */ showViewControllerCompletionBlock;

- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
