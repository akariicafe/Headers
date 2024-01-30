@interface SUMoreNavigationController : UIMoreNavigationController

+ (Class)_moreListControllerClass;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)window:(id)a0 shouldAutorotateToInterfaceOrientation:(long long)a1;
- (long long)ITunesStoreUIBarStyle;
- (id)copyScriptViewController;

@end
