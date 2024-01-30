@class NSString, CLLocationManager;

@interface MapsSuggestionsDefaultLocationUpdater : MapsSuggestionsBaseLocationUpdater <CLLocationManagerDelegate, MapsSuggestionsLocationUpdater> {
    CLLocationManager *_locationManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *uniqueName;

- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)onStartImplementation;
- (void)onStopImplementation;

@end
