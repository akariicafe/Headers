@interface WFGetDistanceAction : WFAction

+ (unsigned long long)transportTypeFromString:(id)a0;

- (void)runAsynchronouslyWithInput:(id)a0;
- (id)contentDestinationWithError:(id *)a0;
- (id)smartPromptWithContentDescription:(id)a0 contentDestination:(id)a1 workflowName:(id)a2;
- (void)getDirectDistanceFromOrigin:(id)a0 toDestination:(id)a1;
- (void)getDistanceFromOrigin:(id)a0 toDestination:(id)a1 transportType:(unsigned long long)a2;
- (void)finishRunningWithDistance:(double)a0;
- (BOOL)originIsCurrentLocation;
- (BOOL)destinationIsCurrentLocation;
- (BOOL)locationParameterIsCurrentLocation:(id)a0;
- (id)noLocationError;

@end
