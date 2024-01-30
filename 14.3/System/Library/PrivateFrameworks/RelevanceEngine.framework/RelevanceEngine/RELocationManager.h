@interface RELocationManager : NSObject

+ (id)locationManager;
+ (id)simulatedLocationManager;

- (id)currentLocation;
- (void)stopLocationUpdates;
- (void)startLocationUpdatesWithHandler:(id /* block */)a0;

@end
