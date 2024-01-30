@class HMHome;
@protocol WFHomeComposeViewControllerDelegate;

@interface WFHomeComposeViewController : WFComposeViewController

@property (retain, nonatomic) HMHome *home;
@property (weak, nonatomic) id<WFHomeComposeViewControllerDelegate> delegate;

+ (void)preloadHomeManager;
+ (void)preloadActionRegistryIfNeeded;

- (void).cxx_destruct;
- (id)initWithWorkflow:(id)a0;
- (void)didTapDone;
- (id)doneBarButtonItem;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (id)initWithHomeWorkflow:(id)a0 actionSetBuilder:(id)a1 home:(id)a2;
- (unsigned long long)navigationUpdateBehavior;
- (void)dismissForTutorial:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithHomeWorkflow:(id)a0 actionSetBuilder:(id)a1;

@end
