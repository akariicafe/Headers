@interface NTKSimulatedLocationManager : NTKLocationManager

- (id)currentLocation;
- (id)startLocationUpdatesWithIdentifier:(id)a0 wantsGroundElevation:(BOOL)a1 handler:(id /* block */)a2;
- (id)previousLocation;
- (id)startLocationUpdatesWithIdentifier:(id)a0 handler:(id /* block */)a1;
- (void)stopLocationUpdatesForToken:(id)a0;
- (id)init;
- (id)companionLocation;

@end
