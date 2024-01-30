@protocol WFTriggerComposeViewControllerDelegate;

@interface WFTriggerComposeViewController : WFComposeViewController

@property (readonly, nonatomic) unsigned long long mode;
@property (weak, nonatomic) id<WFTriggerComposeViewControllerDelegate> delegate;

- (void)willMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (id)doneBarButtonItem;
- (BOOL)isModalInPresentation;
- (void)viewDidLoad;
- (void)didTapNext:(id)a0;
- (unsigned long long)navigationUpdateBehavior;
- (id)emptyStateString;
- (void)dismissForTutorial:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)initWithWorkflow:(id)a0 mode:(unsigned long long)a1 database:(id)a2;

@end
