@class WFSuggestionsWorkflowRunnerClient, NSString, ATXAction, UITapGestureRecognizer;

@interface APUIActionSuggestionView : APUISuggestionView <WFWorkflowRunnerClientDelegate> {
    ATXAction *_atxAction;
    UITapGestureRecognizer *_tapRecognizer;
    WFSuggestionsWorkflowRunnerClient *_workflowRunnerClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;
- (void).cxx_destruct;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithError:(id)a1 cancelled:(BOOL)a2;
- (void)_tapRecognized:(id)a0;
- (void)_setAppImageViewWithImage:(id)a0;
- (void)_setAppImageViewWithBundleIdentifier:(id)a0;
- (void)layoutSuggestion:(id)a0;

@end
