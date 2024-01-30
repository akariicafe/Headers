@interface NTKSimulatedLocationManager : NTKLocationManager

- (id)init;
- (id)previousLocation;
- (id)currentLocation;
- (id)startLocationUpdatesWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)stopLocationUpdatesForToken:(id)a0;
- (id)companionLocation;
- (id)startLocationUpdatesWithIdentifier:(id)a0 wantsGroundElevation:(BOOL)a1 handler:(id /* block */)a2;

@end
