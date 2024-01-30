@class NSString, SFSearchResult, WFSuggestionsWorkflowRunnerClient;
@protocol ATXActionSearchResultExecutionDelegate;

@interface ATXActionSearchResultExecution : NSObject <WFWorkflowRunnerClientDelegate>

@property (retain, nonatomic) WFSuggestionsWorkflowRunnerClient *workflowRunnerClient;
@property (retain, nonatomic) SFSearchResult *searchResult;
@property (weak, nonatomic) id<ATXActionSearchResultExecutionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;
- (void)executeShortcut;
- (void).cxx_destruct;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithError:(id)a1 cancelled:(BOOL)a2;
- (BOOL)_delegateDoesRespond;
- (BOOL)_shouldTellDelegateToClearActionOnDismissal:(long long)a0;
- (void)_spawnShortcutExecutionWithShortcut:(id)a0;

@end
