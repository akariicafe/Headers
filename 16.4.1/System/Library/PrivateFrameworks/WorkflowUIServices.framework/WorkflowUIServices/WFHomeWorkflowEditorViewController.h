@class NSString, WFComposeViewController;
@protocol WFHomeWorkflowEditorViewControllerDelegate;

@interface WFHomeWorkflowEditorViewController : UIViewController <WFComposeViewControllerDelegate>

@property (readonly, nonatomic) WFComposeViewController *composeViewController;
@property (weak, nonatomic) id<WFHomeWorkflowEditorViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadHomeManager;
+ (void)preloadActionRegistryIfNeeded;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)didTapDone;
- (id)doneBarButtonItem;
- (id)initWithHomeWorkflow:(id)a0 actionSetBuilder:(id)a1 home:(id)a2;
- (void)composeViewControllerRequestsDismissal:(id)a0 forTutorial:(BOOL)a1 withCompletionHandler:(id /* block */)a2;

@end
