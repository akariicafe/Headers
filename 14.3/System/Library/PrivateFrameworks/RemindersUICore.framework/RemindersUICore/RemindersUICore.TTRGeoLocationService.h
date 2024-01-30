@interface RemindersUICore.TTRGeoLocationService : NSObject <CLLocationManagerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ locationAccuraceUpperBound;
    void /* unknown type, empty encoding */ maximumLocationUpdatingTime;
    void /* unknown type, empty encoding */ _addressToResolvedLocationCache;
    void /* unknown type, empty encoding */ _locationToResolvedLocationCache;
    void /* unknown type, empty encoding */ currentlyGeocodingLocation;
    void /* unknown type, empty encoding */ _lastKnownCurrentLocation;
    void /* unknown type, empty encoding */ pendingLocationsToResolve;
    void /* unknown type, empty encoding */ locationManager;
    void /* unknown type, empty encoding */ blockToPerformAfterRequestingInUseAuthorization;
}

- (void)locationManagerDidChangeAuthorization:(id)a0;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (id)init;
- (void).cxx_destruct;

@end
