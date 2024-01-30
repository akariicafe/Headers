@interface MNWalkGuidanceManager : MNClassicGuidanceManager

- (int)transportType;
- (void)updateGuidanceForProceedToRouteAtLocation:(struct { double x0; double x1; })a0 routeMatch:(id)a1 remainingTime:(double)a2 distanceUntilDestination:(double)a3;
- (void)_updatePrepareForNextStep;
- (BOOL)_updateConsiderExecuteAnnouncement:(id)a0 location:(id)a1;
- (id)_combinedGuidanceForStep:(id)a0 withType:(int)a1;
- (double)_adjustedVehicleSpeed:(id)a0;

@end
