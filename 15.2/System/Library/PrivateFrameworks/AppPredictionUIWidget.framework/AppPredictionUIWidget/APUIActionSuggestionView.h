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

- (void).cxx_destruct;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;
- (void)_tapRecognized:(id)a0;
- (void)_setAppImageViewWithImage:(id)a0;
- (void)_setAppImageViewWithBundleIdentifier:(id)a0;
- (void)layoutSuggestion:(id)a0;

@end
