@interface _REAppleParkLocationManager : RELocationManager

- (id)currentLocation;
- (void)stopLocationUpdates;
- (void)startLocationUpdatesWithHandler:(id /* block */)a0;

@end
