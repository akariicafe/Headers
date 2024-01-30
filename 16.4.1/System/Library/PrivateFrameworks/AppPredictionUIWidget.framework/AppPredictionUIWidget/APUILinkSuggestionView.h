@class NSString, ATXLinkActionContainer, WFWorkflowRunnerClient, UITapGestureRecognizer;

@interface APUILinkSuggestionView : APUISuggestionView <WFWorkflowRunnerClientDelegate> {
    ATXLinkActionContainer *_linkAction;
    UITapGestureRecognizer *_tapRecognizer;
    WFWorkflowRunnerClient *_workflowRunnerClient;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_tapRecognized:(id)a0;
- (void)workflowRunnerClient:(id)a0 didStartRunningWorkflowWithProgress:(id)a1;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (void).cxx_destruct;
- (void)layoutSuggestion:(id)a0;

@end
