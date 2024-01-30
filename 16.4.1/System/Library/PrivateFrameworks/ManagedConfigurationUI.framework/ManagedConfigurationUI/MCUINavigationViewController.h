@interface MCUINavigationViewController : UINavigationController

@property (copy, nonatomic) id /* block */ showViewControllerCompletionBlock;

- (BOOL)shouldAutorotate;
- (void)viewDidLoad;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;

@end
