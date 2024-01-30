@class NSHashTable, NSString, WFWorkflowController, WFWorkflowReference, WFAction, WFDialogTransformer, WFShortcutsAppRunnerClient, NSProgress, WFWorkflowRunEvent, WFDatabase;
@protocol WFLibraryRunCoordinatorDelegate;

@interface WFLibraryRunCoordinator : NSObject <WFWorkflowRunnerClientDelegate, WFWorkflowControllerDelegate>

@property (readonly, copy, nonatomic) NSString *source;
@property (retain, nonatomic) WFShortcutsAppRunnerClient *workflowRunnerClient;
@property (readonly, nonatomic) WFWorkflowController *workflowController;
@property (readonly, nonatomic) WFDatabase *database;
@property (readonly, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) WFAction *currentlyRunningAction;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) WFWorkflowRunEvent *runEvent;
@property (retain, nonatomic) WFDialogTransformer *dialogTransformer;
@property (retain, nonatomic) WFWorkflowReference *runningWorkflow;
@property (nonatomic) float progress;
@property (nonatomic) BOOL waiting;
@property (retain, nonatomic) NSProgress *runningWorkflowProgress;
@property (readonly, nonatomic) BOOL isRunOutOfProcess;
@property (weak, nonatomic) id<WFLibraryRunCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerObserver:(id)a0;
- (id)view;
- (void).cxx_destruct;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (void)unregisterObserver:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;
- (void)dealloc;
- (void)stop;
- (BOOL)hasApplication;
- (void)workflowControllerWillRun:(id)a0;
- (void)workflowController:(id)a0 didFinishRunningWithError:(id)a1 cancelled:(BOOL)a2;
- (void)workflowController:(id)a0 prepareToRunAction:(id)a1 withInput:(id)a2 completionHandler:(id /* block */)a3;
- (void)workflowController:(id)a0 actionDidRequestWorkflowExit:(id)a1;
- (BOOL)workflowController:(id)a0 handleUnsupportedEnvironmentForAction:(id)a1 currentState:(id)a2 completionHandler:(id /* block */)a3;
- (id)workflowController:(id)a0 parameterInputProviderForAction:(id)a1;
- (id)userInterfaceForWorkflowController:(id)a0;
- (id)initWithSource:(id)a0 database:(id)a1;
- (void)resumeWorkflowReference:(id)a0 fromSource:(id)a1 withState:(id)a2;
- (void)runWorkflowReference:(id)a0 fromSource:(id)a1 withInput:(id)a2 requestOutput:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)openWorkflowReferenceAndRun:(id)a0 fromSource:(id)a1 withInput:(id)a2 state:(id)a3 requestOutput:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)runWorkflow:(id)a0 fromSource:(id)a1 withInput:(id)a2 state:(id)a3 requestOutput:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)didFinishRunningWorkflow:(id)a0 withError:(id)a1;
- (void)updateProgress:(double)a0 waiting:(BOOL)a1 cancelled:(BOOL)a2 forWorkflow:(id)a3;
- (void)accessibilityAnnounce:(id)a0;

@end
