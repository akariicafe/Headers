@interface _REAppleParkLocationManager : RELocationManager

- (id)currentLocation;
- (void)startLocationUpdatesWithHandler:(id /* block */)a0;
- (void)stopLocationUpdates;

@end
