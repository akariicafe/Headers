@interface WFSearchMapsAction : WFAction

- (id)appIdentifier;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)openMapsLink:(id)a0 inAppNamed:(id)a1;
- (void)openMapsURL:(id)a0 withAppIdentifier:(id)a1;
- (void)openMapItems:(id)a0;

@end
