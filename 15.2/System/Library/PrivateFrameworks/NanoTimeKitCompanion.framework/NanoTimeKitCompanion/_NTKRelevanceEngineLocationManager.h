@class NSString, NTKLocationManager;

@interface _NTKRelevanceEngineLocationManager : RELocationManager {
    NTKLocationManager *_locationManager;
    NSString *_token;
}

- (id)initWithLocationManager:(id)a0;
- (void).cxx_destruct;
- (id)currentLocation;
- (void)stopLocationUpdates;
- (void)startLocationUpdatesWithHandler:(id /* block */)a0;

@end
