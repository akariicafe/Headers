@interface WFGetDistanceAction : WFAction

+ (unsigned long long)transportTypeFromString:(id)a0;

- (void)runAsynchronouslyWithInput:(id)a0;
- (void)getDirectDistanceFromOrigin:(id)a0 toDestination:(id)a1;
- (void)getDistanceFromOrigin:(id)a0 toDestination:(id)a1 transportType:(unsigned long long)a2;
- (void)finishRunningWithDistance:(double)a0;
- (BOOL)originIsCurrentLocation;
- (BOOL)destinationIsCurrentLocation;
- (BOOL)locationParameterIsCurrentLocation:(id)a0;
- (id)noLocationError;

@end
