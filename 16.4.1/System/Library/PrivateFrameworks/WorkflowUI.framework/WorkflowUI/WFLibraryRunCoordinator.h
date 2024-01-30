@class NSHashTable, NSString, WFExecutableAutoShortcut, WFWorkflowReference, WFAction, WFDialogTransformer, WFShortcutsAppRunnerClient, NSProgress, WFWorkflowRunEvent, WFDatabase;
@protocol WFLibraryRunCoordinatorDelegate;

@interface WFLibraryRunCoordinator : NSObject <WFWorkflowRunnerClientDelegate>

@property (readonly, copy, nonatomic) NSString *source;
@property (retain, nonatomic) WFShortcutsAppRunnerClient *workflowRunnerClient;
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
@property (retain, nonatomic) WFExecutableAutoShortcut *runningAutoShortcut;
@property (weak, nonatomic) id<WFLibraryRunCoordinatorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)view;
- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;
- (void)registerObserver:(id)a0;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)unregisterObserver:(id)a0;
- (void)stop;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (void).cxx_destruct;
- (void)accessibilityAnnounce:(id)a0;
- (void)didFinishRunningWorkflow:(id)a0 withError:(id)a1;
- (id)initWithSource:(id)a0 database:(id)a1;
- (void)openWorkflowReferenceAndRun:(id)a0 fromSource:(id)a1 withInput:(id)a2 state:(id)a3 requestOutput:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)resumeWorkflowReference:(id)a0 fromSource:(id)a1 withState:(id)a2;
- (void)runAutoShortcut:(id)a0 withLNAction:(id)a1 andMetadata:(id)a2;
- (void)runWorkflowReference:(id)a0 fromSource:(id)a1 withInput:(id)a2 requestOutput:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)updateProgress:(double)a0 waiting:(BOOL)a1 cancelled:(BOOL)a2 forWorkflow:(id)a3;

@end
