@interface WFLogWorkoutAction : WFAction

- (id)appIdentifier;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)wasAddedToWorkflow:(id)a0;
- (void)wasRemovedFromWorkflow:(id)a0;
- (void)resourceAvailabilityChanged;

@end
