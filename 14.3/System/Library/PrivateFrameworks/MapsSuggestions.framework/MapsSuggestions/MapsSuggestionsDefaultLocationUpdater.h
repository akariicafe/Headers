@class NSString, CLLocationManager;

@interface MapsSuggestionsDefaultLocationUpdater : MapsSuggestionsBaseLocationUpdater <CLLocationManagerDelegate, MapsSuggestionsLocationUpdater> {
    CLLocationManager *_locationManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *uniqueName;

- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)onStartImplementation;
- (void)onStopImplementation;
- (void)locationManager:(id)a0 didChangeAuthorizationStatus:(int)a1;

@end
