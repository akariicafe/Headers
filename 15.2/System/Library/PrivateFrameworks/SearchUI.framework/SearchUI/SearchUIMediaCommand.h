@class INIntent, NSString, WFSpotlightResultWorkflowRunnerClient, SFMediaMetadata;

@interface SearchUIMediaCommand : SearchUITapCommand <WFWorkflowRunnerClientDelegate>

@property (copy) id /* block */ completion;
@property (retain) WFSpotlightResultWorkflowRunnerClient *workflowClient;
@property (readonly) NSString *clientSelectedBundleIdentifier;
@property (readonly) INIntent *intent;
@property (readonly) SFMediaMetadata *mediaMetadata;
@property (readonly) BOOL supportsIntentPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)workflowRunnerClient:(id)a0 didFinishRunningWorkflowWithOutput:(id)a1 error:(id)a2 cancelled:(BOOL)a3;
- (BOOL)prefersModalPresentation;
- (void)performCommandWithCompletion:(id /* block */)a0;
- (void)performIntent:(id)a0 withBundleIdentifier:(id)a1;
- (void)executeFallbackPath;
- (void)callCompletionIfNeeded;

@end
