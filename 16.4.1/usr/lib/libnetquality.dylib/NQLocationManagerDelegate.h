@class NSString, GaussianSampleGenerator, CLLocationManager, CLLocation, NSObject;
@protocol OS_dispatch_queue;

@interface NQLocationManagerDelegate : NSObject <CLLocationManagerDelegate> {
    CLLocation *currentLocation;
    GaussianSampleGenerator *gaussian;
    CLLocationManager *customLocationManager;
    NSObject<OS_dispatch_queue> *customLocationManagerQueue;
}

@property BOOL fuzzingEnabled;
@property (readonly) long long precision;
@property (readonly, getter=getPrivacyPresevedGeohash) NSString *currentLocationGeohash;
@property (readonly, getter=getPrivacyPreservedLat) NSString *currentLatFuzzed;
@property (readonly, getter=getPrivacyPreservedLon) NSString *currentLonFuzzed;
@property (readonly, getter=isLocationDataAvailable) BOOL locationDataAvailable;
@property (readonly, getter=isLocationSharedAuthorized) BOOL locationSharingIsAuthorized;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateLocation:(id)a0;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (id)init;
- (BOOL)requestLocation;
- (void).cxx_destruct;
- (id)getPrivate:(id)a0 via:(id /* block */)a1;
- (id)formatAndPreservePrivacy:(double)a0;

@end
