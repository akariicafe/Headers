@class NSString, NTKLocationManager;

@interface _NTKRelevanceEngineLocationManager : RELocationManager {
    NTKLocationManager *_locationManager;
    NSString *_token;
}

- (void).cxx_destruct;
- (id)currentLocation;
- (void)stopLocationUpdates;
- (id)initWithLocationManager:(id)a0;
- (void)startLocationUpdatesWithHandler:(id /* block */)a0;

@end
