@interface WFImgurUploadAction : WFAction

- (void)runAsynchronouslyWithInput:(id)a0;
- (id)initWithIdentifier:(id)a0 definition:(id)a1 serializedParameters:(id)a2;
- (id)contentDestinationWithError:(id *)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)uploadInput:(id)a0 withAccount:(id)a1;

@end
