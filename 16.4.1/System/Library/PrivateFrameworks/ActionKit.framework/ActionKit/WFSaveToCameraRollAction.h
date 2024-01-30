@interface WFSaveToCameraRollAction : WFAction

- (id)fetchOptions;
- (id)contentDestinationWithError:(id *)a0;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)runAsynchronouslyWithAssetCollection:(id)a0 input:(id)a1;

@end
