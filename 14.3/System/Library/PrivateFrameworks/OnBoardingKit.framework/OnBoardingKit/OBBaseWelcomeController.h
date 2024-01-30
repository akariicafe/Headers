@interface OBBaseWelcomeController : UIViewController

@property (nonatomic) unsigned long long templateType;

+ (struct CGSize { double x0; double x1; })preferredContentSize;

- (id)navigationItem;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)updateDirectionalLayoutMargins;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)_presentationStyleValidationCheck;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })insetsForTemplateType:(unsigned long long)a0;
- (long long)navigationBarScrollToEdgeBehavior;
- (void)_applyChromelessToBar:(long long)a0 navigationItem:(id)a1;
- (double)autoScrollEdgeTransitionDistance;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })directionalLayoutMargins;

@end
