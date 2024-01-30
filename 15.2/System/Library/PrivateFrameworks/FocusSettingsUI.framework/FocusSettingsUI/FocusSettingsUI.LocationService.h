@interface FocusSettingsUI.LocationService : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ _queryFragment;
    void /* unknown type, empty encoding */ _status;
    void /* unknown type, empty encoding */ _searchResults;
    void /* unknown type, empty encoding */ queryCancellable;
    void /* unknown type, empty encoding */ locationManager;
    void /* unknown type, empty encoding */ locationQueue;
    void /* unknown type, empty encoding */ localRegion;
    void /* unknown type, empty encoding */ searchNearCurrentLocation;
}

- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
