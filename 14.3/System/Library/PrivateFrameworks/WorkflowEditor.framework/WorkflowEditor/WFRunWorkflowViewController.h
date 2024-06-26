@class WFWorkflowController, WFRunWorkflowToolbar, WFContentCollection, WFWorkflow, WFDatabase, WFAction, WFDialogTransformer, WFRunWorkflowFooterView, NSString, WFWorkflowViewController, WFWorkflowRunEvent, NSIndexPath;
@protocol WFRunWorkflowViewControllerDelegate;

@interface WFRunWorkflowViewController : UIViewController <WFModuleModelProvider, WFModuleDelegate, WFWorkflowControllerDelegate, WFModulesSupplementaryViewDataSource, WFModulesQuickLookViewDelegate, QLPreviewControllerPrivateDelegate, UIScrollViewDelegate, UIDropInteractionDelegate, WFRunWorkflowFooterViewDelegate, WFRunWorkflowToolbarDelegate>

@property (retain, nonatomic) WFWorkflowController *workflowController;
@property (retain, nonatomic) WFContentCollection *workflowInput;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) WFAction *lastRunningAction;
@property (nonatomic) BOOL runningFromOtherWorkflow;
@property (retain, nonatomic) WFDialogTransformer *dialogTransformer;
@property (weak, nonatomic) WFRunWorkflowFooterView *footerView;
@property (nonatomic) BOOL droppingInputContent;
@property (copy, nonatomic) id /* block */ prepareToRunCompletion;
@property (retain, nonatomic) NSIndexPath *prepareToRunIndexPath;
@property (retain, nonatomic) WFWorkflowRunEvent *runEvent;
@property (readonly, weak, nonatomic) WFWorkflowViewController *workflowViewController;
@property (readonly, weak, nonatomic) WFRunWorkflowToolbar *toolbar;
@property (weak, nonatomic) id<WFRunWorkflowViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly, nonatomic) WFDatabase *database;
@property (nonatomic) BOOL clearsWorkflowSettings;
@property (nonatomic) BOOL indicatesLoadingBeforeRunning;
@property (readonly, nonatomic) unsigned long long editingState;
@property (retain, nonatomic) WFAction *currentlyRunningAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (id)keyCommands;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void).cxx_destruct;
- (void)workflowControllerWillRun:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)accessibilityPerformMagicTap;
- (void)updateContentInset;
- (BOOL)previewController:(id)a0 canShareItem:(id)a1;
- (void)workflowController:(id)a0 didRunAction:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)traitCollectionDidChange:(id)a0;
- (void)previewControllerWillDismiss:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewController:(id)a0 frameForPreviewItem:(id)a1 inSourceView:(id *)a2;
- (id)previewController:(id)a0 transitionViewForPreviewItem:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)workflowController:(id)a0 didFinishRunningWithError:(id)a1 cancelled:(BOOL)a2;
- (void)workflowController:(id)a0 prepareToRunAction:(id)a1 withInput:(id)a2 completionHandler:(id /* block */)a3;
- (void)workflowController:(id)a0 actionDidRequestWorkflowExit:(id)a1;
- (BOOL)workflowController:(id)a0 handleUnsupportedUserInterfaceForAction:(id)a1 currentState:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)workflowController:(id)a0 handleUnsupportedEnvironmentForAction:(id)a1 currentState:(id)a2 completionHandler:(id /* block */)a3;
- (id)workflowController:(id)a0 parameterInputProviderForAction:(id)a1;
- (id)workflowController:(id)a0 userInterfaceForAction:(id)a1;
- (void)runToolbarStopTapped:(id)a0;
- (void)runToolbarPlayTapped:(id)a0;
- (unsigned long long)indentationLevelForModule:(id)a0 withAction:(id)a1;
- (id)module:(id)a0 displayableErrorForResourceError:(id)a1;
- (id)initWithWorkflow:(id)a0 database:(id)a1;
- (id)initWithWorkflow:(id)a0 database:(id)a1 cellConfigurationFunction:(void /* function */ *)a2;
- (void)resetToolbar;
- (void)setEditingState:(unsigned long long)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)runWorkflowFromSource:(id)a0;
- (id)createModelForAction:(id)a0;
- (void)clearQuickLook;
- (id)indexPathForAction:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForFooterInSection:(long long)a2;
- (void)generateNewModelsAndReload;
- (void)runWorkflowFooterViewDidSelectAddButton:(id)a0;
- (void)quickLookViewWantsFullscreen:(id)a0;
- (void)quickLookView:(id)a0 clickedShare:(id)a1 forContentItem:(id)a2;
- (void)updateToolbarItemsEnabledState;
- (void)dismissViewControllerWithCompletionHandler:(id /* block */)a0;
- (void)accessibilityAnnounce:(id)a0;
- (void)runWorkflowFromSource:(id)a0 withInput:(id)a1 currentState:(id)a2 completionHandler:(id /* block */)a3;
- (void)stopWorkflow;
- (void)presentSettingsViewController;
- (void)finishWorkflowWithOutput:(id)a0 error:(id)a1 cancelled:(BOOL)a2;
- (void)checkModulePreparationScrollState;
- (BOOL)shouldShowQuickLookView;
- (BOOL)shouldShowAddButton;
- (void)updateQuickLookWithCompletion:(id /* block */)a0;
- (void)scrollToQuickLook;
- (id)sourceViewForQuickLook;
- (void)runWorkflowFromKeyPress;

@end
