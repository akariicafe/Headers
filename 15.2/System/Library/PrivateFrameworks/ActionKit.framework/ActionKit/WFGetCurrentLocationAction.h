@interface WFGetCurrentLocationAction : WFAction

+ (BOOL)outputIsExemptFromTaintTrackingInheritance;

- (void)runAsynchronouslyWithInput:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;

@end
