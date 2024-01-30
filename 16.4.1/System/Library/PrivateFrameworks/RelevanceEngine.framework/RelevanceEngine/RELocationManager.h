@interface RELocationManager : NSObject

+ (id)locationManager;
+ (id)simulatedLocationManager;

- (id)currentLocation;
- (void)startLocationUpdatesWithHandler:(id /* block */)a0;
- (void)stopLocationUpdates;

@end
