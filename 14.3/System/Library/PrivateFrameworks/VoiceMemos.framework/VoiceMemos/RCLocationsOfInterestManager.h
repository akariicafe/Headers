@class NSArray, NSString, CLLocationManager, CLLocation, NSObject;
@protocol OS_dispatch_queue;

@interface RCLocationsOfInterestManager : NSObject <CLLocationManagerDelegate> {
    int _authorizationStatus;
    CLLocationManager *_locationManager;
    CLLocation *_currentLocation;
    NSArray *_locationsOfInterest;
    BOOL _isFetchingPlacesOfInterest;
    BOOL _active;
    unsigned long long _placeInferencePolicy;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (readonly) CLLocation *currentLocation;
@property (readonly, copy) NSArray *locationsOfInterest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)init;
- (void)locationManager:(id)a0 didUpdateLocations:(id)a1;
- (void)locationManager:(id)a0 didFailWithError:(id)a1;
- (void).cxx_destruct;
- (void)_startMonitoringLocation;
- (void)stop;
- (void)_didFetchPlaceInferences:(id)a0 location:(id)a1 error:(id)a2;
- (void)_stopMonitoringLocation;
- (void)_requestPlaceInferences;
- (void)start;

@end
