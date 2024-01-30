@class WFEditorHostingViewController, NSProgress, WFWorkflow, WFContextualActionSuggester, HMHome;
@protocol WFEditorAuxiliaryViewPresenter, WFEditorViewControllerDelegate;

@interface WFEditorViewController : UIViewController <WFEditorHostingViewControllerDelegate>

@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) WFEditorHostingViewController *hostingViewController;
@property (weak, nonatomic) id<WFEditorViewControllerDelegate> delegate;
@property (weak, nonatomic) id<WFEditorAuxiliaryViewPresenter> auxiliaryViewPresenter;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic) BOOL canShowEmptyState;
@property (nonatomic) BOOL canShowInputAction;
@property (readonly, nonatomic) NSProgress *workflowRunningProgress;
@property (nonatomic) HMHome *home;
@property (retain, nonatomic) WFContextualActionSuggester *actionSuggester;

- (void)loadView;
- (void).cxx_destruct;
- (id)initWithWorkflow:(id)a0;
- (void)stop;
- (id)contentScrollViewForEdge:(unsigned long long)a0;
- (void)appendAction:(id)a0;
- (void)editorHostingViewController:(id)a0 didChangeRunningState:(BOOL)a1 isWaiting:(BOOL)a2;
- (void)editorHostingViewControllerDidFinishRunning:(id)a0 cancelled:(BOOL)a1;
- (void)editorHostingViewController:(id)a0 didChangeVariablePickingState:(BOOL)a1;
- (void)actionsDidChangeInEditorHostingViewController:(id)a0;
- (void)runWithSource:(id)a0;
- (void)stopPickingVariables;
- (void)scrollToAction:(id)a0;
- (void)showActionError:(id)a0 for:(id)a1;
- (void)performScrollingTest:(id)a0;
- (void)reportSuggestionSessionEnded;

@end
