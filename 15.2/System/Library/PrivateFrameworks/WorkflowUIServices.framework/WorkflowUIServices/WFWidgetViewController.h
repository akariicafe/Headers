@class NSObject, NSString, WFObservableResult, WFWidgetOptions, WFWidgetWorkflowRunnerClient, WFWidgetGridView;
@protocol OS_os_log;

@interface WFWidgetViewController : UIViewController <WFWidgetGridViewDelegate, WFWorkflowRunnerClientDelegate, WFObservableResultObserver>

@property (retain, nonatomic) WFObservableResult *observedResult;
@property (readonly, nonatomic) WFWidgetGridView *gridView;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) WFWidgetOptions *options;
@property (retain, nonatomic) WFWidgetWorkflowRunnerClient *client;
@property (nonatomic) BOOL running;
@property (nonatomic) BOOL needsLayout;
@property (readonly, nonatomic) NSObject<OS_os_log> *log;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)runningStates;
+ (id)progressSubscribers;

- (void)viewWillAppear:(BOOL)a0;
- (id)initWithOptions:(id)a0;
- (void)viewWillLayoutSubviews;
- (BOOL)_canShowWhileLocked;
- (void)observableResultDidChange:(id)a0;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)loadView;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithError:(id)a1 cancelled:(BOOL)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)gridView:(id)a0 didTapCell:(id)a1;
- (void)gridView:(id)a0 cellDidTransitionToRunningState:(long long)a1;
- (void)gridViewDidFinishLayout:(id)a0;
- (void)performInitialFetch;
- (void)layoutWithObservableResult:(id)a0;
- (void)refreshWorkflows;
- (void)addDefaultShortcutsIfNecessaryWithCompletionHandler:(id /* block */)a0;
- (void)showRunningUIForCell:(id)a0;
- (void)stopRunningWithCell:(id)a0;
- (void)resumeRunningWithCell:(id)a0;
- (void)removeStaleRunningContexts;
- (void)restoreRunningStateIfNecessary;
- (id /* block */)publishingHandlerForCell:(id)a0;
- (id)runningContextForWorkflowIdentifier:(id)a0;
- (void)startObservingContentSizeCategoryNotifications;
- (void)stopObservingContentSizeCategoryNotifications;

@end
