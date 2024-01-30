@protocol WFHomeComposeViewControllerDelegate;

@interface WFHomeComposeViewController : WFComposeViewController

@property (weak, nonatomic) id<WFHomeComposeViewControllerDelegate> delegate;

+ (void)preloadHomeManager;
+ (void)preloadActionRegistryIfNeeded;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)didTapDone;
- (id)doneBarButtonItem;
- (id)initWithHomeWorkflow:(id)a0 actionSetBuilder:(id)a1 home:(id)a2;
- (void)dismissForTutorial:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithHomeWorkflow:(id)a0 actionSetBuilder:(id)a1;
- (id)initWithWorkflow:(id)a0 home:(id)a1;
- (unsigned long long)navigationUpdateBehavior;

@end
