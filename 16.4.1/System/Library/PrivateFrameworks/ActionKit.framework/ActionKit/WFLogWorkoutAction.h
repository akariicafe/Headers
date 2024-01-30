@interface WFLogWorkoutAction : WFAction

- (id)appIdentifier;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (id)localizedSmartPromptUsageSentenceWithcontentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)resourceAvailabilityChanged;

@end
